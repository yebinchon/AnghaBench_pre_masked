
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t* _p; scalar_t__ _r; } ;
typedef TYPE_1__ FILE ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static __inline int
FUNC_1(FILE *VAR_1, char * VAR_2, int VAR_3, const char *VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (VAR_2 == VAR_0) {
  VAR_6 = 0;
  while (VAR_4[*VAR_1->_p]) {
   VAR_6++, VAR_1->_r--, VAR_1->_p++;
   if (--VAR_3 == 0)
    break;
   if (VAR_1->_r <= 0 && FUNC_0(VAR_1)) {
    if (VAR_6 == 0)
     return (-1);
    break;
   }
  }
 } else {
  VAR_5 = VAR_2;
  while (VAR_4[*VAR_1->_p]) {
   VAR_1->_r--;
   *VAR_2++ = *VAR_1->_p++;
   if (--VAR_3 == 0)
    break;
   if (VAR_1->_r <= 0 && FUNC_0(VAR_1)) {
    if (VAR_2 == VAR_5)
     return (-1);
    break;
   }
  }
  VAR_6 = VAR_2 - VAR_5;
  if (VAR_6 == 0)
   return (0);
  *VAR_2 = 0;
 }
 return (VAR_6);
}
