
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int min_io_size; int leb_cnt; int leb_size; int ubi; scalar_t__ ro_media; } ;
struct ubifs_ch {int node_type; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ubifs_info*,void*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int,int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,void*,int,int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,int,int,int) ;
 int FUNC_8 (struct ubifs_info*,void*,int,int) ;

int FUNC_9(struct ubifs_info *VAR_1, void *VAR_2, int VAR_3, int VAR_4,
       int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = FUNC_0(VAR_3, VAR_1->min_io_size);

 FUNC_3("LEB %d:%d, %s, length %d (aligned %d)",
        VAR_4, VAR_5, FUNC_4(((struct ubifs_ch *)VAR_2)->node_type), VAR_3,
        VAR_8);
 FUNC_6(VAR_4 >= 0 && VAR_4 < VAR_1->leb_cnt && VAR_5 >= 0);
 FUNC_6(VAR_5 % VAR_1->min_io_size == 0 && VAR_5 < VAR_1->leb_size);

 if (VAR_1->ro_media)
  return -VAR_0;

 FUNC_8(VAR_1, VAR_2, VAR_3, 1);
 VAR_7 = FUNC_5(VAR_1->ubi, VAR_4, VAR_2, VAR_5, VAR_8, VAR_6);
 if (VAR_7) {
  FUNC_7("cannot write %d bytes to LEB %d:%d, error %d",
     VAR_8, VAR_4, VAR_5, VAR_7);
  FUNC_1(VAR_1, VAR_2);
  FUNC_2();
 }

 return VAR_7;
}
