
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* recno_t ;
struct TYPE_5__ {void* lno; } ;
typedef TYPE_1__ SCR ;
typedef char CHAR_T ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,void*,int ,char**,size_t*) ;

__attribute__((used)) static void
FUNC_2(SCR *VAR_1)
{
 recno_t VAR_2;
 size_t VAR_3;
 CHAR_T *VAR_4;

 for (VAR_2 = 1; !FUNC_1(VAR_1, VAR_2, 0, &VAR_4, &VAR_3) && VAR_3 == 0; ++VAR_2);
 if (VAR_4 == ((void*)0))
  return;
 if (VAR_4[0] == '#') {
  FUNC_0(VAR_1, VAR_0);
  while (!FUNC_1(VAR_1, ++VAR_2, 0, &VAR_4, &VAR_3))
   if (VAR_3 < 1 || VAR_4[0] != '#') {
    VAR_1->lno = VAR_2;
    return;
   }
 } else if (VAR_3 > 1 && VAR_4[0] == '/' && VAR_4[1] == '*') {
  FUNC_0(VAR_1, VAR_0);
  do {
   for (; VAR_3 > 1; --VAR_3, ++VAR_4)
    if (VAR_4[0] == '*' && VAR_4[1] == '/') {
     VAR_1->lno = VAR_2;
     return;
    }
  } while (!FUNC_1(VAR_1, ++VAR_2, 0, &VAR_4, &VAR_3));
 } else if (VAR_3 > 1 && VAR_4[0] == '/' && VAR_4[1] == '/') {
  FUNC_0(VAR_1, VAR_0);
  VAR_4 += 2;
  VAR_3 -= 2;
  do {
   for (; VAR_3 > 1; --VAR_3, ++VAR_4)
    if (VAR_4[0] == '/' && VAR_4[1] == '/') {
     VAR_1->lno = VAR_2;
     return;
    }
  } while (!FUNC_1(VAR_1, ++VAR_2, 0, &VAR_4, &VAR_3));
 }
}
