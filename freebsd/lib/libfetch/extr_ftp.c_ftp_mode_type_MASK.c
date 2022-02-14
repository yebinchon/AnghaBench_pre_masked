
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_1(conn_t *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
 case 0:
 case 's':
  VAR_3 = 'S';
 case 'S':
  break;
 default:
  return (VAR_1);
 }
 if ((VAR_5 = FUNC_0(VAR_2, "MODE %c", VAR_3)) != VAR_0) {
  if (VAR_3 == 'S') {
  } else {
   return (VAR_5);
  }
 }

 switch (VAR_4) {
 case 0:
 case 'i':
  VAR_4 = 'I';
 case 'I':
  break;
 case 'a':
  VAR_4 = 'A';
 case 'A':
  break;
 case 'd':
  VAR_4 = 'D';
 case 'D':

 default:
  return (VAR_1);
 }
 if ((VAR_5 = FUNC_0(VAR_2, "TYPE %c", VAR_4)) != VAR_0)
  return (VAR_5);

 return (VAR_0);
}
