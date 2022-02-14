
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nv {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int hc_controladdr; } ;







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
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int,char**,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,char**) ;
 int FUNC_4 (struct nv*) ;
 int FUNC_5 (struct nv*,char*) ;
 int FUNC_6 (struct nv*) ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,scalar_t__*) ;
 int FUNC_11 (int,char**,char const*) ;
 int FUNC_12 (int ,struct nv**) ;
 int FUNC_13 (int *,int ,struct nv*,int *,int ) ;
 int FUNC_14 (struct nv*,char*,char*,int) ;
 int FUNC_15 (struct nv*,int ,char*) ;
 struct nv* FUNC_16 () ;
 int FUNC_17 (struct nv*) ;
 int FUNC_18 (struct nv*,char*) ;
 int FUNC_19 (struct nv*,int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ,char*,int ) ;
 int FUNC_22 (int ,char*,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int *,int ,int *) ;
 int FUNC_25 (int ,int ) ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 () ;
 TYPE_1__* FUNC_28 (int ,int) ;

int
FUNC_29(int VAR_17, char *VAR_18[])
{
 struct nv *VAR_19;
 int64_t VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 const char *VAR_27;

 VAR_24 = 0;
 VAR_20 = VAR_21 = VAR_22 = 0;

 if (VAR_17 == 1)
  FUNC_27();

 if (FUNC_26(VAR_18[1], "create") == 0) {
  VAR_23 = 132;
  VAR_27 = "c:de:k:m:h";
 } else if (FUNC_26(VAR_18[1], "role") == 0) {
  VAR_23 = 129;
  VAR_27 = "c:dh";
 } else if (FUNC_26(VAR_18[1], "list") == 0) {
  VAR_23 = 130;
  VAR_27 = "c:dh";
 } else if (FUNC_26(VAR_18[1], "status") == 0) {
  VAR_23 = 128;
  VAR_27 = "c:dh";
 } else if (FUNC_26(VAR_18[1], "dump") == 0) {
  VAR_23 = 131;
  VAR_27 = "c:dh";
 } else
  FUNC_27();

 VAR_17--;
 VAR_18++;

 for (;;) {
  int VAR_28;

  VAR_28 = FUNC_11(VAR_17, VAR_18, VAR_27);
  if (VAR_28 == -1)
   break;
  switch (VAR_28) {
  case 'c':
   VAR_13 = VAR_15;
   break;
  case 'd':
   VAR_24++;
   break;
  case 'e':
   if (FUNC_10(VAR_15, &VAR_21) == -1)
    FUNC_8(VAR_4, "Invalid extentsize");
   break;
  case 'k':
   if (FUNC_10(VAR_15, &VAR_22) == -1)
    FUNC_8(VAR_4, "Invalid keepdirty");
   break;
  case 'm':
   if (FUNC_10(VAR_15, &VAR_20) == -1)
    FUNC_8(VAR_4, "Invalid mediasize");
   break;
  case 'h':
  default:
   FUNC_27();
  }
 }
 VAR_17 -= VAR_16;
 VAR_18 += VAR_16;

 switch (VAR_23) {
 case 132:
 case 129:
  if (VAR_17 == 0)
   FUNC_27();
  break;
 }

 FUNC_23(VAR_11);
 FUNC_20(VAR_24);

 VAR_12 = FUNC_28(VAR_13, 1);
 FUNC_1(VAR_12 != ((void*)0));

 switch (VAR_23) {
 case 132:
  FUNC_2(VAR_17, VAR_18, VAR_20, VAR_21, VAR_22);

  FUNC_0("What are we doing here?!");
  break;
 case 131:

  FUNC_3(VAR_17, VAR_18);

  FUNC_0("What are we doing here?!");
  break;
 case 129:

  if (VAR_17 < 2)
   FUNC_27();
  VAR_19 = FUNC_16();
  FUNC_15(VAR_19, VAR_5, "cmd");
  if (FUNC_26(VAR_18[0], "init") == 0)
   FUNC_15(VAR_19, VAR_7, "role");
  else if (FUNC_26(VAR_18[0], "primary") == 0)
   FUNC_15(VAR_19, VAR_8, "role");
  else if (FUNC_26(VAR_18[0], "secondary") == 0)
   FUNC_15(VAR_19, VAR_9, "role");
  else
   FUNC_27();
  for (VAR_26 = 0; VAR_26 < VAR_17 - 1; VAR_26++)
   FUNC_14(VAR_19, VAR_18[VAR_26 + 1], "resource%d", VAR_26);
  break;
 case 130:
 case 128:

  VAR_19 = FUNC_16();
  FUNC_15(VAR_19, VAR_6, "cmd");
  if (VAR_17 == 0)
   FUNC_14(VAR_19, "all", "resource%d", 0);
  else {
   for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++)
    FUNC_14(VAR_19, VAR_18[VAR_26], "resource%d", VAR_26);
  }
  break;
 default:
  FUNC_0("Impossible command!");
 }


 if (FUNC_24(((void*)0), VAR_12->hc_controladdr, &VAR_14) == -1) {
  FUNC_21(VAR_1,
      "Unable to setup control connection to %s",
      VAR_12->hc_controladdr);
 }

 if (FUNC_25(VAR_14, VAR_10) == -1) {
  FUNC_21(VAR_1, "Unable to connect to hastd via %s",
      VAR_12->hc_controladdr);
 }

 if (FUNC_7(((void*)0)) != 0)
  FUNC_9(VAR_0);


 if (FUNC_13(((void*)0), VAR_14, VAR_19, ((void*)0), 0) == -1) {
  FUNC_21(VAR_3,
      "Unable to send command to hastd via %s",
      VAR_12->hc_controladdr);
 }
 FUNC_17(VAR_19);

 if (FUNC_12(VAR_14, &VAR_19) == -1) {
  FUNC_21(VAR_3,
      "cannot receive reply from hastd via %s",
      VAR_12->hc_controladdr);
 }

 VAR_25 = FUNC_18(VAR_19, "error");
 if (VAR_25 != 0) {
  FUNC_22(VAR_2, "Error %d received from hastd.",
      VAR_25);
 }
 FUNC_19(VAR_19, 0);

 switch (VAR_23) {
 case 129:
  VAR_25 = FUNC_5(VAR_19, VAR_18[0]);
  break;
 case 130:
  VAR_25 = FUNC_4(VAR_19);
  break;
 case 128:
  VAR_25 = FUNC_6(VAR_19);
  break;
 default:
  FUNC_0("Impossible command!");
 }

 FUNC_9(VAR_25);
}
