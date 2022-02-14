
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 char* FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (char const*,char*,size_t) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 size_t FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char*,size_t,char*) ;

char * FUNC_7(const char *VAR_0, size_t *VAR_1)
{
 if (*VAR_0 == '"') {
  const char *VAR_2;
  char *VAR_3;
  VAR_0++;
  VAR_2 = FUNC_5(VAR_0, '"');
  if (VAR_2 == ((void*)0) || VAR_2[1] != '\0')
   return ((void*)0);
  *VAR_1 = VAR_2 - VAR_0;
  VAR_3 = FUNC_0(VAR_0, *VAR_1);
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  return VAR_3;
 } else if (*VAR_0 == 'P' && VAR_0[1] == '"') {
  const char *VAR_4;
  char *VAR_5, *VAR_6;
  size_t VAR_7;
  VAR_0 += 2;
  VAR_4 = FUNC_5(VAR_0, '"');
  if (VAR_4 == ((void*)0) || VAR_4[1] != '\0')
   return ((void*)0);
  VAR_7 = VAR_4 - VAR_0;
  VAR_5 = FUNC_0(VAR_0, VAR_7);
  if (VAR_5 == ((void*)0))
   return ((void*)0);

  VAR_6 = FUNC_3(VAR_7 + 1);
  if (VAR_6 == ((void*)0)) {
   FUNC_2(VAR_5);
   return ((void*)0);
  }

  *VAR_1 = FUNC_6((u8 *) VAR_6, VAR_7 + 1, VAR_5);
  FUNC_2(VAR_5);

  return VAR_6;
 } else {
  u8 *VAR_8;
  size_t VAR_9, VAR_10 = FUNC_4(VAR_0);
  if (VAR_10 & 1)
   return ((void*)0);
  VAR_9 = VAR_10 / 2;
  VAR_8 = FUNC_3(VAR_9 + 1);
  if (VAR_8 == ((void*)0))
   return ((void*)0);
  if (FUNC_1(VAR_0, VAR_8, VAR_9)) {
   FUNC_2(VAR_8);
   return ((void*)0);
  }
  VAR_8[VAR_9] = '\0';
  *VAR_1 = VAR_9;
  return (char *) VAR_8;
 }
}
