
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*,long long,...) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, off_t *VAR_1, off_t *VAR_2, off_t *VAR_3)
{
 off_t VAR_4, VAR_5, VAR_6;

 if (FUNC_2(VAR_0, "bytes ", 6) != 0)
  return (-1);
 VAR_0 += 6;
 if (*VAR_0 == '*') {
  VAR_4 = VAR_5 = -1;
  ++VAR_0;
 } else {
  for (VAR_4 = 0; *VAR_0 && FUNC_1((unsigned char)*VAR_0); ++VAR_0)
   VAR_4 = VAR_4 * 10 + *VAR_0 - '0';
  if (*VAR_0 != '-')
   return (-1);
  for (VAR_5 = 0, ++VAR_0; *VAR_0 && FUNC_1((unsigned char)*VAR_0); ++VAR_0)
   VAR_5 = VAR_5 * 10 + *VAR_0 - '0';
 }
 if (VAR_4 > VAR_5 || *VAR_0 != '/')
  return (-1);
 for (VAR_6 = 0, ++VAR_0; *VAR_0 && FUNC_1((unsigned char)*VAR_0); ++VAR_0)
  VAR_6 = VAR_6 * 10 + *VAR_0 - '0';
 if (*VAR_0 || VAR_6 < VAR_5 - VAR_4 + 1)
  return (-1);
 if (VAR_4 == -1) {
  FUNC_0("content range: [*/%lld]\n", (long long)VAR_6);
  *VAR_2 = 0;
 } else {
  FUNC_0("content range: [%lld-%lld/%lld]\n",
      (long long)VAR_4, (long long)VAR_5, (long long)VAR_6);
  *VAR_2 = VAR_5 - VAR_4 + 1;
 }
 *VAR_1 = VAR_4;
 *VAR_3 = VAR_6;
 return (0);
}
