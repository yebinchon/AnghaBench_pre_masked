
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int dummy; } ;
struct adm6996fc_softc {int numports; int cpuport; int ** miibus; } ;


 struct mii_data* FUNC_0 (int ) ;

__attribute__((used)) static inline struct mii_data *
FUNC_1(struct adm6996fc_softc *VAR_0, int VAR_1)
{

 if (VAR_1 < 0 || VAR_1 > VAR_0->numports)
  return (((void*)0));
 if (VAR_1 == VAR_0->cpuport)
  return (((void*)0));
 return (FUNC_0(*VAR_0->miibus[VAR_1]));
}
