
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wint_t ;
struct TYPE_4__ {int* bmp; int invert; scalar_t__ icase; } ;
typedef TYPE_1__ cset ;


 int FUNC_0 (TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static __inline int
FUNC_4(cset *VAR_1, wint_t VAR_2)
{

 FUNC_1(VAR_2 >= 0);
 if (VAR_2 < VAR_0)
  return (((VAR_1->bmp[VAR_2 >> 3] & (1 << (VAR_2 & 7))) != 0) ^
      VAR_1->invert);
 else if (VAR_1->icase)
  return (FUNC_0(VAR_1, VAR_2) || FUNC_0(VAR_1, FUNC_2(VAR_2)) ||
      FUNC_0(VAR_1, FUNC_3(VAR_2)));
 else
  return (FUNC_0(VAR_1, VAR_2));
}
