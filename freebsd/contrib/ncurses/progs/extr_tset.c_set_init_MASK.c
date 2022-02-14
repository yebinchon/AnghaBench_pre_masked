
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_4 (char,int ) ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 int FUNC_5 () ;
 int VAR_15 ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(void)
{
    char *VAR_16;
    bool VAR_17;
    VAR_17 = FUNC_5();

    if (VAR_8) {
 if ((VAR_16 = VAR_12) != 0) {
     FUNC_6(VAR_16, 0, VAR_10);
     VAR_17 = VAR_6;
 }
 if ((VAR_16 = VAR_13) != 0) {
     FUNC_6(VAR_16, 0, VAR_10);
     VAR_17 = VAR_6;
 }


 if ((VAR_16 = VAR_14) != 0
     || (VAR_16 = VAR_7) != 0) {
     FUNC_1(VAR_16);
     VAR_17 = VAR_6;
 }
    }

    if (VAR_17) {
 (void) FUNC_4('\r', VAR_15);
 (void) FUNC_2(VAR_15);
 (void) FUNC_3(1000);
    }
}
