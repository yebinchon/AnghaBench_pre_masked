
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct termios {int c_iflag; int c_lflag; int c_cflag; int* c_cc; int c_oflag; } ;
typedef int isc_result_t ;
struct TYPE_3__ {int fd; int result; struct termios saved_mode; } ;
typedef TYPE_1__ isc_keyboard_t ;


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
 int FUNC_0 (int ) ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int,struct termios*) ;
 scalar_t__ FUNC_4 (int,int ,struct termios*) ;

isc_result_t
FUNC_5(isc_keyboard_t *VAR_23) {
 int VAR_24;
 isc_result_t VAR_25;
 struct termios VAR_26;

 FUNC_0(VAR_23 != ((void*)0));

 VAR_24 = FUNC_2("/dev/tty", VAR_17, 0);
 if (VAR_24 < 0)
  return (VAR_11);

 VAR_23->fd = VAR_24;

 if (FUNC_3(VAR_24, &VAR_23->saved_mode) < 0) {
  VAR_25 = VAR_11;
  goto errout;
 }

 VAR_26 = VAR_23->saved_mode;

 VAR_26.c_iflag &=
   ~(VAR_8|VAR_0|VAR_19|VAR_14|VAR_10|VAR_9|VAR_6|VAR_15);
 VAR_26.c_oflag &= ~VAR_16;
 VAR_26.c_lflag &= ~(VAR_3|VAR_4|VAR_5|VAR_13|VAR_7);
 VAR_26.c_cflag &= ~(VAR_2|VAR_18);
 VAR_26.c_cflag |= VAR_1;

 VAR_26.c_cc[VAR_21] = 1;
 VAR_26.c_cc[VAR_22] = 0;
 if (FUNC_4(VAR_24, VAR_20, &VAR_26) < 0) {
  VAR_25 = VAR_11;
  goto errout;
 }

 VAR_23->result = VAR_12;

 return (VAR_12);

 errout:
 FUNC_1 (VAR_24);

 return (VAR_25);
}
