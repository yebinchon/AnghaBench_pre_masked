
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int flags; } ;
struct ccb_scsiio {TYPE_1__ ccb_h; } ;
struct TYPE_7__ {int dmat; } ;
struct TYPE_8__ {TYPE_2__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;
struct TYPE_9__ {int dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* FUNC_0 (struct ccb_scsiio*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(ispsoftc_t *VAR_4, struct ccb_scsiio *VAR_5, uint32_t VAR_6)
{
 if ((VAR_5->ccb_h.flags & VAR_3) == VAR_2) {
  FUNC_1(VAR_4->isp_osinfo.dmat, FUNC_0(VAR_5)->dmap, VAR_0);
 } else {
  FUNC_1(VAR_4->isp_osinfo.dmat, FUNC_0(VAR_5)->dmap, VAR_1);
 }
 FUNC_2(VAR_4->isp_osinfo.dmat, FUNC_0(VAR_5)->dmap);
}
