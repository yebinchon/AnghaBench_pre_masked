
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, const size_t VAR_2, void *VAR_3,
  size_t VAR_4, ssize_t *VAR_5)
{
 char *VAR_6 = VAR_3 + *VAR_5;

 *VAR_5 += VAR_2;
 if (!VAR_4)
  return 0;
 if (*VAR_5 > VAR_4)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_1);
 return 0;
}
