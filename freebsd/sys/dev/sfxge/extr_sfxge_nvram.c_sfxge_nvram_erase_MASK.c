
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_softc {scalar_t__ family; int * enp; } ;
typedef int efx_nvram_type_t ;
typedef int efx_nic_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,size_t*) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_softc *VAR_2, efx_nvram_type_t VAR_3)
{
 efx_nic_t *VAR_4 = VAR_2->enp;
 size_t VAR_5;
 int VAR_6 = 0;

 if (VAR_3 == VAR_1 && VAR_2->family == VAR_0)
  return (0);

 if ((VAR_6 = FUNC_2(VAR_4, VAR_3, &VAR_5)) != 0)
  return (VAR_6);

 VAR_6 = FUNC_0(VAR_4, VAR_3);

 FUNC_1(VAR_4, VAR_3, ((void*)0));
 return (VAR_6);
}
