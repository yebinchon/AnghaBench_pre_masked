
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, const char *VAR_5, char **VAR_6)
{
 int VAR_7;
 char *VAR_8;


 if ((u_int)VAR_4 > VAR_3)
  return (VAR_0);

 *VAR_6 = VAR_8 = FUNC_1(VAR_4 + 1, VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_5, VAR_8, VAR_4);
 VAR_8[VAR_4] = '\0';
 return (VAR_7);
}
