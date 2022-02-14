
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ target_id_t ;
struct TYPE_3__ {int enabled; } ;
struct mpt_softc {int twildcard; int tenabled; TYPE_2__* trt; TYPE_1__ trt_wildcard; scalar_t__ is_fc; } ;
typedef size_t lun_id_t ;
struct TYPE_4__ {int enabled; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct mpt_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(struct mpt_softc *VAR_4, target_id_t VAR_5, lun_id_t VAR_6)
{

 if (VAR_5 == VAR_1 && VAR_6 == VAR_0) {
  VAR_4->twildcard = 1;
 } else if (VAR_6 >= VAR_3) {
  return (VAR_2);
 } else if (VAR_5 != VAR_1 && VAR_5 != 0) {
  return (VAR_2);
 }
 if (VAR_4->tenabled == 0) {
  if (VAR_4->is_fc) {
   (void) FUNC_0(VAR_4, 0);
  }
  VAR_4->tenabled = 1;
 }
 if (VAR_6 == VAR_0) {
  VAR_4->trt_wildcard.enabled = 1;
 } else {
  VAR_4->trt[VAR_6].enabled = 1;
 }
 return (0);
}
