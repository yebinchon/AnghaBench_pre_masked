
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* drv; } ;
struct dsa_slave_priv {int port; struct dsa_switch* parent; } ;
struct TYPE_2__ {int (* get_strings ) (struct dsa_switch*,int ,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct dsa_switch*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
      uint32_t VAR_3, uint8_t *VAR_4)
{
 struct dsa_slave_priv *VAR_5 = FUNC_0(VAR_2);
 struct dsa_switch *VAR_6 = VAR_5->parent;

 if (VAR_3 == VAR_1) {
  int VAR_7 = VAR_0;

  FUNC_1(VAR_4, "tx_packets", VAR_7);
  FUNC_1(VAR_4 + VAR_7, "tx_bytes", VAR_7);
  FUNC_1(VAR_4 + 2 * VAR_7, "rx_packets", VAR_7);
  FUNC_1(VAR_4 + 3 * VAR_7, "rx_bytes", VAR_7);
  if (VAR_6->drv->get_strings != ((void*)0))
   VAR_6->drv->get_strings(VAR_6, VAR_5->port, VAR_4 + 4 * VAR_7);
 }
}
