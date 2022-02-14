
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_8;

    if (VAR_0 & VAR_3)
 FUNC_1(0);

    VAR_0 = VAR_4;

    if (VAR_1 == 0)
 return;

    VAR_5 = VAR_3;

    if (VAR_2 > VAR_1) {
 VAR_8 = (int) (VAR_2-VAR_1);
 FUNC_3(VAR_8);
 FUNC_0();
    }
    else if (VAR_2 < VAR_1) {
 VAR_8 = (int)(VAR_1-VAR_2);
 FUNC_2(VAR_8);
    }
    else {
 VAR_8 = 1;
 FUNC_2(VAR_8);
    }
    VAR_6 = VAR_2;
    VAR_7 = VAR_8;
}
