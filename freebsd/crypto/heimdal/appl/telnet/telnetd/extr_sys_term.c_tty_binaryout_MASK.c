
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int c_cflag; int c_oflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void
FUNC_0(int VAR_6)
{
    if (VAR_6) {
 VAR_5.c_cflag &= ~(VAR_2|VAR_4);
 VAR_5.c_cflag |= VAR_1;
 VAR_5.c_oflag &= ~VAR_3;
    } else {
 VAR_5.c_cflag &= ~VAR_2;
 VAR_5.c_cflag |= VAR_0|VAR_4;
 VAR_5.c_oflag |= VAR_3;
    }
}
