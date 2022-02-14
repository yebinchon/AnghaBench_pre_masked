
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_ioctl_data {int dummy; } ;
struct ifreq {int dummy; } ;
struct dsa_slave_priv {int * phy; } ;


 int VAR_0 ;
 struct mii_ioctl_data* FUNC_0 (struct ifreq*) ;
 struct dsa_slave_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,struct mii_ioctl_data*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct dsa_slave_priv *VAR_4 = FUNC_1(VAR_1);
 struct mii_ioctl_data *VAR_5 = FUNC_0(VAR_2);

 if (VAR_4->phy != ((void*)0))
  return FUNC_2(VAR_4->phy, VAR_5, VAR_3);

 return -VAR_0;
}
