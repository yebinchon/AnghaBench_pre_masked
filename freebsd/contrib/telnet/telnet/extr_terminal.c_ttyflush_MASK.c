
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bottom; int consume; } ;


 int FUNC_0 (char,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;

int
FUNC_11(int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;

    VAR_9 = FUNC_8(&VAR_6);
    if ((VAR_10 = VAR_8 = FUNC_7(&VAR_6)) > 0) {
 if (VAR_7) {
     FUNC_2();

 } else {
     VAR_8 = FUNC_3(VAR_6.consume, VAR_8);
 }
    }
    if (VAR_8 > 0) {
 if (VAR_5 && VAR_8) {
     FUNC_0('>', VAR_6.consume, VAR_8);
 }





 if (VAR_10 == VAR_8 && VAR_9 > VAR_8) {
  VAR_10 = VAR_9 - VAR_8;
  if (!VAR_7)
   VAR_10 = FUNC_3(VAR_6.bottom, VAR_10);
  if (VAR_10 > 0)
   VAR_8 += VAR_10;
 }
 FUNC_6(&VAR_6, VAR_8);
    }
    if (VAR_8 < 0) {
 if (VAR_2 == VAR_0 || VAR_2 == VAR_1) {
     return -1;
 } else {
     FUNC_6(&VAR_6, FUNC_8(&VAR_6));
     FUNC_10(0);
     FUNC_9();
     FUNC_1(VAR_3);
     FUNC_5(VAR_4, "Write error on local output.\n");
     FUNC_4(1);
 }
 return -1;
    }
    if (VAR_8 == VAR_9) {
 if (VAR_9)
     return -1;
 return 0;
    }
    return VAR_9 - VAR_8 + 1;
}
