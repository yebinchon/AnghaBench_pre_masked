
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dataflow {unsigned int block_info_size; int block_info; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int) ;

void
FUNC_2 (struct dataflow *VAR_1)
{
  unsigned int VAR_2 = VAR_0 + 1;
  if (VAR_1->block_info_size < VAR_2)
    {
      VAR_2 += VAR_2 / 4;
      VAR_1->block_info = FUNC_1 (VAR_1->block_info,
        VAR_2 *sizeof (void*));
      FUNC_0 (VAR_1->block_info + VAR_1->block_info_size, 0,
       (VAR_2 - VAR_1->block_info_size) *sizeof (void *));
      VAR_1->block_info_size = VAR_2;
    }
}
