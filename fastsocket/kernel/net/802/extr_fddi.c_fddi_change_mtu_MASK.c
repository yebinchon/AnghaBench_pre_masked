
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct net_device *VAR_3, int VAR_4)
{
 if ((VAR_4 < VAR_2) || (VAR_4 > VAR_1))
  return(-VAR_0);
 VAR_3->mtu = VAR_4;
 return(0);
}
