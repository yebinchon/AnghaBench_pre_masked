
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int c_cflag; int* c_cc; int c_oflag; } ;


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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;

void
FUNC_0(struct termios *VAR_29)
{

 VAR_29->c_iflag &= ~(VAR_14|VAR_19|VAR_16|VAR_0|VAR_24|VAR_18|VAR_15|VAR_12|VAR_9|VAR_20|VAR_13);
 VAR_29->c_iflag |= VAR_11;
 VAR_29->c_oflag &= ~VAR_22;
 VAR_29->c_lflag &= ~(VAR_4|VAR_5|VAR_6|VAR_7|VAR_8|VAR_17|VAR_10|VAR_21|VAR_26|VAR_25);
 VAR_29->c_cflag &= ~(VAR_3|VAR_23);
 VAR_29->c_cflag |= VAR_2|VAR_1;
 VAR_29->c_cc[VAR_27] = 1;
 VAR_29->c_cc[VAR_28] = 0;
}
