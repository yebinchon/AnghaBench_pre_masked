
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {char* c_name; int c_help; int (* c_handler ) (int ,char**) ;scalar_t__ c_proxy; } ;
typedef int cmdbuf ;
typedef int StringList ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 struct cmd* VAR_2 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (char const*) ;
 struct cmd* FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,char**) ;
 int VAR_4 ;

void
FUNC_11(int VAR_5, char *VAR_6[])
{
 struct cmd *VAR_7;
 char *VAR_8[1], *VAR_9;
 const char *VAR_10;
 int VAR_11;

 VAR_9 = VAR_6[0];
 VAR_11 = (FUNC_8(VAR_9, "usage") == 0);
 if (VAR_5 == 0 || (VAR_11 && VAR_5 == 1)) {
  FUNC_0("usage: %s [command [...]]\n", VAR_9);
  return;
 }
 if (VAR_5 == 1) {
  StringList *VAR_12;

  VAR_12 = FUNC_3();
  FUNC_1(VAR_4,
      "%sommands may be abbreviated.  Commands are:\n\n",
      VAR_3 ? "Proxy c" : "C");
  for (VAR_7 = VAR_2; (VAR_10 = VAR_7->c_name) != ((void*)0); VAR_7++)
   if (!VAR_3 || VAR_7->c_proxy)
    FUNC_2(VAR_12, FUNC_4(VAR_10));
  FUNC_6(VAR_12);
  FUNC_7(VAR_12, 1);
  return;
 }



 while (--VAR_5 > 0) {
  char *VAR_13;
  char VAR_14[VAR_1];

  VAR_13 = *++VAR_6;
  VAR_7 = FUNC_5(VAR_13);
  if (VAR_7 == (struct cmd *)-1)
   FUNC_1(VAR_4, "?Ambiguous %s command `%s'\n",
       VAR_9, VAR_13);
  else if (VAR_7 == ((void*)0))
   FUNC_1(VAR_4, "?Invalid %s command `%s'\n",
       VAR_9, VAR_13);
  else {
   if (VAR_11) {
    (void)FUNC_9(VAR_14, VAR_7->c_name, sizeof(VAR_14));
    VAR_8[0] = VAR_14;
    (*VAR_7->c_handler)(0, VAR_8);
   } else
    FUNC_1(VAR_4, "%-*s\t%s\n", ((int) sizeof("disconnect")),
        VAR_7->c_name, VAR_7->c_help);
  }
 }
}
