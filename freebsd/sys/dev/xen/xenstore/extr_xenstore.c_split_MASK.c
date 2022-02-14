
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const**,int) ;
 int FUNC_1 (char*,int ) ;
 char** FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char const**,char*,int) ;

__attribute__((used)) static const char **
FUNC_4(char *VAR_2, u_int VAR_3, u_int *VAR_4)
{
 const char **VAR_5;


 if (VAR_3 > 0)
  VAR_2[VAR_3 - 1] = '\0';


 *VAR_4 = FUNC_0(VAR_2, ((void*)0), VAR_3);


 VAR_5 = FUNC_2(*VAR_4 * sizeof(char *) + VAR_3, VAR_1, VAR_0);
 FUNC_3(&VAR_5[*VAR_4], VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_1);


 VAR_2 = (char *)&VAR_5[*VAR_4];
 (void)FUNC_0(VAR_2, VAR_5, VAR_3);

 return (VAR_5);
}
