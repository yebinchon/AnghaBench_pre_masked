
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct ntb_softc {scalar_t__ type; scalar_t__ ntb_ctl; scalar_t__ lnk_sta; int peer_msix_good; int peer_msix_done; int peer_msix_work; TYPE_2__* reg; int device; int db_link_mask; TYPE_1__* self_reg; } ;
struct TYPE_4__ {int lnk_sta; int ntb_ctl; } ;
struct TYPE_3__ {int db_bell; } ;


 scalar_t__ FUNC_0 (struct ntb_softc*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ntb_softc*) ;
 int FUNC_2 (int *,int ,int ,struct ntb_softc*) ;
 int FUNC_3 (struct ntb_softc*,int ,int ) ;
 int VAR_2 ;
 void* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;

__attribute__((used)) static bool
FUNC_6(struct ntb_softc *VAR_3)
{
 uint32_t VAR_4;
 uint16_t VAR_5;

 if (VAR_3->type == VAR_0) {
  VAR_4 = FUNC_4(4, VAR_3->reg->ntb_ctl);
  if (VAR_4 == VAR_3->ntb_ctl)
   return (0);

  VAR_3->ntb_ctl = VAR_4;
  VAR_3->lnk_sta = FUNC_4(4, VAR_3->reg->lnk_sta);
 } else {
  FUNC_3(VAR_3, VAR_3->self_reg->db_bell, VAR_3->db_link_mask);

  VAR_5 = FUNC_5(VAR_3->device, VAR_3->reg->lnk_sta, 2);
  if (VAR_5 == VAR_3->lnk_sta)
   return (0);

  VAR_3->lnk_sta = VAR_5;

  if (FUNC_0(VAR_3, VAR_1)) {
   if (FUNC_1(VAR_3)) {
    if (!VAR_3->peer_msix_good) {
     FUNC_2(&VAR_3->peer_msix_work, 0,
         VAR_2, VAR_3);
     return (0);
    }
   } else {
    VAR_3->peer_msix_good = 0;
    VAR_3->peer_msix_done = 0;
   }
  }
 }
 return (1);
}
