
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

void
FUNC_0(void)
{
 bool VAR_6;

 VAR_6 = (VAR_1 & VAR_0) != 0;
again:
 switch (VAR_5) {
 case 0:
  VAR_4 = ((void*)0);
  break;
 case 1:
  VAR_4 = VAR_6 ? VAR_2 :
      VAR_3;
  break;
 case 2:
  VAR_4 = VAR_6 ? VAR_2 : ((void*)0);
  break;
 case 3:
  VAR_4 = VAR_3;
  break;
 default:
  VAR_5 = 1;
  goto again;
 }
}
