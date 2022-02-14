
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*) ;
 int VAR_0 ;
 int FUNC_1 (void const*,int,char const*,int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*) ;

int FUNC_4(const void *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = VAR_2 + FUNC_3(VAR_2);
 const char *VAR_4 = VAR_2;
 int VAR_5 = 0;

 FUNC_0(VAR_1);

 if (*VAR_2 != '/')
  return -VAR_0;

 while (*VAR_4) {
  const char *VAR_6;

  while (*VAR_4 == '/')
   VAR_4++;
  if (! *VAR_4)
   return VAR_5;
  VAR_6 = FUNC_2(VAR_4, '/');
  if (! VAR_6)
   VAR_6 = VAR_3;

  VAR_5 = FUNC_1(VAR_1, VAR_5, VAR_4, VAR_6-VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_4 = VAR_6;
 }

 return VAR_5;
}
