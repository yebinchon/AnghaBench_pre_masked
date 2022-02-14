
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {scalar_t__* blocks; scalar_t__ small_block; int nblocks; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct group_info*) ;

void FUNC_2(struct group_info *VAR_0)
{
 if (VAR_0->blocks[0] != VAR_0->small_block) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->nblocks; VAR_1++)
   FUNC_0((unsigned long)VAR_0->blocks[VAR_1]);
 }
 FUNC_1(VAR_0);
}
