
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* handler ) (int,char**) ;int * name; } ;


 int VAR_0 ;
 char* VAR_1 ;
 struct cmd* VAR_2 ;
 int FUNC_0 (int,char*,char const*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_3 ;
 int FUNC_4 (char const*,int ) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_6, char **VAR_7)
{
 const char *VAR_8;
 struct cmd *VAR_9;
 int VAR_10;

 VAR_8 = ((void*)0);
 while ((VAR_10 = FUNC_3(VAR_6, VAR_7, "m:")) != -1)
  switch (VAR_10) {
  case 'm':
   VAR_8 = VAR_4;
   break;
  default:
   FUNC_7();
  }
 VAR_6 -= VAR_5;
 VAR_7 += VAR_5;
 if (VAR_6 < 1)
  FUNC_7();

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_1;
 VAR_3 = FUNC_4(VAR_8, VAR_0);
 if (VAR_3 == -1)
  FUNC_0(1, "open: %s", VAR_8);

 for (VAR_9 = VAR_2; VAR_9->name != ((void*)0); ++VAR_9)
  if (FUNC_5(VAR_9->name, VAR_7[0]) == 0)
   FUNC_2((*VAR_9->handler)(VAR_6, VAR_7));
 FUNC_1(1, "unknown command: %s", VAR_7[0]);
}
