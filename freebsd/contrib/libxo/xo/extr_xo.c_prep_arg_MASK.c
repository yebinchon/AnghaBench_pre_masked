
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0 (char *VAR_0)
{
    char *VAR_1, *VAR_2;

    for (VAR_1 = VAR_2 = VAR_0; *VAR_1; VAR_1++, VAR_2++) {
 if (*VAR_1 != '\\') {
     if (VAR_1 != VAR_2)
  *VAR_2 = *VAR_1;
     continue;
 }

 switch (*++VAR_1) {
 case 'n':
     *VAR_2 = '\n';
     break;

 case 'r':
     *VAR_2 = '\r';
     break;

 case 'b':
     *VAR_2 = '\b';
     break;

 case 'e':
     *VAR_2 = '\e';
     break;

 default:
     *VAR_2 = *VAR_1;
 }
    }

    *VAR_2 = '\0';
}
