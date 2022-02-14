
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct som_solib_mapped_entry {scalar_t__ name; } ;
typedef int dll_descriptor ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static char *
FUNC_2 (int VAR_1)
{
  CORE_ADDR VAR_2;
  CORE_ADDR VAR_3;
  struct som_solib_mapped_entry VAR_4;
  char *VAR_5;
  static char VAR_6[1024];


  VAR_2 = FUNC_1 (VAR_0);
  FUNC_0 (VAR_2, (char *) &VAR_4, sizeof (VAR_4));


  VAR_3 = (CORE_ADDR) VAR_4.name;


  VAR_5 = VAR_6;
  for (;;)
    {
      char VAR_7;
      FUNC_0 (VAR_3++, (char *) &VAR_7, 1);
      *VAR_5++ = VAR_7;
      if (VAR_7 == '\0')
 break;
    }

  return VAR_6;
}
