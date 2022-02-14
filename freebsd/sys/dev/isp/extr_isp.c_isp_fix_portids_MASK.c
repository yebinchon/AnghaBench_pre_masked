
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int ispsoftc_t ;
struct TYPE_6__ {int handle; int portid; int portname; } ;
typedef TYPE_1__ isp_pdb_t ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ port_wwn; int new_portid; int portid; int handle; } ;
typedef TYPE_2__ fcportdb_t ;
struct TYPE_8__ {scalar_t__ isp_loopstate; TYPE_2__* portdb; } ;
typedef TYPE_3__ fcparam ;


 TYPE_3__* FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int ,TYPE_1__*) ;
 int FUNC_4 (int *,int ,char*,int,int ,int) ;

__attribute__((used)) static void
FUNC_5(ispsoftc_t *VAR_6, int VAR_7)
{
 fcparam *VAR_8 = FUNC_0(VAR_6, VAR_7);
 isp_pdb_t VAR_9;
 uint64_t VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  fcportdb_t *VAR_13 = &VAR_8->portdb[VAR_11];

  if (VAR_13->state == VAR_0 ||
      VAR_13->state == VAR_1)
   continue;
  if (FUNC_2(VAR_13->portid))
   continue;

  VAR_12 = FUNC_3(VAR_6, VAR_7, VAR_13->handle, &VAR_9);
  if (VAR_8->isp_loopstate < VAR_4)
   return;
  if (VAR_12 != 0) {
   FUNC_4(VAR_6, VAR_2,
       "Chan %d FC Scan Loop handle %d returned %x",
       VAR_7, VAR_13->handle, VAR_12);
   continue;
  }

  FUNC_1(VAR_10, VAR_9.portname);
  if (VAR_13->port_wwn != VAR_10)
   continue;
  VAR_13->portid = VAR_13->new_portid = VAR_9.portid;
  FUNC_4(VAR_6, VAR_3,
      "Chan %d Port 0x%06x@0x%04x is fixed",
      VAR_7, VAR_9.portid, VAR_9.handle);
 }
}
