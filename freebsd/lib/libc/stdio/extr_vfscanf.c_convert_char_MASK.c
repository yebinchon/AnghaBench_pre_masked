
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _r; int _p; } ;
typedef TYPE_1__ FILE ;


 char* VAR_0 ;
 size_t FUNC_0 (char*,int,int,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static __inline int
FUNC_2(FILE *VAR_1, char * VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2 == VAR_0) {
  size_t VAR_5 = 0;
  for (;;) {
   if ((VAR_4 = VAR_1->_r) < VAR_3) {
    VAR_5 += VAR_4;
    VAR_3 -= VAR_4;
    VAR_1->_p += VAR_4;
    if (FUNC_1(VAR_1)) {
     if (VAR_5 == 0)
      return (-1);
     break;
    }
   } else {
    VAR_5 += VAR_3;
    VAR_1->_r -= VAR_3;
    VAR_1->_p += VAR_3;
    break;
   }
  }
  return (VAR_5);
 } else {
  size_t VAR_6 = FUNC_0(VAR_2, 1, VAR_3, VAR_1);

  if (VAR_6 == 0)
   return (-1);
  return (VAR_6);
 }
}
