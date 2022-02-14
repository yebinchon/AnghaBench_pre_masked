
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int advertising; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_8)
{
 unsigned int VAR_9;


 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_5 + 2);
 VAR_9 &= ~0xc000;

 FUNC_1(VAR_8, VAR_6, VAR_5 + 2, VAR_9);


 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_5 + 1);
 if (VAR_8->phy.advertising & VAR_0)
  VAR_9 |= 0x80;
 else
  VAR_9 &= ~0x80;

 if ((VAR_8->phy.advertising & VAR_1) ||
     (VAR_8->phy.advertising & VAR_2))
  VAR_9 |= 0x20;
 else
  VAR_9 &= ~0x20;

 FUNC_1(VAR_8, VAR_6, VAR_5 + 1, VAR_9);


 VAR_9 = FUNC_0(VAR_8, VAR_6, VAR_5);
 if (VAR_8->phy.advertising & VAR_4)
  VAR_9 |= 0x400;
 else
  VAR_9 &= ~0x400;

 if (VAR_8->phy.advertising & VAR_3)
  VAR_9 |= 0x800;
 else
  VAR_9 &= ~0x800;


 VAR_9 &= ~VAR_7;

 FUNC_1(VAR_8, VAR_6, VAR_5, VAR_9);
}
