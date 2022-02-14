
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* handler ) (int,char**) ;int * name; } ;


 struct cmd* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_5, char **VAR_6)
{
 struct cmd *VAR_7;
 int VAR_8;

 FUNC_4("devfs rule");
 VAR_4 = VAR_3 = 1;
 while ((VAR_8 = FUNC_3(VAR_5, VAR_6, "s:")) != -1)
  switch (VAR_8) {
  case 's':
   VAR_1 = FUNC_0(VAR_2);
   break;
  default:
   FUNC_7();
  }
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;
 if (VAR_5 < 1)
  FUNC_7();

 for (VAR_7 = VAR_0; VAR_7->name != ((void*)0); ++VAR_7)
  if (FUNC_5(VAR_7->name, VAR_6[0]) == 0)
   FUNC_2((*VAR_7->handler)(VAR_5, VAR_6));
 FUNC_1(1, "unknown command: %s", VAR_6[0]);
}
