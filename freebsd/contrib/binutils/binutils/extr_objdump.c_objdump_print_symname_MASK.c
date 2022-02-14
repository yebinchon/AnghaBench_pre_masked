
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disassemble_info {int stream; int (* fprintf_func ) (int ,char*,char const*) ;} ;
typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 char* FUNC_1 (int *,char const*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int ,char*,char const*) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_3, struct disassemble_info *VAR_4,
         asymbol *VAR_5)
{
  char *VAR_6;
  const char *VAR_7;

  VAR_6 = ((void*)0);
  VAR_7 = FUNC_0 (VAR_5);
  if (VAR_2 && VAR_7[0] != '\0')
    {

      VAR_6 = FUNC_1 (VAR_3, VAR_7, VAR_0 | VAR_1);
      if (VAR_6 != ((void*)0))
 VAR_7 = VAR_6;
    }

  if (VAR_4 != ((void*)0))
    (*VAR_4->fprintf_func) (VAR_4->stream, "%s", VAR_7);
  else
    FUNC_3 ("%s", VAR_7);

  if (VAR_6 != ((void*)0))
    FUNC_2 (VAR_6);
}
