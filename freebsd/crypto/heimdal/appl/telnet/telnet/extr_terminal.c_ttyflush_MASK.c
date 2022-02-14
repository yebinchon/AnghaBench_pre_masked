
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bottom; scalar_t__ consume; } ;


 int FUNC_0 (char,scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

int
FUNC_6(int VAR_2)
{
    int VAR_3, VAR_4, VAR_5;

    VAR_4 = FUNC_5(&VAR_1);
    if ((VAR_5 = VAR_3 = FUNC_4(&VAR_1)) > 0) {
 if (VAR_2) {
     FUNC_1();

 } else {
     VAR_3 = FUNC_2((char *)VAR_1.consume, VAR_3);
 }
    }
    if (VAR_3 > 0) {
 if (VAR_0 && VAR_3) {
     FUNC_0('>', VAR_1.consume, VAR_3);
 }





 if (VAR_5 == VAR_3 && VAR_4 > VAR_3) {
  VAR_5 = VAR_4 - VAR_3;
  if (!VAR_2)
   VAR_5 = FUNC_2((char *)VAR_1.bottom, VAR_5);
  if (VAR_5 > 0)
   VAR_3 += VAR_5;
 }
 FUNC_3(&VAR_1, VAR_3);
    }
    if (VAR_3 < 0)
 return -1;
    if (VAR_3 == VAR_4) {
 if (VAR_4)
     return -1;
 return 0;
    }
    return VAR_4 - VAR_3 + 1;
}
