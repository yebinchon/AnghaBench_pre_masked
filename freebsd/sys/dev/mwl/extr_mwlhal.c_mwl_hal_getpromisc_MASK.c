
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mwl_hal_priv {int dummy; } ;
struct mwl_hal {int dummy; } ;


 int VAR_0 ;
 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int FUNC_1 (struct mwl_hal_priv*) ;
 int FUNC_2 (struct mwl_hal_priv*) ;
 int FUNC_3 (struct mwl_hal_priv*,int ) ;

int
FUNC_4(struct mwl_hal *VAR_1)
{
 struct mwl_hal_priv *VAR_2 = FUNC_0(VAR_1);
 uint32_t VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 return (VAR_3 & 1) != 0;
}
