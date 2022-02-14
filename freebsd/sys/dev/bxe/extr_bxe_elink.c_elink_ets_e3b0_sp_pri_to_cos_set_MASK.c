
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct elink_params {scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static elink_status_t FUNC_1(const struct elink_params *VAR_5,
         uint8_t *VAR_6, const uint8_t VAR_7,
         const uint8_t VAR_8)
{
 struct bxe_softc *VAR_9 = VAR_5->sc;
 const uint8_t VAR_10 = VAR_5->port;
 const uint8_t VAR_11 = (VAR_10) ? VAR_2 :
  VAR_1;

 if (VAR_7 >= VAR_11) {
  FUNC_0(VAR_9, "elink_ets_e3b0_sp_pri_to_cos_set invalid "
     "parameter Illegal strict priority\n");
     return VAR_3;
 }

 if (VAR_6[VAR_7] != VAR_0) {
  FUNC_0(VAR_9, "elink_ets_e3b0_sp_pri_to_cos_set invalid "
       "parameter There can't be two COS's with "
       "the same strict pri\n");
  return VAR_3;
 }

 VAR_6[VAR_7] = VAR_8;
 return VAR_4;

}
