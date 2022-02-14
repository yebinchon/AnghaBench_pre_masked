
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int gc_lnum; int leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ubifs_info*,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct ubifs_info *VAR_2)
{
 int VAR_3;

 if (VAR_2->gc_lnum == -1) {
  FUNC_1("no LEB for GC");
  return -VAR_0;
 }


 VAR_3 = FUNC_0(VAR_2, VAR_2->gc_lnum, VAR_2->leb_size, 0,
      VAR_1, 0, 0);
 return VAR_3;
}
