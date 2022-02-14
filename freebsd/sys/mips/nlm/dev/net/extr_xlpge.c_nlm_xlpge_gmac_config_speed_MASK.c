
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {scalar_t__ type; scalar_t__ mii_bus; } ;
struct mii_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mii_data* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mii_data*) ;

__attribute__((used)) static int
FUNC_2(struct nlm_xlpge_softc *VAR_2)
{
 struct mii_data *VAR_3;

 if (VAR_2->type == VAR_1 || VAR_2->type == VAR_0)
  return (0);

 if (VAR_2->mii_bus) {
  VAR_3 = FUNC_0(VAR_2->mii_bus);
  FUNC_1(VAR_3);
 }

 return (0);
}
