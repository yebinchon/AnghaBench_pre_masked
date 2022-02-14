
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mh_imask; } ;
struct mwl_hal_priv {TYPE_1__ public; } ;
struct mwl_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int FUNC_1 (struct mwl_hal_priv*,int ) ;
 int FUNC_2 (struct mwl_hal_priv*,int ,int ) ;

void
FUNC_3(struct mwl_hal *VAR_2, uint32_t VAR_3)
{
 struct mwl_hal_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_2(VAR_4, VAR_0, 0);
 FUNC_1(VAR_4, VAR_1);

 VAR_4->public.mh_imask = VAR_3;
 FUNC_2(VAR_4, VAR_0, VAR_3);
 FUNC_1(VAR_4, VAR_1);
}
