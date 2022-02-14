
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _memstream {int dummy; } ;


 int FUNC_0 (struct _memstream*,int*,int) ;
 int FUNC_1 (struct _memstream*) ;
 int FUNC_2 (struct _memstream*,int) ;

__attribute__((used)) static int
FUNC_3(struct _memstream * __restrict VAR_0,
    int * __restrict VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 != '\\')
  *VAR_1 = VAR_3;
 else {
  VAR_3 = FUNC_1(VAR_0);
  VAR_2 = 16;
  switch (VAR_3) {
  case 'a':
   *VAR_1 = '\a';
   break;
  case 'b':
   *VAR_1 = '\b';
   break;
  case 'f':
   *VAR_1 = '\f';
   break;
  case 'n':
   *VAR_1 = '\n';
   break;
  case 'r':
   *VAR_1 = '\r';
   break;
  case 't':
   *VAR_1 = '\t';
   break;
  case 'v':
   *VAR_1 = '\v';
   break;
  case '0': case '1': case '2': case '3':
  case '4': case '5': case '6': case '7':
   FUNC_2(VAR_0, VAR_3);
   VAR_2 -= 8;

  case 'x':
   return (FUNC_0(VAR_0, VAR_1, VAR_2));

  default:

   *VAR_1 = VAR_3;
  }
 }
 return (0);
}
