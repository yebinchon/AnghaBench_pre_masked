
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mwl_hal_priv {scalar_t__ mh_cmdbuf; } ;
struct mwl_hal {int dummy; } ;
struct TYPE_2__ {int * calTbl; } ;
typedef TYPE_1__ HostCmd_FW_GET_CALTABLE ;


 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int FUNC_1 (struct mwl_hal_priv*) ;
 int FUNC_2 (struct mwl_hal_priv*) ;
 int FUNC_3 (struct mwl_hal_priv*,int ,int ) ;

int
FUNC_4(struct mwl_hal *VAR_0, uint8_t *VAR_1)
{
 struct mwl_hal_priv *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = FUNC_3(VAR_2, 0, 0);
 if (VAR_3 == 0) {
  const HostCmd_FW_GET_CALTABLE *VAR_4 =
      (const HostCmd_FW_GET_CALTABLE *) VAR_2->mh_cmdbuf;
  *VAR_1 = VAR_4->calTbl[16];
 }
 FUNC_2(VAR_2);
 return VAR_3;
}
