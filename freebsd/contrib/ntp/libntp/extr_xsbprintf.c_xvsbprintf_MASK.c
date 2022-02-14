
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,char const*,int ) ;

int
FUNC_1(
 char **VAR_2,
 char * const VAR_3,
 char const *VAR_4,
 va_list VAR_5
 )
{
 char *VAR_6 = (VAR_2) ? *VAR_2 : ((void*)0);
 int VAR_7 = -1;
 if (VAR_6 && (VAR_3 - VAR_6 > 0)) {
  size_t VAR_8 = (size_t)(VAR_3 - VAR_6);
  VAR_7 = FUNC_0(VAR_6, VAR_8, VAR_4, VAR_5);
  if (VAR_7 > 0) {
      if ((size_t)VAR_7 >= VAR_8)
   VAR_7 = 0;
      VAR_6 += VAR_7;
  }
  *VAR_6 = '\0';
  *VAR_2 = VAR_6;
 } else {
  VAR_1 = VAR_0;
 }
 return VAR_7;
}
