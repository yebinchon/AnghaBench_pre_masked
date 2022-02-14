
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int dummy; } ;
struct bwi_regwin {int dummy; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 struct bwi_regwin* FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int FUNC_2 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;

__attribute__((used)) static int
FUNC_3(struct bwi_mac *VAR_1)
{
 struct bwi_softc *VAR_2 = VAR_1->mac_sc;
 struct bwi_regwin *VAR_3, *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_2, VAR_4, &VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_2, VAR_0, 0);

 return FUNC_2(VAR_2, VAR_3, ((void*)0));
}
