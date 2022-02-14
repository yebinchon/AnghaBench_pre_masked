
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ng_parse_token { ____Placeholder_ng_parse_token } ng_parse_token ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (char const*,int*,int*,int *) ;

enum ng_parse_token
FUNC_3(const char *VAR_10, int *VAR_11, int *VAR_12)
{
 char *VAR_13;
 int VAR_14;

 while (FUNC_1(VAR_10[*VAR_11]))
  (*VAR_11)++;
 switch (VAR_10[*VAR_11]) {
 case '\0':
  *VAR_12 = 0;
  return VAR_1;
 case '{':
  *VAR_12 = 1;
  return VAR_4;
 case '}':
  *VAR_12 = 1;
  return VAR_6;
 case '[':
  *VAR_12 = 1;
  return VAR_5;
 case ']':
  *VAR_12 = 1;
  return VAR_7;
 case '=':
  *VAR_12 = 1;
  return VAR_2;
 case '"':
  if ((VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_12, ((void*)0))) == ((void*)0))
   return VAR_3;
  FUNC_0(VAR_13, VAR_0);
  return VAR_8;
 default:
  for (VAR_14 = *VAR_11 + 1; VAR_10[VAR_14] != '\0' && !FUNC_1(VAR_10[VAR_14])
      && VAR_10[VAR_14] != '{' && VAR_10[VAR_14] != '}' && VAR_10[VAR_14] != '['
      && VAR_10[VAR_14] != ']' && VAR_10[VAR_14] != '=' && VAR_10[VAR_14] != '"'; VAR_14++)
   ;
  *VAR_12 = VAR_14 - *VAR_11;
  return VAR_9;
 }
}
