
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 VAR_4 = FUNC_0(FUNC_2(VAR_2) * 4 + 3, VAR_0, VAR_1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 VAR_4[VAR_5++] = '"';
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2++) {
  switch (*VAR_2) {
  case '\t':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = 't';
   break;
  case '\f':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = 'f';
   break;
  case '\n':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = 'n';
   break;
  case '\r':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = 'r';
   break;
  case '\v':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = 'v';
   break;
  case '"':
  case '\\':
   VAR_4[VAR_5++] = '\\';
   VAR_4[VAR_5++] = *VAR_2;
   break;
  default:
   if (*VAR_2 < 0x20 || *VAR_2 > 0x7e) {
    VAR_5 += FUNC_1(VAR_4 + VAR_5,
        "\\x%02x", (u_char)*VAR_2);
    break;
   }
   VAR_4[VAR_5++] = *VAR_2;
   break;
  }
 }
 VAR_4[VAR_5++] = '"';
 VAR_4[VAR_5] = '\0';
 return (VAR_4);
}
