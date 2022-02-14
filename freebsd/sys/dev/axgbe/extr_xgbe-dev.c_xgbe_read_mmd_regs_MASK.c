
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int mdio_mmd; int xpcs_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int) ;
 int FUNC_1 (struct xgbe_prv_data*,int,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct xgbe_prv_data *VAR_2, int VAR_3,
         int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_4 & VAR_0)
  VAR_6 = VAR_4 & ~VAR_0;
 else
  VAR_6 = (VAR_2->mdio_mmd << 16) | (VAR_4 & 0xffff);
 FUNC_2(&VAR_2->xpcs_lock, VAR_5);
 FUNC_1(VAR_2, VAR_1 << 2, VAR_6 >> 8);
 VAR_7 = FUNC_0(VAR_2, (VAR_6 & 0xff) << 2);
 FUNC_3(&VAR_2->xpcs_lock, VAR_5);

 return VAR_7;
}
