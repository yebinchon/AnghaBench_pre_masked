
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct elink_params {scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_10,
        uint32_t VAR_11[2],
        uint32_t VAR_12[2])
{

 struct bxe_softc *VAR_13 = VAR_10->sc;
 uint32_t VAR_14 = VAR_10->port ? VAR_9 : VAR_8;
 uint32_t VAR_15 = 0;
 uint32_t VAR_16 = 0;

 FUNC_0(VAR_13, "pfc statistic read from EMAC\n");


 VAR_16 = FUNC_1(VAR_13, VAR_14 +
    VAR_0);
 VAR_16 &= VAR_1;
 VAR_15 = FUNC_1(VAR_13, VAR_14 + VAR_4);
 VAR_15 &= VAR_5;

 VAR_12[0] = VAR_15 + VAR_16;


 VAR_16 = FUNC_1(VAR_13, VAR_14 +
    VAR_2);
 VAR_16 &= VAR_3;
 VAR_15 = FUNC_1(VAR_13, VAR_14 + VAR_6);
 VAR_15 &= VAR_7;

 VAR_11[0] = VAR_15 + VAR_16;
}
