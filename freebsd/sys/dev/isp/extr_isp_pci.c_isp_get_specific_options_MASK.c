
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int prefix ;
typedef int name ;
struct TYPE_9__ {int isp_confopts; } ;
typedef TYPE_1__ ispsoftc_t ;
typedef int device_t ;
struct TYPE_11__ {int default_id; int def_role; int def_wwpn; scalar_t__ def_wwnn; int loop_down_limit; int gone_device_time; } ;
struct TYPE_10__ {int iid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_7__* FUNC_0 (TYPE_1__*,int) ;




 TYPE_5__* FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ,int ,char*,int*) ;
 int FUNC_9 (int ,int ,char*,char const**) ;
 int FUNC_10 (char*,int,char*,...) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 void* FUNC_12 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_13(device_t VAR_11, int VAR_12, ispsoftc_t *VAR_13)
{
 const char *VAR_14;
 int VAR_15 = 0;
 char VAR_16[12], VAR_17[16];

 if (VAR_12 == 0)
  VAR_16[0] = 0;
 else
  FUNC_10(VAR_16, sizeof(VAR_16), "chan%d.", VAR_12);
 FUNC_10(VAR_17, sizeof(VAR_17), "%siid", VAR_16);
 if (FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15)) {
  if (FUNC_2(VAR_13)) {
   FUNC_0(VAR_13, VAR_12)->default_id = 109 - VAR_12;
  } else {



   FUNC_1(VAR_13, VAR_12)->iid = 7;

  }
 } else {
  if (FUNC_2(VAR_13)) {
   FUNC_0(VAR_13, VAR_12)->default_id = VAR_15 - VAR_12;
  } else {
   FUNC_1(VAR_13, VAR_12)->iid = VAR_15;
  }
  VAR_13->isp_confopts |= VAR_7;
 }

 if (FUNC_3(VAR_13))
  return;

 VAR_15 = -1;
 FUNC_10(VAR_17, sizeof(VAR_17), "%srole", VAR_16);
 if (FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15) == 0) {
  switch (VAR_15) {
  case 129:
  case 130:
  case 128:
  case 131:
   FUNC_7(VAR_11, "Chan %d setting role to 0x%x\n", VAR_12, VAR_15);
   break;
  default:
   VAR_15 = -1;
   break;
  }
 }
 if (VAR_15 == -1) {
  VAR_15 = VAR_8;
 }
 FUNC_0(VAR_13, VAR_12)->def_role = VAR_15;

 VAR_15 = 0;
 FUNC_10(VAR_17, sizeof(VAR_17), "%sfullduplex", VAR_16);
 if (FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15) == 0 && VAR_15 != 0) {
  VAR_13->isp_confopts |= VAR_1;
 }
 VAR_14 = ((void*)0);
 FUNC_10(VAR_17, sizeof(VAR_17), "%stopology", VAR_16);
 if (FUNC_9(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, (const char **) &VAR_14) == 0 && VAR_14 != ((void*)0)) {
  if (FUNC_11(VAR_14, "lport") == 0) {
   VAR_13->isp_confopts |= VAR_2;
  } else if (FUNC_11(VAR_14, "nport") == 0) {
   VAR_13->isp_confopts |= VAR_5;
  } else if (FUNC_11(VAR_14, "lport-only") == 0) {
   VAR_13->isp_confopts |= VAR_3;
  } else if (FUNC_11(VAR_14, "nport-only") == 0) {
   VAR_13->isp_confopts |= VAR_6;
  }
 }




 VAR_13->isp_confopts |= VAR_0;


 VAR_15 = 0;
 FUNC_10(VAR_17, sizeof(VAR_17), "%snofctape", VAR_16);
 (void) FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15);
 if (VAR_15) {
  VAR_13->isp_confopts &= ~VAR_0;
  VAR_13->isp_confopts |= VAR_4;
 }

 VAR_15 = 0;
 FUNC_10(VAR_17, sizeof(VAR_17), "%sfctape", VAR_16);
 (void) FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15);
 if (VAR_15) {
  VAR_13->isp_confopts &= ~VAR_4;
  VAR_13->isp_confopts |= VAR_0;
 }
 VAR_14 = ((void*)0);
 FUNC_10(VAR_17, sizeof(VAR_17), "%sportwwn", VAR_16);
 VAR_15 = FUNC_9(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, (const char **) &VAR_14);
 if (VAR_15 == 0 && VAR_14 != ((void*)0) && *VAR_14++ == 'w') {
  char *VAR_18 = ((void*)0);
  FUNC_0(VAR_13, VAR_12)->def_wwpn = FUNC_12(VAR_14, &VAR_18, 16);
  if (VAR_18 < VAR_14 + 16 || FUNC_0(VAR_13, VAR_12)->def_wwpn == -1) {
   FUNC_7(VAR_11, "mangled portwwn hint '%s'\n", VAR_14);
   FUNC_0(VAR_13, VAR_12)->def_wwpn = 0;
  }
 }

 VAR_14 = ((void*)0);
 FUNC_10(VAR_17, sizeof(VAR_17), "%snodewwn", VAR_16);
 VAR_15 = FUNC_9(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, (const char **) &VAR_14);
 if (VAR_15 == 0 && VAR_14 != ((void*)0) && *VAR_14++ == 'w') {
  char *VAR_19 = ((void*)0);
  FUNC_0(VAR_13, VAR_12)->def_wwnn = FUNC_12(VAR_14, &VAR_19, 16);
  if (VAR_19 < VAR_14 + 16 || FUNC_0(VAR_13, VAR_12)->def_wwnn == 0) {
   FUNC_7(VAR_11, "mangled nodewwn hint '%s'\n", VAR_14);
   FUNC_0(VAR_13, VAR_12)->def_wwnn = 0;
  }
 }

 VAR_15 = -1;
 FUNC_10(VAR_17, sizeof(VAR_17), "%sloop_down_limit", VAR_16);
 (void) FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15);
 if (VAR_15 >= 0 && VAR_15 < 0xffff) {
  FUNC_0(VAR_13, VAR_12)->loop_down_limit = VAR_15;
 } else {
  FUNC_0(VAR_13, VAR_12)->loop_down_limit = VAR_10;
 }

 VAR_15 = -1;
 FUNC_10(VAR_17, sizeof(VAR_17), "%sgone_device_time", VAR_16);
 (void) FUNC_8(FUNC_5(VAR_11), FUNC_6(VAR_11),
     VAR_17, &VAR_15);
 if (VAR_15 >= 0 && VAR_15 < 0xffff) {
  FUNC_0(VAR_13, VAR_12)->gone_device_time = VAR_15;
 } else {
  FUNC_0(VAR_13, VAR_12)->gone_device_time = VAR_9;
 }
}
