
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct smc_softc {int smc_ifp; int * smc_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 struct mii_data* FUNC_0 (int *) ;
 int FUNC_1 (int ,struct ifreq*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct smc_softc *VAR_1, struct ifreq *VAR_2, u_long VAR_3)
{
 struct mii_data *VAR_4;

 if (VAR_1->smc_miibus == ((void*)0))
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_1->smc_miibus);
 return (FUNC_1(VAR_1->smc_ifp, VAR_2, &VAR_4->mii_media, VAR_3));
}
