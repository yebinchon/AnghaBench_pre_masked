
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct _gss_mech_switch* elements; } ;
struct _gss_mech_switch {char const* gm_name_prefix; TYPE_1__ gm_mech_oid; void* gm_so; } ;
typedef int buf ;
typedef scalar_t__ OM_uint32 ;
typedef int FILE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,struct _gss_mech_switch*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (void*) ;
 char* FUNC_6 () ;
 void* FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (void*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,int,int *) ;
 int * FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (struct _gss_mech_switch*) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (scalar_t__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_15 (scalar_t__*,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_16 (char) ;
 struct _gss_mech_switch* FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 char* FUNC_19 (char**,char*) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;

void
FUNC_20(void)
{
 OM_uint32 VAR_41, VAR_42;
 FILE *VAR_43;
 char VAR_44[256];
 char *VAR_45;
 char *VAR_46, *VAR_47, *VAR_48, *VAR_49;
 struct _gss_mech_switch *VAR_50;
 int VAR_51;
 void *VAR_52;
 const char *(*VAR_53)(void);

 if (FUNC_1(&VAR_3))
  return;

 VAR_41 = FUNC_15(&VAR_42,
     &VAR_2);
 if (VAR_41)
  return;

 VAR_43 = FUNC_11(VAR_1, "r");
 if (!VAR_43) {
  FUNC_18(VAR_1);
  return;
 }

 VAR_51 = 0;
 while (FUNC_10(VAR_44, sizeof(VAR_44), VAR_43)) {
  if (*VAR_44 == '#')
   continue;
  VAR_45 = VAR_44;
  VAR_46 = FUNC_19(&VAR_45, "\t\n ");
  if (VAR_45) while (FUNC_16(*VAR_45)) VAR_45++;
  VAR_47 = FUNC_19(&VAR_45, "\t\n ");
  if (VAR_45) while (FUNC_16(*VAR_45)) VAR_45++;
  VAR_48 = FUNC_19(&VAR_45, "\t\n ");
  if (VAR_45) while (FUNC_16(*VAR_45)) VAR_45++;
  VAR_49 = FUNC_19(&VAR_45, "\t\n ");
  if (!VAR_46 || !VAR_47 || !VAR_48 || !VAR_49)
   continue;

  VAR_52 = FUNC_7(VAR_48, VAR_0);
  if (!VAR_52) {
   FUNC_12(VAR_36, "dlopen: %s\n", FUNC_6());
   continue;
  }

  VAR_50 = FUNC_17(sizeof(struct _gss_mech_switch));
  if (!VAR_50)
   break;
  VAR_50->gm_so = VAR_52;
  if (FUNC_4(VAR_47, &VAR_50->gm_mech_oid)) {
   FUNC_13(VAR_50);
   continue;
  }

  VAR_53 = (const char *(*)(void))
   FUNC_8(VAR_52, "_gss_name_prefix");
  if (VAR_53)
   VAR_50->gm_name_prefix = VAR_53();
  else
   VAR_50->gm_name_prefix = "gss";

  VAR_41 = FUNC_14(&VAR_42,
      &VAR_50->gm_mech_oid, &VAR_2);
  if (VAR_41) {
   FUNC_13(VAR_50->gm_mech_oid.elements);
   FUNC_13(VAR_50);
   continue;
  }

  FUNC_3(VAR_5);
  FUNC_3(VAR_32);
  FUNC_3(VAR_21);
  FUNC_3(VAR_4);
  FUNC_3(VAR_30);
  FUNC_3(VAR_10);
  FUNC_3(VAR_9);
  FUNC_3(VAR_16);
  FUNC_3(VAR_38);
  FUNC_3(VAR_39);
  FUNC_3(VAR_37);
  FUNC_3(VAR_12);
  FUNC_0(VAR_20);
  FUNC_3(VAR_8);
  FUNC_3(VAR_11);
  FUNC_3(VAR_18);
  FUNC_3(VAR_14);
  FUNC_3(VAR_33);
  FUNC_3(VAR_23);
  FUNC_3(VAR_22);
  FUNC_3(VAR_40);
  FUNC_3(VAR_6);
  FUNC_3(VAR_24);
  FUNC_3(VAR_15);
  FUNC_3(VAR_19);
  FUNC_3(VAR_27);
  FUNC_3(VAR_26);
  FUNC_3(VAR_7);
  FUNC_3(VAR_13);
  FUNC_0(VAR_28);
  FUNC_0(VAR_25);
  FUNC_0(VAR_35);
  FUNC_0(VAR_34);
  FUNC_0(VAR_31);
  FUNC_0(VAR_29);

  FUNC_2(&VAR_3, VAR_50, VAR_17);
  VAR_51++;
  continue;

 bad:
  FUNC_13(VAR_50->gm_mech_oid.elements);
  FUNC_13(VAR_50);
  FUNC_5(VAR_52);
  continue;
 }
 FUNC_9(VAR_43);
}
