
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,struct net_device*) ;
 int FUNC_1 (struct net_bridge*,struct net_device*) ;
 int FUNC_2 (int ) ;
 struct net_device* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_bridge *VAR_3, int VAR_4, int VAR_5)
{
 struct net_device *VAR_6;
 int VAR_7;

 if (!FUNC_2(VAR_0))
  return -VAR_2;

 VAR_6 = FUNC_3(FUNC_4(VAR_3->dev), VAR_4);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if (VAR_5)
  VAR_7 = FUNC_0(VAR_3, VAR_6);
 else
  VAR_7 = FUNC_1(VAR_3, VAR_6);

 FUNC_5(VAR_6);
 return VAR_7;
}
