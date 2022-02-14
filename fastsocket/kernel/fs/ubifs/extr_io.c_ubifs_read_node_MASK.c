
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_cnt; int leb_size; int ubi; } ;
struct ubifs_ch {int node_type; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ubifs_info const*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,int,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,void*,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ubifs_info const*,void*,int,int,int ,int ) ;
 int FUNC_8 (char*,int,...) ;

int FUNC_9(const struct ubifs_info *VAR_4, void *VAR_5, int VAR_6, int VAR_7,
      int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 struct ubifs_ch *VAR_12 = VAR_5;

 FUNC_2("LEB %d:%d, %s, length %d", VAR_8, VAR_9, FUNC_3(VAR_6), VAR_7);
 FUNC_6(VAR_8 >= 0 && VAR_8 < VAR_4->leb_cnt && VAR_9 >= 0);
 FUNC_6(VAR_7 >= VAR_2 && VAR_9 + VAR_7 <= VAR_4->leb_size);
 FUNC_6(!(VAR_9 & 7) && VAR_9 < VAR_4->leb_size);
 FUNC_6(VAR_6 >= 0 && VAR_6 < VAR_3);

 VAR_10 = FUNC_5(VAR_4->ubi, VAR_8, VAR_5, VAR_9, VAR_7);
 if (VAR_10 && VAR_10 != -VAR_0) {
  FUNC_8("cannot read node %d from LEB %d:%d, error %d",
     VAR_6, VAR_8, VAR_9, VAR_10);
  return VAR_10;
 }

 if (VAR_6 != VAR_12->node_type) {
  FUNC_8("bad node type (%d but expected %d)",
     VAR_12->node_type, VAR_6);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_8, VAR_9, 0, 0);
 if (VAR_10) {
  FUNC_8("expected node type %d", VAR_6);
  return VAR_10;
 }

 VAR_11 = FUNC_4(VAR_12->len);
 if (VAR_11 != VAR_7) {
  FUNC_8("bad node length %d, expected %d", VAR_11, VAR_7);
  goto out;
 }

 return 0;

out:
 FUNC_8("bad node at LEB %d:%d", VAR_8, VAR_9);
 FUNC_0(VAR_4, VAR_5);
 FUNC_1();
 return -VAR_1;
}
