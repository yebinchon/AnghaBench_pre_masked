
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int targetAddress; int targetName; } ;
struct TYPE_7__ {int douio; int oid; int clist; TYPE_2__ opt; int dev; TYPE_1__* isc; int sid; } ;
typedef TYPE_3__ isc_session_t ;
struct TYPE_5__ {int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,int,int ,char*) ;
 int FUNC_2 (int *,int ,int ,char*,int,void*,int ,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int,char*,int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_8(isc_session_t *VAR_6)
{
     FUNC_4(8);
     FUNC_6(6, "sid=%d %s", VAR_6->sid, FUNC_5(VAR_6->dev));

     FUNC_7(&VAR_6->clist);
     VAR_6->oid = FUNC_1(&VAR_6->clist,
          FUNC_3(VAR_6->isc->oid),
          VAR_3,
          FUNC_5(VAR_6->dev) + 5,
          VAR_0,
          0,
          "initiator");
     FUNC_2(&VAR_6->clist,
       FUNC_3(VAR_6->oid),
       VAR_3,
       "targetname",
       VAR_2 | VAR_0,
       (void *)&VAR_6->opt.targetName, 0,
       VAR_5, "A", "target name");

     FUNC_2(&VAR_6->clist,
       FUNC_3(VAR_6->oid),
       VAR_3,
       "targeaddress",
       VAR_2 | VAR_0,
       (void *)&VAR_6->opt.targetAddress, 0,
       VAR_5, "A", "target address");

     FUNC_2(&VAR_6->clist,
       FUNC_3(VAR_6->oid),
       VAR_3,
       "stats",
       VAR_2 | VAR_0,
       (void *)VAR_6, 0,
       VAR_4, "A", "statistics");

     FUNC_0(&VAR_6->clist,
       FUNC_3(VAR_6->oid),
       VAR_3,
       "douio",
       VAR_1,
       &VAR_6->douio, 0, "enable uio on read");
}
