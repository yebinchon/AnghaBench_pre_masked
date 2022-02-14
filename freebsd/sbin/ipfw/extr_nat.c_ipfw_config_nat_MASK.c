
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nat44_cfg_redir {int dummy; } ;
struct nat44_cfg_nat {int redir_cnt; int mode; int ip; int name; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_6__ {int name; TYPE_1__ head; } ;
struct TYPE_7__ {int opheader; TYPE_2__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;
struct TYPE_8__ {int do_quiet; } ;


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
 TYPE_4__ VAR_11 ;
 int FUNC_0 (int ,int *,size_t) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ,char*,...) ;
 size_t FUNC_3 (int*,char***) ;
 size_t FUNC_4 (int*,char***) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,size_t) ;
 int VAR_12 ;
 int FUNC_11 (char*,struct nat44_cfg_nat*) ;
 int FUNC_12 (char*,int*,char***) ;
 int FUNC_13 (char*,int*,char***) ;
 int FUNC_14 (char*,int*,char***) ;
 int FUNC_15 (int ,int,char*,int) ;
 scalar_t__ FUNC_16 (char*,char**,int ) ;

void
FUNC_17(int VAR_13, char **VAR_14)
{
 ipfw_obj_header *VAR_15;
 struct nat44_cfg_nat *VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 char *VAR_21, *VAR_22, **VAR_23, *VAR_24;
 size_t VAR_25;

 VAR_14++;
 VAR_13--;

 if (VAR_13 == 0)
  FUNC_2(VAR_0, "missing nat id");
 VAR_21 = *VAR_14;
 VAR_17 = (int)FUNC_16(VAR_21, &VAR_24, 0);
 if (VAR_17 <= 0 || *VAR_24 != '\0')
  FUNC_2(VAR_0, "illegal nat id: %s", VAR_21);
 VAR_14++;
 VAR_13--;
 if (VAR_13 == 0)
  FUNC_2(VAR_0, "missing option");

 VAR_25 = sizeof(*VAR_15) + sizeof(*VAR_16);
 VAR_20 = VAR_13;
 VAR_23 = VAR_14;
 while (VAR_20 > 0) {
  VAR_19 = FUNC_9(VAR_12, *VAR_23);
  VAR_20--;
  VAR_23++;
  switch (VAR_19) {
  case 136:
  case 137:
   VAR_20--;
   VAR_23++;
   break;
  case 139:
  case 138:
  case 130:
  case 129:
  case 128:
  case 131:
  case 140:
  case 135:
   break;
  case 134:
   if (VAR_20 < 2)
    FUNC_2(VAR_0, "redirect_addr: "
        "not enough arguments");
   VAR_25 += FUNC_3(&VAR_20, &VAR_23);
   VAR_23 += 2;
   VAR_20 -= 2;
   break;
  case 133:
   if (VAR_20 < 3)
    FUNC_2(VAR_0, "redirect_port: "
        "not enough arguments");
   VAR_23++;
   VAR_20--;
   VAR_25 += FUNC_4(&VAR_20, &VAR_23);
   VAR_23 += 2;
   VAR_20 -= 2;

   if (VAR_20 != 0 && FUNC_7(**VAR_23)) {
    VAR_23++;
    VAR_20--;
   }
   break;
  case 132:
   if (VAR_20 < 2)
    FUNC_2(VAR_0, "redirect_proto: "
        "not enough arguments");
   VAR_25 += sizeof(struct nat44_cfg_redir);
   VAR_23 += 2;
   VAR_20 -= 2;

   if (VAR_20 != 0 && FUNC_7(**VAR_23)) {
    VAR_23++;
    VAR_20--;
   }
   if (VAR_20 != 0 && FUNC_7(**VAR_23)) {
    VAR_23++;
    VAR_20--;
   }
   break;
  default:
   FUNC_2(VAR_0, "unrecognised option ``%s''", VAR_23[-1]);
  }
 }

 if ((VAR_22 = FUNC_8(VAR_25)) == ((void*)0))
  FUNC_2(VAR_1, "malloc failed");


 VAR_18 = sizeof(*VAR_15) + sizeof(*VAR_16);
 FUNC_10(VAR_22, 0, VAR_25);
 VAR_15 = (ipfw_obj_header *)VAR_22;
 VAR_16 = (struct nat44_cfg_nat *)(VAR_15 + 1);
 VAR_15->ntlv.head.length = sizeof(VAR_15->ntlv);
 FUNC_15(VAR_15->ntlv.name, sizeof(VAR_15->ntlv.name), "%d", VAR_17);
 FUNC_15(VAR_16->name, sizeof(VAR_16->name), "%d", VAR_17);

 while (VAR_13 > 0) {
  VAR_19 = FUNC_9(VAR_12, *VAR_14);
  VAR_13--;
  VAR_14++;
  switch (VAR_19) {
  case 136:
   if (VAR_13 == 0)
    FUNC_2(VAR_0, "missing option");
   if (!FUNC_5(VAR_14[0], &(VAR_16->ip)))
    FUNC_2(VAR_0, "bad ip address ``%s''",
        VAR_14[0]);
   VAR_13--;
   VAR_14++;
   break;
  case 137:
   if (VAR_13 == 0)
    FUNC_2(VAR_0, "missing option");
   FUNC_11(VAR_14[0], VAR_16);
   VAR_13--;
   VAR_14++;
   break;
  case 139:
   VAR_16->mode |= VAR_4;
   break;
  case 138:
   VAR_16->mode |= VAR_3;
   break;
  case 130:
   VAR_16->mode |= VAR_8;
   break;
  case 128:
   VAR_16->mode |= VAR_10;
   break;
  case 129:
   VAR_16->mode |= VAR_9;
   break;
  case 131:
   VAR_16->mode |= VAR_6;
   break;
  case 140:
   VAR_16->mode |= VAR_7;
   break;
  case 135:
   VAR_16->mode |= VAR_5;
   break;




  case 134:
  case 133:
  case 132:
   switch (VAR_19) {
   case 134:
    VAR_17 = FUNC_12(&VAR_22[VAR_18], &VAR_13, &VAR_14);
    break;
   case 133:
    VAR_17 = FUNC_13(&VAR_22[VAR_18], &VAR_13, &VAR_14);
    break;
   case 132:
    VAR_17 = FUNC_14(&VAR_22[VAR_18], &VAR_13, &VAR_14);
    break;
   }
   VAR_16->redir_cnt++;
   VAR_18 += VAR_17;
   break;
  }
 }

 VAR_17 = FUNC_0(VAR_2, &VAR_15->opheader, VAR_25);
 if (VAR_17 != 0)
  FUNC_1(1, "setsockopt(%s)", "IP_FW_NAT44_XCONFIG");

 if (!VAR_11.do_quiet) {

  int VAR_26 = 3;
  const char *VAR_27[] = {"show", "config", VAR_21};
  FUNC_6(VAR_26, (char **)(void *)VAR_27);
 }
}
