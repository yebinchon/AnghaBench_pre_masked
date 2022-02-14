
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int c_oflag; void** c_cc; } ;


 int VAR_0 ;
 void* FUNC_0 (char) ;
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
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int FUNC_1 (int ,struct termios*) ;
 int FUNC_2 (int ,int ,struct termios*) ;

void
FUNC_3(void)
{
    struct termios VAR_26;





    FUNC_1(0, &VAR_26);

    VAR_26.c_iflag |= (VAR_0|VAR_11|VAR_9|VAR_15|VAR_12);
    VAR_26.c_iflag &= ~VAR_14;

    VAR_26.c_lflag |= (VAR_13|VAR_10|VAR_8|VAR_1|VAR_3|VAR_4|VAR_2|VAR_5);
    VAR_26.c_lflag &= ~(VAR_6|VAR_20|VAR_7);

    VAR_26.c_oflag |= (VAR_17|VAR_16);
    VAR_26.c_oflag &= ~VAR_18;

    VAR_26.c_cc[VAR_23] = FUNC_0('C');
    VAR_26.c_cc[VAR_22] = FUNC_0('H');
    VAR_26.c_cc[VAR_24] = FUNC_0('U');
    VAR_26.c_cc[VAR_21] = FUNC_0('D');

    VAR_26.c_cc[VAR_25] = FUNC_0('Z');

    FUNC_2(0, VAR_19, &VAR_26);
}
