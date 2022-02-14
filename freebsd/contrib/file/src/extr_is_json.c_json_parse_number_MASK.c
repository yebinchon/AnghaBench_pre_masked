
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;
 int FUNC_1 (unsigned char const) ;

__attribute__((used)) static int
FUNC_2(const unsigned char **VAR_0, const unsigned char *VAR_1)
{
 const unsigned char *VAR_2 = *VAR_0;
 int VAR_3 = 0;

 FUNC_0("Parse number: ", VAR_2, *VAR_0);
 if (VAR_2 == VAR_1)
  return 0;
 if (*VAR_2 == '-')
  VAR_2++;

 for (; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_1(*VAR_2))
   break;
  VAR_3 = 1;
 }
 if (VAR_2 == VAR_1)
  goto out;
 if (*VAR_2 == '.')
  VAR_2++;
 for (; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_1(*VAR_2))
   break;
  VAR_3 = 1;
 }
 if (VAR_2 == VAR_1)
  goto out;
 if (VAR_3 && (*VAR_2 == 'e' || *VAR_2 == 'E')) {
  VAR_2++;
  VAR_3 = 0;
  if (VAR_2 == VAR_1)
   goto out;
  if (*VAR_2 == '+' || *VAR_2 == '-')
   VAR_2++;
  for (; VAR_2 < VAR_1; VAR_2++) {
   if (!FUNC_1(*VAR_2))
    break;
   VAR_3 = 1;
  }
 }
out:
 if (!VAR_3)
  FUNC_0("Bad number: ", VAR_2, *VAR_0);
 else
  FUNC_0("Good number: ", VAR_2, *VAR_0);
 *VAR_0 = VAR_2;
 return VAR_3;
}
