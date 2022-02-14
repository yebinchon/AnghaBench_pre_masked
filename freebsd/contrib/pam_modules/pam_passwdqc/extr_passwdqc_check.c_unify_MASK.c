
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2, *VAR_3;
 int VAR_4;

 if (!(VAR_2 = FUNC_2(FUNC_3(VAR_0) + 1)))
  return ((void*)0);

 VAR_1 = VAR_0;
 VAR_3 = VAR_2;
 do {
  VAR_4 = (unsigned char)*VAR_1;
  if (FUNC_0(VAR_4) && FUNC_1(VAR_4))
   *VAR_3++ = FUNC_4(VAR_4);
  else
   *VAR_3++ = *VAR_1;
 } while (*VAR_1++);

 return VAR_2;
}
