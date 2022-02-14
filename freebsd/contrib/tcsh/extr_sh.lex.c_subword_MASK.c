
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Strbuf {size_t len; } ;
struct TYPE_4__ {int const* s; int len; } ;
struct TYPE_3__ {int* s; } ;
typedef int Char ;


 struct Strbuf VAR_0 ;
 int FUNC_0 (struct Strbuf*,int const*) ;
 int FUNC_1 (struct Strbuf*,int const) ;
 int FUNC_2 (struct Strbuf*,int*,int) ;
 int* FUNC_3 (struct Strbuf*) ;
 int* FUNC_4 (int*) ;
 int* FUNC_5 (int*,int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_6 (int const*,int const*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static Char *
FUNC_7(Char *VAR_3, Char VAR_4, int *VAR_5, size_t *VAR_6)
{
    Char *VAR_7;
    const Char *VAR_8, *VAR_9;

    switch (VAR_4) {

    case 'r':
    case 'e':
    case 'h':
    case 't':
    case 'q':
    case 'x':
    case 'u':
    case 'l':
 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (VAR_7 == 0) {
     *VAR_5 = 0;
     return (FUNC_4(VAR_3));
 }
 *VAR_5 = 1;
 return (VAR_7);

    default:
 for (VAR_8 = VAR_3 + *VAR_6; *VAR_8; VAR_8++) {
     if (FUNC_6(VAR_8, VAR_1.s)) {
  struct Strbuf VAR_10 = VAR_0;

  FUNC_2(&VAR_10, VAR_3, VAR_8 - VAR_3);
  for (VAR_9 = VAR_2.s; *VAR_9; VAR_9++)
      switch (*VAR_9) {

      case '\\':
   if (VAR_9[1] == '&')
       VAR_9++;


      default:
   FUNC_1(&VAR_10, *VAR_9);
   continue;

      case '&':
   FUNC_0(&VAR_10, VAR_1.s);
   continue;
      }
  *VAR_6 = VAR_10.len;
  FUNC_0(&VAR_10, VAR_8 + VAR_1.len);
  *VAR_5 = 1;
  return FUNC_3(&VAR_10);
     }
 }
 *VAR_5 = 0;
 return (FUNC_4(VAR_3));
    }
}
