
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; } ;
struct TYPE_4__ {scalar_t__ func_code; int path; } ;
union ccb {TYPE_1__ nvmeio; TYPE_2__ ccb_h; } ;
struct nvme_command {int dummy; } ;
typedef int cdb_str ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(union ccb *VAR_3)
{
 char VAR_4[(sizeof(struct nvme_command) * 3) + 1];

 if (VAR_3->ccb_h.func_code != VAR_2 &&
     VAR_3->ccb_h.func_code != VAR_1)
  return;

 FUNC_0(VAR_3->ccb_h.path,
     VAR_0,("%s. NCB: %s\n", FUNC_2(&VAR_3->nvmeio.cmd,
  VAR_3->ccb_h.func_code == VAR_1),
  FUNC_1(&VAR_3->nvmeio.cmd, VAR_4, sizeof(VAR_4))));
}
