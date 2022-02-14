
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ _r; int * _p; } ;
typedef TYPE_1__ FILE ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline int
FUNC_2(FILE *VAR_1, char * VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_5 = 0;
  while (!FUNC_1(*VAR_1->_p)) {
   VAR_5++, VAR_1->_r--, VAR_1->_p++;
   if (--VAR_3 == 0)
    break;
   if (VAR_1->_r <= 0 && FUNC_0(VAR_1))
    break;
  }
 } else {
  VAR_4 = VAR_2;
  while (!FUNC_1(*VAR_1->_p)) {
   VAR_1->_r--;
   *VAR_2++ = *VAR_1->_p++;
   if (--VAR_3 == 0)
    break;
   if (VAR_1->_r <= 0 && FUNC_0(VAR_1))
    break;
  }
  *VAR_2 = 0;
  VAR_5 = VAR_2 - VAR_4;
 }
 return (VAR_5);
}
