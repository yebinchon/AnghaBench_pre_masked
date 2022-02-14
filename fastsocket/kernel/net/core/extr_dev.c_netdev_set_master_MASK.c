
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; struct net_device* master; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct net_device*,int ) ;
 int FUNC_4 () ;

int FUNC_5(struct net_device *VAR_3, struct net_device *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->master;

 FUNC_0();

 if (VAR_4) {
  if (VAR_5)
   return -VAR_0;
  FUNC_1(VAR_4);
 }

 VAR_3->master = VAR_4;

 FUNC_4();

 if (VAR_5)
  FUNC_2(VAR_5);

 if (VAR_4)
  VAR_3->flags |= VAR_1;
 else
  VAR_3->flags &= ~VAR_1;

 FUNC_3(VAR_2, VAR_3, VAR_1);
 return 0;
}
