
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_xlpge_softc {int xlpge_callout; scalar_t__ mii_bus; } ;
struct mii_data {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ,void (*) (void*),struct nlm_xlpge_softc*) ;
 struct mii_data* FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct nlm_xlpge_softc *VAR_2 = (struct nlm_xlpge_softc *)VAR_1;
 struct mii_data *VAR_3 = ((void*)0);

 if (VAR_2->mii_bus) {
  VAR_3 = FUNC_2(VAR_2->mii_bus);

  FUNC_0(VAR_3 != ((void*)0), ("mii ptr is NULL"));

  FUNC_3(VAR_3);

  FUNC_1(&VAR_2->xlpge_callout, VAR_0,
      FUNC_4, VAR_2);
 }
}
