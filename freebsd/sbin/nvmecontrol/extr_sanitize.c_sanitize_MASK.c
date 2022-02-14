
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nvme_sanitize_status_page {int sstat; int sprog; } ;
struct TYPE_3__ {void* cdw11; void* cdw10; int opc; } ;
struct nvme_pt_command {int cpl; TYPE_1__ cmd; } ;
struct nvme_controller_data {int sanicap; int nn; } ;
struct cmd {int dummy; } ;
typedef int ss ;
typedef int pt ;
struct TYPE_4__ {int owpass; char* dev; int ndas; int oipbp; int ause; int ovrpat; scalar_t__ reportonly; int * sanact; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;

 int VAR_11 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char**,scalar_t__*) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int,int ,struct nvme_pt_command*) ;
 int FUNC_12 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (char*,int*,int,int) ;
 TYPE_2__ VAR_12 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int,struct nvme_controller_data*) ;
 int FUNC_17 (int,int ,int ,int ,int ,int ,struct nvme_sanitize_status_page*,int) ;
 int FUNC_18 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_19 (int *,char*) ;

__attribute__((used)) static void
FUNC_20(const struct cmd *VAR_15, int VAR_16, char *VAR_17[])
{
 struct nvme_controller_data VAR_18;
 struct nvme_pt_command VAR_19;
 struct nvme_sanitize_status_page VAR_20;
 char *VAR_21;
 uint32_t VAR_22;
 int VAR_23 = 0, VAR_24, VAR_25 = 1;

 if (FUNC_1(VAR_16, VAR_17, VAR_15))
  return;

 if (VAR_12.sanact == ((void*)0)) {
  if (!VAR_12.reportonly) {
   FUNC_7(VAR_13, "Sanitize Action is not specified\n");
   FUNC_0(VAR_16, VAR_17, VAR_15);
  }
 } else {
  if (FUNC_19(VAR_12.sanact, "exitfailure") == 0)
   VAR_23 = 1;
  else if (FUNC_19(VAR_12.sanact, "block") == 0)
   VAR_23 = 2;
  else if (FUNC_19(VAR_12.sanact, "overwrite") == 0)
   VAR_23 = 3;
  else if (FUNC_19(VAR_12.sanact, "crypto") == 0)
   VAR_23 = 4;
  else {
   FUNC_7(VAR_13, "Incorrect Sanitize Action value\n");
   FUNC_0(VAR_16, VAR_17, VAR_15);
  }
 }
 if (VAR_12.owpass == 0 || VAR_12.owpass > 16) {
  FUNC_7(VAR_13, "Incorrect Overwrite Pass Count value\n");
  FUNC_0(VAR_16, VAR_17, VAR_15);
 }

 FUNC_14(VAR_12.dev, &VAR_24, 1, 1);
 FUNC_9(VAR_24, &VAR_21, &VAR_22);
 if (VAR_22 != 0) {
  FUNC_2(VAR_24);
  FUNC_14(VAR_21, &VAR_24, 1, 1);
 }
 FUNC_8(VAR_21);

 if (VAR_12.reportonly)
  goto wait;


 FUNC_16(VAR_24, &VAR_18);
 if (((VAR_18.sanicap >> VAR_1) &
      VAR_0) == 0 && VAR_23 == 2)
  FUNC_4(1, "controller does not support Block Erase");
 if (((VAR_18.sanicap >> VAR_5) &
      VAR_4) == 0 && VAR_23 == 3)
  FUNC_4(1, "controller does not support Overwrite");
 if (((VAR_18.sanicap >> VAR_3) &
      VAR_2) == 0 && VAR_23 == 4)
  FUNC_4(1, "controller does not support Crypto Erase");





 if (VAR_22 != 0 && VAR_18.nn > 1)
  FUNC_4(1, "can't sanitize one of namespaces, specify controller");

 FUNC_12(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.cmd.opc = VAR_8;
 VAR_19.cmd.cdw10 = FUNC_10((VAR_12.ndas << 9) | (VAR_12.oipbp << 8) |
     ((VAR_12.owpass & 0xf) << 4) | (VAR_12.ause << 3) | VAR_23);
 VAR_19.cmd.cdw11 = FUNC_10(VAR_12.ovrpat);

 if (FUNC_11(VAR_24, VAR_9, &VAR_19) < 0)
  FUNC_3(1, "sanitize request failed");

 if (FUNC_13(&VAR_19.cpl))
  FUNC_4(1, "sanitize request returned error");

wait:
 FUNC_17(VAR_24, VAR_7,
     VAR_6, 0, 0, 0, &VAR_20, sizeof(VAR_20));
 switch ((VAR_20.sstat >> VAR_11) &
     VAR_10) {
 case 128:
  FUNC_15("Never sanitized");
  break;
 case 132:
  FUNC_15("Sanitize completed");
  break;
 case 129:
  FUNC_15("Sanitize in progress: %u%% (%u/65535)\r",
      (VAR_20.sprog * 100 + 32768) / 65536, VAR_20.sprog);
  FUNC_6(VAR_14);
  if (VAR_25 < 16)
   VAR_25++;
  FUNC_18(VAR_25);
  goto wait;
 case 130:
  FUNC_15("Sanitize failed");
  break;
 case 131:
  FUNC_15("Sanitize completed with deallocation");
  break;
 default:
  FUNC_15("Sanitize status unknown");
  break;
 }
 if (VAR_25 > 1)
  FUNC_15("                       ");
 FUNC_15("\n");

 FUNC_2(VAR_24);
 FUNC_5(0);
}
