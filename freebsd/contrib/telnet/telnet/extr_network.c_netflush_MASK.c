
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ consume; } ;


 int FUNC_0 (char,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,char*,int,int ) ;
 int FUNC_10 () ;

int
FUNC_11(void)
{
    int VAR_9, VAR_10;





    if ((VAR_10 = VAR_9 = FUNC_8(&VAR_8)) > 0) {
 if (!FUNC_4(&VAR_8)) {
     VAR_9 = FUNC_9(VAR_6, (char *)VAR_8.consume, VAR_9, 0);
 } else {
     VAR_9 = FUNC_9(VAR_6, (char *)VAR_8.consume, 1, VAR_2);
 }
    }
    if (VAR_9 < 0) {
 if (VAR_4 != VAR_0 && VAR_4 != VAR_1) {
     FUNC_10();
     FUNC_3(VAR_5);
     (void)FUNC_2(VAR_6);
     FUNC_5(&VAR_8);
     FUNC_1("Connection closed by foreign host.\n", 1);

 }
 VAR_9 = 0;
    }
    if (VAR_7 && VAR_9) {
 FUNC_0('>', VAR_8.consume, VAR_9);
    }
    if (VAR_9) {
 FUNC_6(&VAR_8, VAR_9);




 if ((VAR_10 == VAR_9) && FUNC_8(&VAR_8)) {
     (void) FUNC_11();
 }
 return 1;
    } else {
 return 0;
    }
}
