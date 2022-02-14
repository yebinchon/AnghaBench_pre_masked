
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct elink_params const*,struct elink_vars const*) ;
 int FUNC_3 (struct elink_params const*) ;

__attribute__((used)) static elink_status_t FUNC_4(const struct elink_params *VAR_2,
       const struct elink_vars *VAR_3)
{
 struct bxe_softc *VAR_4 = VAR_2->sc;

 if (!FUNC_0(VAR_4)) {
  FUNC_1(VAR_4,
     "elink_ets_e3b0_disabled the chip isn't E3B0\n");
  return VAR_0;
 }

 FUNC_2(VAR_2, VAR_3);

 FUNC_3(VAR_2);

 return VAR_1;
}
