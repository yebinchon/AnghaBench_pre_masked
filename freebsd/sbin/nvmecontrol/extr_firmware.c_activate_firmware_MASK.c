
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int status; } ;
struct TYPE_3__ {int cdw10; int opc; } ;
struct nvme_pt_command {TYPE_2__ cpl; scalar_t__ is_read; TYPE_1__ cmd; } ;
typedef int pt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,struct nvme_pt_command*) ;
 int FUNC_6 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_8(int VAR_4, int VAR_5, int VAR_6)
{
 struct nvme_pt_command VAR_7;
 uint16_t VAR_8, VAR_9;

 FUNC_6(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd.opc = VAR_0;
 VAR_7.cmd.cdw10 = FUNC_4((VAR_6 << 3) | VAR_5);
 VAR_7.is_read = 0;

 if (FUNC_5(VAR_4, VAR_1, &VAR_7) < 0)
  FUNC_2(1, "firmware activate request failed");

 VAR_8 = FUNC_1(VAR_7.cpl.status);
 VAR_9 = FUNC_0(VAR_7.cpl.status);

 if (VAR_8 == VAR_2 &&
     VAR_9 == VAR_3)
  return 1;

 if (FUNC_7(&VAR_7.cpl))
  FUNC_3(1, "firmware activate request returned error");

 return 0;
}
