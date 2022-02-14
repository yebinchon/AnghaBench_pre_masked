
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_iflag; int c_oflag; int c_cflag; int c_lflag; scalar_t__* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct termios VAR_17 ;



 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_0 (struct termios*) ;
 int FUNC_1 (struct termios*,int) ;
 int FUNC_2 (struct termios*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,struct termios*) ;
 int FUNC_5 (int ,int,struct termios*) ;

int
FUNC_6(int VAR_20)
{
  static struct termios VAR_21;

  FUNC_3(0, VAR_7, &VAR_16);
  FUNC_4(0, &VAR_17);

  VAR_21 = VAR_17;
  FUNC_0(&VAR_21);
  VAR_21.c_iflag = VAR_5 | VAR_4;
  VAR_21.c_oflag = VAR_13 | VAR_12;
  VAR_21.c_cflag = VAR_0 | VAR_1;
  VAR_21.c_lflag &= ~(VAR_3 | VAR_2 | VAR_6);
  VAR_21.c_cc[VAR_19] = 0;
  VAR_21.c_cc[VAR_18] = 0;
  FUNC_1(&VAR_21, 9600);
  FUNC_2(&VAR_21, 9600);
  FUNC_5(0, VAR_15 | VAR_14, &VAR_21);

  switch (VAR_20) {
  case 129:
    FUNC_3(0, VAR_8, VAR_10);
    break;
  case 130:
    FUNC_3(0, VAR_8, VAR_9);
    break;
  case 128:
    FUNC_3(0, VAR_8, VAR_11);
    break;
  }
  return 0;
}
