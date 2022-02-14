
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {char* val; int len; } ;


 int FUNC_0 (char) ;
 struct data FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 char FUNC_2 (char const*,int*) ;
 char FUNC_3 (char const*,int*) ;
 scalar_t__ FUNC_4 (char const*) ;

struct data FUNC_5(const char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct data VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_1(VAR_0, FUNC_4(VAR_1)+1);

 VAR_5 = VAR_4.val;
 while (VAR_3 < VAR_2) {
  char VAR_6 = VAR_1[VAR_3++];

  if (VAR_6 != '\\') {
   VAR_5[VAR_4.len++] = VAR_6;
   continue;
  }

  VAR_6 = VAR_1[VAR_3++];
  FUNC_0(VAR_6);
  switch (VAR_6) {
  case 'a':
   VAR_5[VAR_4.len++] = '\a';
   break;
  case 'b':
   VAR_5[VAR_4.len++] = '\b';
   break;
  case 't':
   VAR_5[VAR_4.len++] = '\t';
   break;
  case 'n':
   VAR_5[VAR_4.len++] = '\n';
   break;
  case 'v':
   VAR_5[VAR_4.len++] = '\v';
   break;
  case 'f':
   VAR_5[VAR_4.len++] = '\f';
   break;
  case 'r':
   VAR_5[VAR_4.len++] = '\r';
   break;
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
   VAR_3--;

   VAR_5[VAR_4.len++] = FUNC_3(VAR_1, &VAR_3);
   break;
  case 'x':
   VAR_5[VAR_4.len++] = FUNC_2(VAR_1, &VAR_3);
   break;
  default:
   VAR_5[VAR_4.len++] = VAR_6;
  }
 }

 VAR_5[VAR_4.len++] = '\0';
 return VAR_4;
}
