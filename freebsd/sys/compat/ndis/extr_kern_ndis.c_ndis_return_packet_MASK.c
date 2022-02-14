
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ndis_softc {TYPE_2__* ndis_block; } ;
struct TYPE_6__ {int np_list; scalar_t__ np_softc; scalar_t__ np_refcnt; } ;
typedef TYPE_1__ ndis_packet ;
struct TYPE_7__ {int nmb_returnitem; int nmb_returnlock; int nmb_returnlist; } ;
typedef TYPE_2__ ndis_miniport_block ;
typedef int io_workitem_func ;
struct TYPE_8__ {scalar_t__ ipt_wrap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;

void
FUNC_5(ndis_packet *VAR_2)
{
 ndis_miniport_block *VAR_3;

 if (VAR_2 == ((void*)0))
  return;


 VAR_2->np_refcnt--;


 if (VAR_2->np_refcnt)
  return;

 VAR_3 = ((struct ndis_softc *)VAR_2->np_softc)->ndis_block;

 FUNC_3(&VAR_3->nmb_returnlock);
 FUNC_0((&VAR_2->np_list));
 FUNC_1((&VAR_3->nmb_returnlist), (&VAR_2->np_list));
 FUNC_4(&VAR_3->nmb_returnlock);

 FUNC_2(VAR_3->nmb_returnitem,
     (io_workitem_func)VAR_1[7].ipt_wrap,
     VAR_0, VAR_3);
}
