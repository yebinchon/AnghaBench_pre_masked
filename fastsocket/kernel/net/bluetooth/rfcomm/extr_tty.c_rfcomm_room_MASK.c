
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {int mtu; scalar_t__ tx_credits; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct rfcomm_dlc *VAR_0)
{


 return VAR_0->mtu * (VAR_0->tx_credits?:1);
}
