
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct ntb_softc {int peer_msix_good; int peer_msix_done; scalar_t__ msix_xlat; int device; int peer_msix_work; TYPE_3__* reg; int lnk_sta; TYPE_2__* peer_msix_data; TYPE_1__* msix_data; } ;
struct TYPE_6__ {int lnk_sta; } ;
struct TYPE_5__ {scalar_t__ nmd_ofs; scalar_t__ nmd_data; } ;
struct TYPE_4__ {scalar_t__ nmd_data; scalar_t__ nmd_ofs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (int *,int,void (*) (void*),struct ntb_softc*) ;
 int VAR_7 ;
 int FUNC_2 (struct ntb_softc*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct ntb_softc*) ;
 int FUNC_5 (int,char*,unsigned int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9)
{
 struct ntb_softc *VAR_10;
 uint32_t VAR_11;
 unsigned VAR_12;

 VAR_10 = VAR_9;

 if (VAR_10->peer_msix_good)
  goto msix_good;
 if (VAR_10->peer_msix_done)
  goto msix_done;



 if (!VAR_8)
  goto reschedule;


 FUNC_2(VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_3(VAR_10->device, VAR_0 + VAR_12,
      VAR_10->msix_data[VAR_12].nmd_data);
  FUNC_3(VAR_10->device, VAR_3 + VAR_12,
      VAR_10->msix_data[VAR_12].nmd_ofs - VAR_10->msix_xlat);
 }
 FUNC_3(VAR_10->device, VAR_2, VAR_5);

 FUNC_7(VAR_10->device, VAR_2, &VAR_11);
 if (VAR_11 != VAR_5)
  goto reschedule;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  FUNC_7(VAR_10->device, VAR_0 + VAR_12, &VAR_11);
  FUNC_5(2, "remote MSIX data(%u): 0x%x\n", VAR_12, VAR_11);
  VAR_10->peer_msix_data[VAR_12].nmd_data = VAR_11;
  FUNC_7(VAR_10->device, VAR_3 + VAR_12, &VAR_11);
  FUNC_5(2, "remote MSIX addr(%u): 0x%x\n", VAR_12, VAR_11);
  VAR_10->peer_msix_data[VAR_12].nmd_ofs = VAR_11;
 }

 VAR_10->peer_msix_done = 1;

msix_done:
 FUNC_3(VAR_10->device, VAR_1, VAR_4);
 FUNC_7(VAR_10->device, VAR_1, &VAR_11);
 if (VAR_11 != VAR_4)
  goto reschedule;

 FUNC_6(VAR_10->device);
 VAR_10->peer_msix_good = 1;

 goto reschedule;

msix_good:
 FUNC_4(VAR_10);
 FUNC_8(VAR_10->device);
 return;

reschedule:
 VAR_10->lnk_sta = FUNC_9(VAR_10->device, VAR_10->reg->lnk_sta, 2);
 if (FUNC_0(VAR_10)) {
  FUNC_1(&VAR_10->peer_msix_work,
      VAR_7 * (VAR_10->peer_msix_good ? 2 : 1) / 10,
      FUNC_10, VAR_10);
 } else
  FUNC_6(VAR_10->device);
}
