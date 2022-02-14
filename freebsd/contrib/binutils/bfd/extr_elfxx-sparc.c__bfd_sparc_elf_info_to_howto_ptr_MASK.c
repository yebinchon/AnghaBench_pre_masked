
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reloc_howto_type ;




 unsigned int VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;

reloc_howto_type *
FUNC_3 (unsigned int VAR_6)
{
  switch (VAR_6)
    {
    case 129:
      return &VAR_5;

    case 130:
      return &VAR_4;

    case 128:
      return &VAR_3;

    default:
      if (VAR_6 >= (unsigned int) VAR_1)
 {
   FUNC_1) (FUNC_0("invalid relocation type %d"),
     (int) VAR_6);
   VAR_6 = VAR_0;
 }
      return &VAR_2[VAR_6];
    }
}
