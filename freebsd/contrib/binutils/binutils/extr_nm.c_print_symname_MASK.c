
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char const*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_3 (const char *VAR_3, const char *VAR_4, bfd *VAR_5)
{
  if (VAR_2 && *VAR_4)
    {
      char *VAR_6 = FUNC_0 (VAR_5, VAR_4, VAR_0 | VAR_1);

      if (VAR_6 != ((void*)0))
 {
   FUNC_2 (VAR_3, VAR_6);
   FUNC_1 (VAR_6);
   return;
 }
    }

  FUNC_2 (VAR_3, VAR_4);
}
