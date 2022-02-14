
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*,long long) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, off_t *VAR_1)
{
 off_t VAR_2;

 for (VAR_2 = 0; *VAR_0 && FUNC_1((unsigned char)*VAR_0); ++VAR_0)
  VAR_2 = VAR_2 * 10 + (*VAR_0 - '0');
 if (*VAR_0)
  return (-1);
 FUNC_0("content length: [%lld]\n", (long long)VAR_2);
 *VAR_1 = VAR_2;
 return (0);
}
