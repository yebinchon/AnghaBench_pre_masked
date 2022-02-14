
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 char** FUNC_6 (size_t) ;
 char** FUNC_7 (char**,size_t) ;

__attribute__((used)) static char **
FUNC_8(void)
{
 char **VAR_4;
 char VAR_5[VAR_0];
 size_t VAR_6, VAR_7;

 if (VAR_2)
  FUNC_1(1, "cannot have more than one stdin");

 VAR_7 = 0;
 VAR_2 = 1;
 FUNC_0(&VAR_5, sizeof(VAR_5));

 VAR_6 = 1024;
 VAR_4 = FUNC_6(VAR_6 * sizeof(char *));
 while (FUNC_3(VAR_5, (int)sizeof(VAR_5), VAR_3)) {

  VAR_5[FUNC_5(VAR_5) - 1] = '\0';
  VAR_4[VAR_7] = FUNC_4(VAR_5);
  if (VAR_4[VAR_7] == ((void*)0))
   FUNC_1(1, "strdup() failed");

  if (++VAR_7 == VAR_6) {
   VAR_6 <<= 1;
   if (VAR_6 > VAR_1 / sizeof(char *))
    FUNC_2(1, "Too many input files");
   VAR_4 = FUNC_7(VAR_4,
     VAR_6 * sizeof(char *));
  }
 }


 VAR_4[VAR_7] = ((void*)0);

 return (VAR_4);
}
