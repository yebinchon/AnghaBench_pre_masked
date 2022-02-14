
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* help; char* option; } ;


 size_t VAR_0 ;
 char* FUNC_0 (char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char const*) ;
 char* VAR_2 ;
 int FUNC_4 (char const*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  size_t VAR_3;

  FUNC_2 (FUNC_0("The --param option recognizes the following as parameters:\n"));

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
      const char *VAR_4 = VAR_1[VAR_3].help;
      const char *VAR_5 = VAR_1[VAR_3].option;

      if (VAR_4 == ((void*)0) || *VAR_4 == '\0')
 VAR_4 = VAR_2;


      VAR_4 = FUNC_0(VAR_4);

      FUNC_4 (VAR_4, VAR_5, FUNC_3 (VAR_5));
    }

  FUNC_1 ('\n');
}
