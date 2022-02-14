
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reloc_howto_type ;
typedef int bfd_boolean ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;

__attribute__((used)) static reloc_howto_type *
FUNC_1 (unsigned int VAR_11, bfd_boolean VAR_12)
{
  switch (VAR_11)
    {
    case 128:
      return &VAR_6;
    case 129:
      return &VAR_5;
    case 130:
      if (VAR_12)
 return &VAR_4;
      else
 return &VAR_3;
    default:
      if (VAR_11 >= VAR_1 && VAR_11 < VAR_0)
 {
   if (VAR_12)
     return &VAR_8[VAR_11 - VAR_1];
   else
     return &VAR_7[VAR_11 - VAR_1];
 }
      FUNC_0 (VAR_11 < (unsigned int) VAR_2);
      if (VAR_12)
 return &VAR_10[VAR_11];
      else
 return &VAR_9[VAR_11];
      break;
    }
}
