
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* status; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef scalar_t__ uint32_t ;
struct ocs_softc {int dummy; } ;
struct TYPE_6__ {int inot; int atio; } ;
typedef TYPE_2__ ocs_tgt_resource_t ;
typedef int int32_t ;
struct TYPE_7__ {int stqe; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__ VAR_1 ;
 int FUNC_2 (union ccb*) ;

__attribute__((used)) static int32_t
FUNC_3(struct ocs_softc *VAR_2, ocs_tgt_resource_t *VAR_3)
{
 union ccb *VAR_4 = ((void*)0);
 uint32_t VAR_5;

 VAR_5 = 0;
 do {
  VAR_4 = (union ccb *)FUNC_0(&VAR_3->atio);
  if (VAR_4) {
   FUNC_1(&VAR_3->atio, VAR_1.stqe);
   VAR_4->ccb_h.status = VAR_0;
   FUNC_2(VAR_4);
   VAR_5++;
  }
 } while (VAR_4);

 VAR_5 = 0;
 do {
  VAR_4 = (union ccb *)FUNC_0(&VAR_3->inot);
  if (VAR_4) {
   FUNC_1(&VAR_3->inot, VAR_1.stqe);
   VAR_4->ccb_h.status = VAR_0;
   FUNC_2(VAR_4);
   VAR_5++;
  }
 } while (VAR_4);

 return 0;
}
