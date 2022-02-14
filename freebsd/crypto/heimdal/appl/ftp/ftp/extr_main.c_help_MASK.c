
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* c_name; int c_help; scalar_t__ c_proxy; } ;


 char* VAR_0 ;
 size_t VAR_1 ;
 struct cmd* VAR_2 ;
 struct cmd* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*) ;

void
FUNC_4(int VAR_4, char **VAR_5)
{
 struct cmd *VAR_6;

 if (VAR_4 == 1) {
  int VAR_7, VAR_8, VAR_9, VAR_10;
  int VAR_11, VAR_12 = 0, VAR_13;

  FUNC_1("Commands may be abbreviated.  Commands are:\n\n");
  for (VAR_6 = VAR_2; VAR_6 < &VAR_2[VAR_1]; VAR_6++) {
   int VAR_14 = FUNC_3(VAR_6->c_name);

   if (VAR_14 > VAR_12)
    VAR_12 = VAR_14;
  }
  VAR_12 = (VAR_12 + 8) &~ 7;
  VAR_11 = 80 / VAR_12;
  if (VAR_11 == 0)
   VAR_11 = 1;
  VAR_13 = (VAR_1 + VAR_11 - 1) / VAR_11;
  for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++) {
   for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
    VAR_6 = VAR_2 + VAR_8 * VAR_13 + VAR_7;
    if ((!VAR_3 || VAR_6->c_proxy)) {
     FUNC_1("%s", VAR_6->c_name);
    } else {
     for (VAR_10=0; VAR_10 < FUNC_3(VAR_6->c_name); VAR_10++) {
      FUNC_2(' ');
     }
    }
    if (VAR_6 + VAR_13 >= &VAR_2[VAR_1]) {
     FUNC_1("\n");
     break;
    }
    VAR_9 = FUNC_3(VAR_6->c_name);
    while (VAR_9 < VAR_12) {
     VAR_9 = (VAR_9 + 8) &~ 7;
     FUNC_2('\t');
    }
   }
  }
  return;
 }
 while (--VAR_4 > 0) {
  char *VAR_15;
  VAR_15 = *++VAR_5;
  VAR_6 = FUNC_0(VAR_15);
  if (VAR_6 == (struct cmd *)-1)
   FUNC_1("?Ambiguous help command %s\n", VAR_15);
  else if (VAR_6 == (struct cmd *)0)
   FUNC_1("?Invalid help command %s\n", VAR_15);
  else
   FUNC_1("%-*s\t%s\n", VAR_0,
    VAR_6->c_name, VAR_6->c_help);
 }
}
