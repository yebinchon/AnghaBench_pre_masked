
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_caps {int pll_type; } ;
struct bhnd_pwrctl_softc {int res; int chipc_dev; } ;
struct bhnd_chipid {int dummy; } ;
typedef scalar_t__ bus_size_t ;


 struct chipc_caps* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bhnd_pwrctl_softc*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct bhnd_chipid* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct bhnd_chipid const*,int ,int *) ;
 int FUNC_5 (struct bhnd_chipid const*,int ,int ,int ) ;

uint32_t
FUNC_6(struct bhnd_pwrctl_softc *VAR_2)
{
 const struct bhnd_chipid *VAR_3;
 struct chipc_caps *VAR_4;
 bus_size_t VAR_5;
 uint32_t VAR_6, VAR_7;
 uint32_t VAR_8;

 FUNC_1(VAR_2, VAR_1);

 VAR_3 = FUNC_3(VAR_2->chipc_dev);
 VAR_4 = FUNC_0(VAR_2->chipc_dev);

 VAR_6 = FUNC_2(VAR_2->res, VAR_0);


 VAR_5 = FUNC_4(VAR_3, VAR_4->pll_type, &VAR_8);
 if (VAR_5 == 0)
  return (VAR_8);


 VAR_7 = FUNC_2(VAR_2->res, VAR_5);
 return (FUNC_5(VAR_3, VAR_4->pll_type, VAR_6, VAR_7));
}
