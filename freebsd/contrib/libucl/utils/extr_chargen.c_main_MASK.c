
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int*,char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*,...) ;

int
FUNC_7 (int VAR_0, char **VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 const char *VAR_5 = "ucl_chartable";
 bool VAR_6;
 char VAR_7[2048];

 VAR_3 = 0;

 if (VAR_0 > 1) {
  VAR_5 = VAR_1[1];
 }

 FUNC_5 ("static const unsigned int %s[256] = {\n", VAR_5);

 for (VAR_2 = 0; VAR_2 < 256; VAR_2 ++) {
  VAR_6 = 0;
  VAR_4 = 0;


  if (VAR_2 == ' ' || VAR_2 == '\t') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_WHITESPACE", &VAR_6, VAR_7 + VAR_4);
  }
  if (FUNC_3 (VAR_2)) {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_WHITESPACE_UNSAFE", &VAR_6, VAR_7 + VAR_4);
  }
  if (FUNC_0 (VAR_2) || VAR_2 >= 0x80 || VAR_2 == '/' || VAR_2 == '_') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_KEY_START", &VAR_6, VAR_7 + VAR_4);
  }
  if (FUNC_0 (VAR_2) || VAR_2 == '-' || VAR_2 == '_' || VAR_2 == '/' || VAR_2 == '.' || VAR_2 >= 0x80) {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_KEY", &VAR_6, VAR_7 + VAR_4);
  }
  if (VAR_2 == 0 || VAR_2 == '\r' || VAR_2 == '\n' || VAR_2 == ']' || VAR_2 == '}' || VAR_2 == ';' || VAR_2 == ',' || VAR_2 == '#') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_VALUE_END", &VAR_6, VAR_7 + VAR_4);
  }
  else {
   if (FUNC_2 (VAR_2) || VAR_2 >= 0x80) {
    VAR_4 += FUNC_4 ("UCL_CHARACTER_VALUE_STR", &VAR_6, VAR_7 + VAR_4);
   }
   if (FUNC_1 (VAR_2) || VAR_2 == '-') {
    VAR_4 += FUNC_4 ("UCL_CHARACTER_VALUE_DIGIT_START", &VAR_6, VAR_7 + VAR_4);
   }
   if (FUNC_0 (VAR_2) || VAR_2 == '.' || VAR_2 == '-' || VAR_2 == '+') {
    VAR_4 += FUNC_4 ("UCL_CHARACTER_VALUE_DIGIT", &VAR_6, VAR_7 + VAR_4);
   }
  }
  if (VAR_2 == '"' || VAR_2 == '\\' || VAR_2 == '/' || VAR_2 == 'b' ||
   VAR_2 == 'f' || VAR_2 == 'n' || VAR_2 == 'r' || VAR_2 == 't' || VAR_2 == 'u') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_ESCAPE", &VAR_6, VAR_7 + VAR_4);
  }
  if (VAR_2 == ' ' || VAR_2 == '\t' || VAR_2 == ':' || VAR_2 == '=') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_KEY_SEP", &VAR_6, VAR_7 + VAR_4);
  }
  if (VAR_2 == '\n' || VAR_2 == '\r' || VAR_2 == '\\' || VAR_2 == '\b' || VAR_2 == '\t' ||
    VAR_2 == '"' || VAR_2 == '\f') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_JSON_UNSAFE", &VAR_6, VAR_7 + VAR_4);
  }
  if (VAR_2 == '\n' || VAR_2 == '\r' || VAR_2 == '\\' || VAR_2 == '\b' || VAR_2 == '\t' ||
    VAR_2 == '"' || VAR_2 == '\f' || VAR_2 == '=' || VAR_2 == ':' || VAR_2 == '{' || VAR_2 == '[' || VAR_2 == ' ') {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_UCL_UNSAFE", &VAR_6, VAR_7 + VAR_4);
  }

  if (!VAR_6) {
   VAR_4 += FUNC_4 ("UCL_CHARACTER_DENIED", &VAR_6, VAR_7 + VAR_4);
  }

  if (FUNC_2 (VAR_2)) {
   VAR_4 += FUNC_6 (VAR_7 + VAR_4, " /* %c */", VAR_2);
  }
  if (VAR_2 != 255) {
   VAR_4 += FUNC_6 (VAR_7 + VAR_4, ", ");
  }
  VAR_3 += VAR_4;
  if (VAR_3 > 80) {
   FUNC_5 ("\n%s", VAR_7);
   VAR_3 = VAR_4;
  }
  else {
   FUNC_5 ("%s", VAR_7);
  }
 }
 FUNC_5 ("\n}\n");

 return 0;
}
