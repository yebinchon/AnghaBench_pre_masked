
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd; } ;
struct TYPE_3__ {scalar_t__ func_code; int path; } ;
union ccb {TYPE_2__ ataio; TYPE_1__ ccb_h; } ;
struct ata_cmd {int dummy; } ;
typedef int cdb_str ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(union ccb *VAR_2)
{
 char VAR_3[(sizeof(struct ata_cmd) * 3) + 1];

 if (VAR_2->ccb_h.func_code != VAR_1)
  return;

 FUNC_0(VAR_2->ccb_h.path,
     VAR_0,("%s. ACB: %s\n", FUNC_2(&VAR_2->ataio.cmd),
  FUNC_1(&VAR_2->ataio.cmd, VAR_3, sizeof(VAR_3))));
}
