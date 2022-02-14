
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 int VAR_1, VAR_2;
 char *VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0, '.');
 VAR_2 = 0;
 if (VAR_3) {
  VAR_3++;
  if (*VAR_3 >= '0' && *VAR_3 <= '9')
   VAR_2 = *VAR_3 - '0';
 }

 return VAR_1 * 10 + VAR_2;
}
