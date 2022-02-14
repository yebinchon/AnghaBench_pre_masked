
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, unsigned long VAR_1)
{
 switch (VAR_1) {
 case 130:
  FUNC_2(VAR_0);
  if (FUNC_1(VAR_0) < 0)
   FUNC_0("8021q: failed to change proc name for %s\n",
     VAR_0->name);
  break;
 case 129:
  if (FUNC_1(VAR_0) < 0)
   FUNC_0("8021q: failed to add proc entry for %s\n",
     VAR_0->name);
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 }
}
