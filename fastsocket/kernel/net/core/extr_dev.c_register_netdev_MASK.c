
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,char) ;

int FUNC_5(struct net_device *VAR_0)
{
 int VAR_1;

 FUNC_2();





 if (FUNC_4(VAR_0->name, '%')) {
  VAR_1 = FUNC_0(VAR_0, VAR_0->name);
  if (VAR_1 < 0)
   goto out;
 }

 VAR_1 = FUNC_1(VAR_0);
out:
 FUNC_3();
 return VAR_1;
}
