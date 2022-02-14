
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char *VAR_0, char VAR_1, const char **VAR_2)
{
 bool VAR_3 = 0, VAR_4 = 1;

 if (*VAR_0 == '!') {
  VAR_3 = 1;
  VAR_0++;
 }
 if (*VAR_0++ == VAR_1)
  goto end;

 while (*VAR_0 && *VAR_0 != ']') {
  if (*VAR_0 == '-' && *(VAR_0 + 1) != ']') {
   if (*(VAR_0 - 1) <= VAR_1 && VAR_1 <= *(VAR_0 + 1))
    goto end;
   if (*(VAR_0 - 1) > *(VAR_0 + 1))
    goto error;
   VAR_0 += 2;
  } else if (*VAR_0++ == VAR_1)
   goto end;
 }
 if (!*VAR_0)
  goto error;
 VAR_4 = 0;

end:
 while (*VAR_0 && *VAR_0 != ']')
  VAR_0++;
 if (!*VAR_0)
  goto error;
 *VAR_2 = VAR_0 + 1;
 return VAR_3 ? !VAR_4 : VAR_4;

error:
 return 0;
}
