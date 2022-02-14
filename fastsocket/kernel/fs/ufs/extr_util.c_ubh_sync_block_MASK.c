
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_buffer_head {unsigned int count; int * bh; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct ufs_buffer_head *VAR_1)
{
 if (VAR_1) {
  unsigned VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
   FUNC_1(VAR_1->bh[VAR_2], VAR_0);

  for (VAR_2 = 0; VAR_2 < VAR_1->count; VAR_2++)
   FUNC_0(VAR_1->bh[VAR_2]);
 }
}
