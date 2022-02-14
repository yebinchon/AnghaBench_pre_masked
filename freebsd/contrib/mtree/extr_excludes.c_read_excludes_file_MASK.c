
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {char* glob; int pathname; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct exclude*,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 char* FUNC_4 (int *,int *,int *,int *,int) ;
 int VAR_4 ;
 struct exclude* FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,char) ;

void
FUNC_8(const char *VAR_5)
{
 FILE *VAR_6;
 char *VAR_7;
 struct exclude *VAR_8;

 VAR_6 = FUNC_3(VAR_5, "r");
 if (VAR_6 == 0)
  FUNC_1(1, "%s", VAR_5);

 while ((VAR_7 = FUNC_4(VAR_6, ((void*)0), ((void*)0), ((void*)0),
     VAR_0 | VAR_1 | VAR_2))
     != ((void*)0)) {
  if (VAR_7[0] == '\0')
   continue;

  if ((VAR_8 = FUNC_5(sizeof *VAR_8)) == ((void*)0))
   FUNC_6("memory allocation error");

  VAR_8->glob = VAR_7;
  if (FUNC_7(VAR_8->glob, '/') != ((void*)0))
   VAR_8->pathname = 1;
  else
   VAR_8->pathname = 0;
  FUNC_0(&VAR_3, VAR_8, VAR_4);
 }
 FUNC_2(VAR_6);
}
