
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const*,char**,int ) ;

int FUNC_2(const char *VAR_2, Boolean *VAR_3, char **VAR_4)
{
 int VAR_5 = -1;
 const char *VAR_6;

 *VAR_3 = VAR_0;
 *VAR_4 = (char *) VAR_2;
 VAR_6 = VAR_2;
 if (*VAR_6) {
  VAR_5 = (int) FUNC_1(VAR_6, VAR_4, 0);
  if (!**VAR_4 || FUNC_0(**VAR_4))
   *VAR_3 = VAR_1;
 }

 return VAR_5;
}
