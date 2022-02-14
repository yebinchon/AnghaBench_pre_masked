
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char**,char**) ;
 long VAR_2 ;
 long FUNC_2 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_3(char **VAR_3)
{
 char *VAR_4, *VAR_5;
 long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_7)
  return (VAR_7);

 VAR_6 = FUNC_2(VAR_4, &VAR_5, 0);
 VAR_7 = (VAR_6 < 0 || *VAR_5 != '\0') ? VAR_0 : 0;
 if (!VAR_7)
  VAR_2 = VAR_6;
 FUNC_0(VAR_4, VAR_1);
 return (VAR_7);
}
