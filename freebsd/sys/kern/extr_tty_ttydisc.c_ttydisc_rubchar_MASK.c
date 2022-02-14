
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * c_cc; } ;
struct tty {int t_writepos; int t_column; TYPE_1__ t_termios; int t_outq; int t_inq; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 char VAR_0 ;
 scalar_t__ FUNC_1 (char,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct tty*,int ,int ) ;
 unsigned int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 scalar_t__ FUNC_5 (int *,char*,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_8(struct tty *VAR_6)
{
 char VAR_7;
 int VAR_8;
 unsigned int VAR_9, VAR_10;

 if (FUNC_5(&VAR_6->t_inq, &VAR_7, &VAR_8) != 0)
  return (-1);
 FUNC_6(&VAR_6->t_inq);

 if (FUNC_0(VAR_5, VAR_1)) {





  if (VAR_6->t_writepos >= VAR_6->t_column) {

   FUNC_4(VAR_6);
  } else if (FUNC_0(VAR_5, VAR_3)) {
   if (FUNC_1(VAR_7, VAR_8)) {

    if (FUNC_0(VAR_5, VAR_2)) {
     VAR_6->t_column -= 2;
     FUNC_7(&VAR_6->t_outq,
         "\b\b  \b\b", 6);
    }
   } else if (VAR_7 == ' ') {

    VAR_6->t_column -= 1;
    FUNC_7(&VAR_6->t_outq, "\b", 1);
   } else if (VAR_7 == VAR_0) {
    VAR_9 = FUNC_3(VAR_6);
    if (VAR_9 >= VAR_6->t_column)
     VAR_10 = 1;
    else
     VAR_10 = VAR_6->t_column - VAR_9;
    if (VAR_10 > 8)
     VAR_10 = 8;

    VAR_6->t_column = VAR_9;
    FUNC_7(&VAR_6->t_outq,
        "\b\b\b\b\b\b\b\b", VAR_10);
    return (0);
   } else {




    VAR_6->t_column -= 1;
    FUNC_7(&VAR_6->t_outq, "\b \b", 3);
   }
  } else {

   FUNC_2(VAR_6, VAR_6->t_termios.c_cc[VAR_4], 0);
  }
 }

 return (0);
}
