
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_0, char *VAR_1[], int VAR_2, char *VAR_3, size_t VAR_4)
{
 char *VAR_5;
 int VAR_6;
 static const char VAR_7[] = " \t";

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_1[VAR_6] = ((void*)0);
 VAR_5 = VAR_0;
 VAR_6 = 0;
 while (*VAR_5 != '\0') {
  VAR_5 += FUNC_2(VAR_5, VAR_7);
  if (*VAR_5 == '#' || *VAR_5 == '\0')
   break;
  if (VAR_6 >= VAR_2) {
   FUNC_0(VAR_3, VAR_4, "line has too many fields");
   return -1;
  }
  if (*VAR_5 == '"') {
   char *VAR_8;

   VAR_8 = ++VAR_5;
   VAR_1[VAR_6] = VAR_8;
   while (*VAR_5 != '"') {
    if (*VAR_5 == '\\') {
     VAR_5++;
     if (*VAR_5 != '"' && *VAR_5 != '\\' &&
         *VAR_5 != '\0') {
      FUNC_0(VAR_3, VAR_4,
          "invalid `\\' escape");
      return -1;
     }
    }
    if (*VAR_5 == '\0') {
     FUNC_0(VAR_3, VAR_4,
         "unterminated quoted string");
     return -1;
    }
    *VAR_8++ = *VAR_5++;
   }
   *VAR_8 = '\0';
   VAR_5++;
   if (*VAR_1[VAR_6] == '\0') {
    FUNC_0(VAR_3, VAR_4,
        "empty quoted string not permitted");
    return -1;
   }
   if (*VAR_5 != '\0' && FUNC_2(VAR_5, VAR_7) == 0) {
    FUNC_0(VAR_3, VAR_4, "quoted string not"
        " followed by white space");
    return -1;
   }
  } else {
   VAR_1[VAR_6] = VAR_5;
   VAR_5 += FUNC_1(VAR_5, VAR_7);
   if (*VAR_5 != '\0')
    *VAR_5++ = '\0';
  }
  VAR_6++;
 }
 return VAR_6;
}
