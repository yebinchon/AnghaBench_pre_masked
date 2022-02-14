
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; char* help; } ;
typedef TYPE_1__ Command ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char **VAR_3)
{
 Command *VAR_4;

 if (VAR_2 == 1) {
  FUNC_2("Commands may be abbreviated.  Commands are:\r\n\r\n");
  for (VAR_4 = VAR_1; VAR_4->name; VAR_4++)
   if (VAR_4->help) {
    FUNC_2("%-*s\t%s\r\n", VAR_0, VAR_4->name,
            VAR_4->help);
   }
  return 0;
 }
 while (--VAR_2 > 0) {
  char *VAR_5;
  VAR_5 = *++VAR_3;
  VAR_4 = FUNC_1(VAR_5);
  if (FUNC_0(VAR_4))
   FUNC_2("?Ambiguous help command %s\r\n", VAR_5);
  else if (VAR_4 == (Command *)0)
   FUNC_2("?Invalid help command %s\r\n", VAR_5);
  else
   FUNC_2("%s\r\n", VAR_4->help);
 }
 return 0;
}
