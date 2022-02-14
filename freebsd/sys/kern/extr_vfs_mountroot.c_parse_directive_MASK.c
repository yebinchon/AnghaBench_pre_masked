
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char**,char) ;
 int FUNC_6 (char**,char**) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int
FUNC_9(char **VAR_2)
{
 char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_6(VAR_2, &VAR_3);
 if (VAR_4)
  return (VAR_4);

 if (FUNC_8(VAR_3, ".ask") == 0)
  VAR_4 = FUNC_1(VAR_2);
 else if (FUNC_8(VAR_3, ".md") == 0)
  VAR_4 = FUNC_2(VAR_2);
 else if (FUNC_8(VAR_3, ".onfail") == 0)
  VAR_4 = FUNC_3(VAR_2);
 else if (FUNC_8(VAR_3, ".timeout") == 0)
  VAR_4 = FUNC_4(VAR_2);
 else {
  FUNC_7("mountroot: invalid directive `%s'\n", VAR_3);

  (void)FUNC_5(VAR_2, '\n');
  VAR_4 = VAR_0;
 }
 FUNC_0(VAR_3, VAR_1);
 return (VAR_4);
}
