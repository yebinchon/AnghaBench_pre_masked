
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct net_bridge {int lock; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct net_bridge* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, void *VAR_4)
{
 struct net_bridge *VAR_5 = FUNC_3(VAR_3);
 struct sockaddr *VAR_6 = VAR_4;

 if (!FUNC_1(VAR_6->sa_data))
  return -VAR_1;

 FUNC_4(&VAR_5->lock);
 FUNC_2(VAR_3->dev_addr, VAR_6->sa_data, VAR_2);
 FUNC_0(VAR_5, VAR_6->sa_data);
 VAR_5->flags |= VAR_0;
 FUNC_5(&VAR_5->lock);

 return 0;
}
