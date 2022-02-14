
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_struct {int* chunk_data; int* chunk_init; } ;
typedef size_t bfd_vma ;
typedef int bfd ;


 size_t VAR_0 ;
 struct data_struct* FUNC_0 (int *,size_t) ;

__attribute__((used)) static void
FUNC_1 (bfd *VAR_1, int VAR_2, bfd_vma VAR_3)
{

  struct data_struct *VAR_4 = FUNC_0 (VAR_1, VAR_3);

  VAR_4->chunk_data[VAR_3 & VAR_0] = VAR_2;
  VAR_4->chunk_init[VAR_3 & VAR_0] = 1;
}
