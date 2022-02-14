
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char) ;

int
FUNC_2(int VAR_0, char *VAR_1[])
{
 char **VAR_2;
 char *VAR_3;
 char VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 int VAR_7 = 0;


 VAR_2 = VAR_1;
 if (VAR_0)
  VAR_2++;
 if ((VAR_3 = *VAR_2) != ((void*)0)) {
  if (FUNC_0(VAR_3, "-n")) {
   VAR_6++;
   VAR_2++;
  } else if (FUNC_0(VAR_3, "-e")) {

   VAR_7++;

   VAR_2++;
  }
 }
 while ((VAR_3 = *VAR_2++) != ((void*)0)) {
  while ((VAR_4 = *VAR_3++) != '\0') {
   if (VAR_4 == '\\' && VAR_7) {
    switch (*VAR_3++) {
    case 'a': VAR_4 = '\a'; break;
    case 'b': VAR_4 = '\b'; break;
    case 'c': return 0;
    case 'e': VAR_4 = '\033'; break;
    case 'f': VAR_4 = '\f'; break;
    case 'n': VAR_4 = '\n'; break;
    case 'r': VAR_4 = '\r'; break;
    case 't': VAR_4 = '\t'; break;
    case 'v': VAR_4 = '\v'; break;
    case '\\': break;
    case '0':
     VAR_4 = 0;
     VAR_5 = 3;
     while (--VAR_5 >= 0 && (unsigned)(*VAR_3 - '0') < 8)
      VAR_4 = (VAR_4 << 3) + (*VAR_3++ - '0');
     break;
    default:
     VAR_3--;
     break;
    }
   }
   FUNC_1(VAR_4);
  }
  if (*VAR_2)
   FUNC_1(' ');
 }
 if (! VAR_6)
  FUNC_1('\n');
 return 0;
}
