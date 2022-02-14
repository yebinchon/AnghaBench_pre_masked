
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_column; int t_writepos; int t_inq; int t_outq; } ;





 int FUNC_0 (int ,int) ;


 int FUNC_1 (char) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_6(struct tty *VAR_8, char VAR_9)
{
 unsigned int VAR_10, VAR_11;

 FUNC_2(FUNC_0(VAR_7, VAR_5));
 FUNC_2(FUNC_1(VAR_9));


 switch (VAR_9) {
 case 131:

  if (FUNC_0(VAR_7, VAR_4))
   return (0);
  return FUNC_5(&VAR_8->t_outq, &VAR_9, 1);

 case 130:

  if (FUNC_5(&VAR_8->t_outq, &VAR_9, 1) != 0)
   return (-1);
  if (VAR_8->t_column > 0)
   VAR_8->t_column--;
  return (0);

 case 128:

  VAR_10 = 8 - (VAR_8->t_column & 7);
  if (FUNC_0(VAR_7, VAR_6)) {
   VAR_11 = FUNC_5(&VAR_8->t_outq,
       "        ", VAR_10);
  } else {
   VAR_11 = FUNC_5(&VAR_8->t_outq, &VAR_9, 1);
  }
  if (VAR_11)
   return (-1);

  VAR_8->t_column += VAR_10;
  FUNC_2((VAR_8->t_column % 8) == 0);
  return (0);

 case 129:

  if (FUNC_0(VAR_7, VAR_1)) {

   VAR_11 = FUNC_5(&VAR_8->t_outq, "\r\n", 2);
  } else {
   VAR_11 = FUNC_5(&VAR_8->t_outq, &VAR_9, 1);
  }
  if (VAR_11)
   return (-1);

  if (FUNC_0(VAR_7, VAR_1|VAR_2)) {
   VAR_8->t_column = VAR_8->t_writepos = 0;
   FUNC_4(&VAR_8->t_inq);
  }
  return (0);

 case 132:

  if (FUNC_0(VAR_7, VAR_0))
   VAR_9 = 129;

  if (FUNC_0(VAR_7, VAR_3) && VAR_8->t_column == 0)
   return (0);
  if (FUNC_5(&VAR_8->t_outq, &VAR_9, 1) != 0)
   return (-1);

  VAR_8->t_column = VAR_8->t_writepos = 0;
  FUNC_4(&VAR_8->t_inq);
  return (0);
 }





 return FUNC_5(&VAR_8->t_outq, &VAR_9, 1);

}
