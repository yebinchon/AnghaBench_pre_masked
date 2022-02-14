
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_vma ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 size_t* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void
FUNC_0 (bfd_vma VAR_6, int VAR_7)
{
  VAR_4[VAR_2] = VAR_2;
  if (VAR_0 == VAR_1)
    {
      VAR_3[VAR_2] = VAR_6;
      VAR_5[VAR_2] = VAR_7;
    }
  else
    {

      VAR_3[VAR_2] = VAR_6 & 0xffffffff;
      VAR_5[VAR_2] = VAR_7 & 0xffffffff;
    }
}
