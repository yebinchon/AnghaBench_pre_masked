
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int lsave_cnt; int* lsave; int leb_cnt; int lsave_sz; int lsave_offs; int lsave_lnum; int ubi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void*,int ,int ) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,void*) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_4(VAR_1->lsave_sz);
 if (!VAR_4)
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_1->ubi, VAR_1->lsave_lnum, VAR_4, VAR_1->lsave_offs, VAR_1->lsave_sz);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_2(VAR_1, VAR_4);
 if (VAR_2)
  goto out;
 for (VAR_3 = 0; VAR_3 < VAR_1->lsave_cnt; VAR_3++) {
  int VAR_5 = VAR_1->lsave[VAR_3];





  if (VAR_5 >= VAR_1->leb_cnt)
   continue;
  FUNC_1(VAR_1, VAR_5);
 }
out:
 FUNC_3(VAR_4);
 return VAR_2;
}
