
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int,int ,int*) ;
 int VAR_4 ;

int
FUNC_1(int VAR_5, int VAR_6)
{
 int VAR_7;

 switch (VAR_6) {
 case 130:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_2;
  break;
 case 129:
  VAR_7 = VAR_1 | VAR_2;
  break;
 default:
  VAR_4 = VAR_0;
  return (-1);
 }
 return (FUNC_0(VAR_5, VAR_3, &VAR_7));
}
