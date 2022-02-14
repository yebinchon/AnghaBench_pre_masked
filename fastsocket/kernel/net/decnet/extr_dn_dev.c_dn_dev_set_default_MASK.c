
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dn_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;
 if (!VAR_4->dn_ptr)
  return -VAR_1;
 FUNC_1(&VAR_3);
 if (VAR_5 || VAR_2 == ((void*)0)) {
  VAR_6 = VAR_2;
  VAR_2 = VAR_4;
  VAR_7 = 0;
 }
 FUNC_2(&VAR_3);
 if (VAR_6)
  FUNC_0(VAR_6);
 return VAR_7;
}
