
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {struct datapath* dp; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct datapath {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int VAR_0 ;
 struct vport* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct datapath *FUNC_4(struct net *VAR_1, int VAR_2)
{
 struct datapath *VAR_3 = ((void*)0);
 struct net_device *VAR_4;

 FUNC_2(&VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {
  struct vport *VAR_5 = FUNC_1(VAR_4);
  if (VAR_5)
   VAR_3 = VAR_5->dp;
 }
 FUNC_3(&VAR_0);

 return VAR_3;
}
