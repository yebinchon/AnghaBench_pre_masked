
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct ifla_vf_vlan {int dummy; } ;
struct ifla_vf_tx_rate {int dummy; } ;
struct ifla_vf_mac {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(const struct net_device *VAR_1,
       u32 VAR_2)
{
 if (VAR_1->dev.parent && FUNC_0(VAR_1->dev.parent) &&
     (VAR_2 & VAR_0)) {
  int VAR_3 = FUNC_1(VAR_1->dev.parent);
  size_t VAR_4 = FUNC_2(sizeof(struct nlattr));
  VAR_4 += FUNC_2(VAR_3 * sizeof(struct nlattr));
  VAR_4 += VAR_3 *
   (FUNC_2(sizeof(struct ifla_vf_mac)) +
    FUNC_2(sizeof(struct ifla_vf_vlan)) +
    FUNC_2(sizeof(struct ifla_vf_tx_rate)));
  return VAR_4;
 } else
  return 0;
}
