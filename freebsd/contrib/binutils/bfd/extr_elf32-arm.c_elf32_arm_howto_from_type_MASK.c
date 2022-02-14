
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reloc_howto_type ;


 unsigned int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static reloc_howto_type *
FUNC_1 (unsigned int VAR_3)
{
  if (VAR_3 < FUNC_0 (VAR_1))
    return &VAR_1[VAR_3];

  if (VAR_3 >= VAR_0
      && VAR_3 < VAR_0 + FUNC_0 (VAR_2))
    return &VAR_2[VAR_3 - VAR_0];

  return ((void*)0);
}
