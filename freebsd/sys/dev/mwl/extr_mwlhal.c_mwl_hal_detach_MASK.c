
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_hal_priv {int mh_mtx; int mh_dmat; int mh_dmamap; int mh_cmdbuf; } ;
struct mwl_hal {int dummy; } ;


 struct mwl_hal_priv* FUNC_0 (struct mwl_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct mwl_hal_priv*,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct mwl_hal *VAR_1)
{
 struct mwl_hal_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->mh_dmat, VAR_2->mh_cmdbuf, VAR_2->mh_dmamap);
 FUNC_1(VAR_2->mh_dmat);
 FUNC_4(&VAR_2->mh_mtx);
 FUNC_3(VAR_2, VAR_0);
}
