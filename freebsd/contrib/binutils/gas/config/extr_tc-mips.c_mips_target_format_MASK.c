
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;



 int VAR_4 ;

const char *
FUNC_1 (void)
{
  switch (VAR_3)
    {
    case 129:
      return VAR_4 ? "ecoff-bigmips" : VAR_0;
    case 130:
      return "pe-mips";
    case 128:
      return (VAR_4
       ? (VAR_1
   ? "elf64-bigmips"
   : (VAR_2
      ? "elf32-nbigmips" : "elf32-bigmips"))
       : (VAR_1
   ? "elf64-littlemips"
   : (VAR_2
      ? "elf32-nlittlemips" : "elf32-littlemips")));

    default:
      FUNC_0 ();
      return ((void*)0);
    }
}
