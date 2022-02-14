
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (struct minimal_symbol*) ;
 char** VAR_0 ;
 struct minimal_symbol* FUNC_1 (char*,int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (void)
{
  struct minimal_symbol *VAR_2;
  CORE_ADDR VAR_3 = 0;
  char **VAR_4;





  for (VAR_4 = VAR_0; *VAR_4 != ((void*)0); VAR_4++)
    {
      VAR_2 = FUNC_1 (*VAR_4, ((void*)0), VAR_1);
      if ((VAR_2 != ((void*)0)) && (FUNC_0 (VAR_2) != 0))
 {
   VAR_3 = FUNC_0 (VAR_2);
   return (VAR_3);
 }
    }
  return (0);
}
