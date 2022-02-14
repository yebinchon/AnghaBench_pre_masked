
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct termios {int * c_cc; } ;
typedef int c ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int *,int) ;
 int VAR_6 ;
 int FUNC_2 (int,struct termios*) ;

int
FUNC_3(int VAR_7, int VAR_8)
{
 struct termios VAR_9;
 u_char VAR_10;

 switch (VAR_8) {
 case 129:
  return (FUNC_0(VAR_7, VAR_2, 0));
 case 128:
  return (FUNC_0(VAR_7, VAR_1, 0));
 case 130:
 case 131:
  if (FUNC_2(VAR_7, &VAR_9) == -1)
   return (-1);
  VAR_10 = VAR_9.c_cc[VAR_8 == 131 ? VAR_4 : VAR_3];
  if (VAR_10 != VAR_5 && FUNC_1(VAR_7, &VAR_10, sizeof(VAR_10)) == -1)
   return (-1);
  return (0);
 default:
  VAR_6 = VAR_0;
  return (-1);
 }

}
