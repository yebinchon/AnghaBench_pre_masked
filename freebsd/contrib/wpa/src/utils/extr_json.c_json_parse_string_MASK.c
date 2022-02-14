
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (char const*,int*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static char * FUNC_5(const char **VAR_1, const char *VAR_2)
{
 const char *VAR_3 = *VAR_1;
 char *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;
 u8 VAR_9[2];

 VAR_3++;

 VAR_7 = VAR_2 - VAR_3 + 1;
 VAR_8 = VAR_7 > 10 ? 10 : VAR_7;
 VAR_4 = FUNC_2(VAR_8);
 if (!VAR_4)
  return ((void*)0);
 VAR_5 = VAR_4;
 VAR_6 = VAR_4 + VAR_8;

 for (; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_8 < VAR_7 && VAR_6 - VAR_5 < 3) {
   char *VAR_10;
   int VAR_11;

   VAR_11 = VAR_5 - VAR_4;
   VAR_8 *= 2;
   if (VAR_8 > VAR_7)
    VAR_8 = VAR_7;
   VAR_10 = FUNC_3(VAR_4, VAR_8);
   if (!VAR_10)
    goto fail;
   VAR_4 = VAR_10;
   VAR_5 = VAR_4 + VAR_11;
   VAR_6 = VAR_4 + VAR_8;
  }

  switch (*VAR_3) {
  case '\"':
   *VAR_5 = '\0';

   *VAR_1 = VAR_3;
   return VAR_4;
  case '\\':
   VAR_3++;
   if (VAR_3 >= VAR_2) {
    FUNC_4(VAR_0,
        "JSON: Truncated \\ escape");
    goto fail;
   }
   switch (*VAR_3) {
   case '"':
   case '\\':
   case '/':
    *VAR_5++ = *VAR_3;
    break;
   case 'n':
    *VAR_5++ = '\n';
    break;
   case 'r':
    *VAR_5++ = '\r';
    break;
   case 't':
    *VAR_5++ = '\t';
    break;
   case 'u':
    if (VAR_2 - VAR_3 < 5 ||
        FUNC_0(VAR_3 + 1, VAR_9, 2) < 0 ||
        VAR_9[1] == 0x00) {
     FUNC_4(VAR_0,
         "JSON: Invalid \\u escape");
     goto fail;
    }
    if (VAR_9[0] == 0x00) {
     *VAR_5++ = VAR_9[1];
    } else {
     *VAR_5++ = VAR_9[0];
     *VAR_5++ = VAR_9[1];
    }
    VAR_3 += 4;
    break;
   default:
    FUNC_4(VAR_0,
        "JSON: Unknown escape '%c'", *VAR_3);
    goto fail;
   }
   break;
  default:
   *VAR_5++ = *VAR_3;
   break;
  }
 }

fail:
 FUNC_1(VAR_4);
 return ((void*)0);
}
