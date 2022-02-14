
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_entry {int full; } ;


 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, struct mtree_entry *VAR_1)
{
 char *VAR_2 = VAR_0;
 char VAR_3;

 if (VAR_1 != ((void*)0) && FUNC_0(VAR_0, ".") == 0)
  VAR_1->full = 1;

 while (*VAR_0 != '\0') {
  VAR_3 = *VAR_0++;
  if (VAR_3 == '/' && VAR_1 != ((void*)0))
   VAR_1->full = 1;
  if (VAR_3 == '\\') {
   switch (VAR_0[0]) {
   case '0':
    if (VAR_0[1] < '0' || VAR_0[1] > '7') {
     VAR_3 = 0;
     ++VAR_0;
     break;
    }

   case '1':
   case '2':
   case '3':
    if (VAR_0[1] >= '0' && VAR_0[1] <= '7' &&
        VAR_0[2] >= '0' && VAR_0[2] <= '7') {
     VAR_3 = (VAR_0[0] - '0') << 6;
     VAR_3 |= (VAR_0[1] - '0') << 3;
     VAR_3 |= (VAR_0[2] - '0');
     VAR_0 += 3;
    }
    break;
   case 'a':
    VAR_3 = '\a';
    ++VAR_0;
    break;
   case 'b':
    VAR_3 = '\b';
    ++VAR_0;
    break;
   case 'f':
    VAR_3 = '\f';
    ++VAR_0;
    break;
   case 'n':
    VAR_3 = '\n';
    ++VAR_0;
    break;
   case 'r':
    VAR_3 = '\r';
    ++VAR_0;
    break;
   case 's':
    VAR_3 = ' ';
    ++VAR_0;
    break;
   case 't':
    VAR_3 = '\t';
    ++VAR_0;
    break;
   case 'v':
    VAR_3 = '\v';
    ++VAR_0;
    break;
   case '\\':
    VAR_3 = '\\';
    ++VAR_0;
    break;
   }
  }
  *VAR_2++ = VAR_3;
 }
 *VAR_2 = '\0';
}
