
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char operstate; } ;



 unsigned char VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4 = VAR_2->operstate;

 switch(VAR_3) {
 case 128:
  if ((VAR_4 == 129 ||
       VAR_4 == VAR_0) &&
      !FUNC_1(VAR_2))
   VAR_4 = 128;
  break;

 case 129:
  if (VAR_4 == 128 ||
      VAR_4 == VAR_0)
   VAR_4 = 129;
  break;
 }

 if (VAR_2->operstate != VAR_4) {
  FUNC_2(&VAR_1);
  VAR_2->operstate = VAR_4;
  FUNC_3(&VAR_1);
  FUNC_0(VAR_2);
 }
}
