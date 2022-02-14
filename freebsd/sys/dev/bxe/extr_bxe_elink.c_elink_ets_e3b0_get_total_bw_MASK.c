
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct elink_params {struct bxe_softc* sc; } ;
struct elink_ets_params {size_t num_of_cos; TYPE_3__* cos; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;
struct TYPE_4__ {int bw; } ;
struct TYPE_5__ {TYPE_1__ bw_params; } ;
struct TYPE_6__ {scalar_t__ state; TYPE_2__ params; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static elink_status_t FUNC_1(
 const struct elink_params *VAR_3,
 struct elink_ets_params *VAR_4,
 uint16_t *VAR_5)
{
 struct bxe_softc *VAR_6 = VAR_3->sc;
 uint8_t VAR_7 = 0;
 uint8_t VAR_8 = 0;

 *VAR_5 = 0 ;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_of_cos; VAR_7++) {
  if (VAR_4->cos[VAR_7].state == VAR_2) {
   VAR_8 = 1;
   if (!VAR_4->cos[VAR_7].params.bw_params.bw) {
    FUNC_0(VAR_6, "elink_ets_E3B0_config BW"
         "was set to 0\n");



    VAR_4->cos[VAR_7].params.bw_params.bw
      = 1;
   }
   *VAR_5 +=
    VAR_4->cos[VAR_7].params.bw_params.bw;
  }
 }


 if ((VAR_8 == 1) && (*VAR_5 != 100)) {
  if (*VAR_5 == 0) {
   FUNC_0(VAR_6,
      "elink_ets_E3B0_config total BW shouldn't be 0\n");
   return VAR_0;
  }
  FUNC_0(VAR_6,
     "elink_ets_E3B0_config total BW should be 100\n");



 }
 return VAR_1;
}
