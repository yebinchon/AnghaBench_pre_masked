
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static size_t
FUNC_2(char *VAR_0, size_t VAR_1, char VAR_2)
{
 size_t VAR_3 = VAR_1;

 if (FUNC_0((unsigned char)VAR_2) && VAR_2 != '\\')
  VAR_0[VAR_3++] = VAR_2;
 else {
  VAR_0[VAR_3++] = '\\';
  switch (VAR_2) {
  case '\a': VAR_0[VAR_3++] = 'a'; break;
  case '\b': VAR_0[VAR_3++] = 'b'; break;
  case '\f': VAR_0[VAR_3++] = 'f'; break;
  case '\n': VAR_0[VAR_3++] = 'n'; break;


  case '\r': VAR_0[VAR_3++] = 'r'; break;

  case '\t': VAR_0[VAR_3++] = 't'; break;
  case '\v': VAR_0[VAR_3++] = 'v'; break;
  case '\\': VAR_0[VAR_3++] = '\\'; break;
  default:
   FUNC_1(VAR_0 + VAR_3, "%03o", 0xFF & (int)VAR_2);
   VAR_3 += 3;
  }
 }

 return (VAR_3 - VAR_1);
}
