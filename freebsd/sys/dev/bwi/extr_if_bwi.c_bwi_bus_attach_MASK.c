
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_regwin {int dummy; } ;
struct bwi_softc {struct bwi_regwin sc_bus_regwin; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,struct bwi_regwin*,int ) ;
 int FUNC_2 (struct bwi_softc*,struct bwi_regwin*) ;
 int FUNC_3 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;

__attribute__((used)) static int
FUNC_4(struct bwi_softc *VAR_1)
{
 struct bwi_regwin *VAR_2, *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->sc_bus_regwin;

 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!FUNC_2(VAR_1, VAR_2))
  FUNC_1(VAR_1, VAR_2, 0);


 FUNC_0(VAR_1, VAR_0, 0);

 return FUNC_3(VAR_1, VAR_3, ((void*)0));
}
