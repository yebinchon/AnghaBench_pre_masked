
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int ,char*,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*,int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_4)
{
  int VAR_5 = FUNC_1 (VAR_4);

  switch (VAR_5)
    {

    case '\n':
      VAR_1++;
      return;


    case '\\':
    case '"':
    case '\'':
      break;
    case 'a': case 'b': case 'f': case 'n': case 'r': case 't': case 'v':
    case '0': case '1': case '2': case '3': case '4': case '5': case '6':
    case '7': case 'x':
      FUNC_2 (&VAR_3, '\\');
      break;



    case ';':
      FUNC_3 (&VAR_3, "\\n\\t", 4);
      return;


    default:
      FUNC_0 (VAR_2, "%s:%d: warning: unrecognized escape \\%c\n",
        VAR_0, VAR_1, VAR_5);
      FUNC_2 (&VAR_3, '\\');
      break;
    }

  FUNC_2 (&VAR_3, VAR_5);
}
