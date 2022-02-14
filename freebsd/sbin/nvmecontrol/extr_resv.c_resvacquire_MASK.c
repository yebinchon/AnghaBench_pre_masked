
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int cdw10; int opc; } ;
struct nvme_pt_command {int len; int cpl; scalar_t__ is_read; int ** buf; TYPE_1__ cmd; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int data ;
struct TYPE_4__ {int racqa; int rtype; int prkey; int crkey; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int *,scalar_t__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ,struct nvme_pt_command*) ;
 int FUNC_11 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int ,int*,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_14(const struct cmd *VAR_4, int VAR_5, char *VAR_6[])
{
 struct nvme_pt_command VAR_7;
 uint64_t VAR_8[2];
 int VAR_9;
 uint32_t VAR_10;

 if (FUNC_1(VAR_5, VAR_6, VAR_4))
  return;
 FUNC_13(VAR_2.dev, &VAR_9, 1, 1);
 FUNC_7(VAR_9, ((void*)0), &VAR_10);
 if (VAR_10 == 0) {
  FUNC_6(VAR_3, "This command require namespace-id\n");
  FUNC_0(VAR_5, VAR_6, VAR_4);
 }

 VAR_8[0] = FUNC_9(VAR_2.crkey);
 VAR_8[1] = FUNC_9(VAR_2.prkey);

 FUNC_11(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd.opc = VAR_0;
 VAR_7.cmd.cdw10 = FUNC_8((VAR_2.racqa & 7) |
     (VAR_2.rtype << 8));
 VAR_7.buf = &VAR_8;
 VAR_7.len = sizeof(VAR_8);
 VAR_7.is_read = 0;

 if (FUNC_10(VAR_9, VAR_1, &VAR_7) < 0)
  FUNC_3(1, "acquire request failed");

 if (FUNC_12(&VAR_7.cpl))
  FUNC_4(1, "acquire request returned error");

 FUNC_2(VAR_9);
 FUNC_5(0);
}
