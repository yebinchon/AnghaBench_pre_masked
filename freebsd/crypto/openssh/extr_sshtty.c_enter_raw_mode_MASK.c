
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_lflag; int* c_cc; int c_oflag; } ;


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
 size_t VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 struct termios VAR_21 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_22 ;
 int FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,int ,struct termios*) ;

void
FUNC_4(int VAR_23)
{
 struct termios VAR_24;

 if (FUNC_2(FUNC_0(VAR_22), &VAR_24) == -1) {
  if (!VAR_23)
   FUNC_1("tcgetattr");
  return;
 }
 VAR_21 = VAR_24;
 VAR_24.c_iflag |= VAR_8;
 VAR_24.c_iflag &= ~(VAR_11 | VAR_9 | VAR_7 | VAR_5 | VAR_15 | VAR_13 | VAR_14);



 VAR_24.c_lflag &= ~(VAR_10 | VAR_4 | VAR_0 | VAR_1 | VAR_2 | VAR_3);



 VAR_24.c_oflag &= ~VAR_16;
 VAR_24.c_cc[VAR_18] = 1;
 VAR_24.c_cc[VAR_19] = 0;
 if (FUNC_3(FUNC_0(VAR_22), VAR_17, &VAR_24) == -1) {
  if (!VAR_23)
   FUNC_1("tcsetattr");
 } else
  VAR_20 = 1;
}
