
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cdw0; } ;
struct TYPE_3__ {int cdw10; int opc; } ;
struct nvme_pt_command {TYPE_2__ cpl; TYPE_1__ cmd; } ;
typedef int pt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,struct nvme_pt_command*) ;
 int FUNC_4 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_3)
{
 struct nvme_pt_command VAR_4;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd.opc = VAR_1;
 VAR_4.cmd.cdw10 = FUNC_2(VAR_0);

 if (FUNC_3(VAR_3, VAR_2, &VAR_4) < 0)
  FUNC_0(1, "set feature power mgmt request failed");

 if (FUNC_5(&VAR_4.cpl))
  FUNC_1(1, "set feature power mgmt request returned error");

 FUNC_6("Current Power Mode is %d\n", VAR_4.cpl.cdw0);
}
