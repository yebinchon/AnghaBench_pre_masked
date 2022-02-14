
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;

size_t FUNC_1(const char *VAR_0, size_t VAR_1,
     char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;

 if (!VAR_0 || !VAR_2)
  return 0;



 if (!VAR_1)
  VAR_1 = FUNC_0(VAR_0);

 while (VAR_1) {
  VAR_1--;
  if (VAR_4++ >= VAR_3)
   return 0;

  switch (*VAR_0) {
  case '\\':
  case '\'':
   if (VAR_4++ >= VAR_3)
    return 0;
   *VAR_2++ = '\\';


  default:
   *VAR_2++ = *VAR_0++;
   break;
  }
 }


 if (VAR_4 < VAR_3)
  *VAR_2 = '\0';

 return VAR_4;
}
