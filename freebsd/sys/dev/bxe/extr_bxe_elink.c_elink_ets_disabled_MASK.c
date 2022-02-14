
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct elink_params*) ;
 int FUNC_5 (struct elink_params*,struct elink_vars*) ;

elink_status_t FUNC_6(struct elink_params *VAR_2,
        struct elink_vars *VAR_3)
{
 struct bxe_softc *VAR_4 = VAR_2->sc;
 elink_status_t VAR_5 = VAR_1;

 if ((FUNC_0(VAR_4)) || (FUNC_1(VAR_4)))
  FUNC_4(VAR_2);
 else if (FUNC_2(VAR_4))
  VAR_5 = FUNC_5(VAR_2, VAR_3);
 else {
  FUNC_3(VAR_4, "elink_ets_disabled - chip not supported\n");
  return VAR_0;
 }

 return VAR_5;
}
