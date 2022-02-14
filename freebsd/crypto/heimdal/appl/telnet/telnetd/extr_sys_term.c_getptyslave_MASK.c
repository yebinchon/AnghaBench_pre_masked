
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ws ;
struct winsize {scalar_t__ ws_row; scalar_t__ ws_col; } ;
struct TYPE_2__ {int c_oflag; int c_iflag; int c_lflag; int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ,char*) ;
 char* VAR_25 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (struct winsize*,int ,int) ;
 int VAR_26 ;
 int FUNC_8 (int ,int ) ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 TYPE_1__ VAR_29 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_30 ;
 int FUNC_13 () ;

void FUNC_14(void)
{
    int VAR_31 = -1;

    struct winsize VAR_32;
    VAR_31 = FUNC_0(VAR_25);
    if (VAR_31 < 0)
 FUNC_2(VAR_26, VAR_25);
    FUNC_3();
    VAR_29.c_lflag |= VAR_1;
    VAR_29.c_oflag |= VAR_13|0;
    VAR_29.c_iflag |= VAR_7;
    VAR_29.c_iflag &= ~VAR_11;

    FUNC_11((VAR_23 > 0) ? VAR_23 : 9600);
    FUNC_12((VAR_24 > 0) ? VAR_24 : 9600);




    FUNC_9();
    if (FUNC_5(VAR_31) == -1)
 FUNC_2(VAR_26, "login_tty");
    if (VAR_26 > 2)
 FUNC_1(VAR_26);
    if (VAR_27 > 2) {
 FUNC_1(VAR_27);
 VAR_27 = -1;
    }
}
