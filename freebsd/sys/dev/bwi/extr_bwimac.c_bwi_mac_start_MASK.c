
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int dummy; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int ) ;
 int FUNC_3 (struct bwi_mac*) ;

int
FUNC_4(struct bwi_mac *VAR_4)
{
 struct bwi_softc *VAR_5 = VAR_4->mac_sc;

 FUNC_1(VAR_5, VAR_2, VAR_3);
 FUNC_2(VAR_5, VAR_1, VAR_0);


 FUNC_0(VAR_5, VAR_2);
 FUNC_0(VAR_5, VAR_1);

 return FUNC_3(VAR_4);
}
