
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; int pw_dir; } ;
typedef int gid_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int,char*) ;
 int VAR_21 ;
 int FUNC_6 (int,char*) ;
 int VAR_22 ;
 scalar_t__ FUNC_7 () ;
 struct passwd* FUNC_8 (char*) ;
 int VAR_23 ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int,int*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int*,int) ;
 int FUNC_13 (int,int*,int) ;
 int FUNC_14 (int ,int,int) ;
 int VAR_24 ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,int *) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ,int ,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_21 (int,int ) ;
 int FUNC_22 (int ,int ,int ,int*) ;
 int FUNC_23 (int) ;

int
FUNC_24(void)
{
 int VAR_27, VAR_28, VAR_29[2], VAR_30;
 int VAR_31, VAR_32, VAR_33;
 struct passwd *VAR_34;




 for (VAR_27 = 1; VAR_27 < VAR_19; VAR_27++)

  FUNC_21(VAR_27, VAR_17);


 if (FUNC_22(VAR_0, VAR_18, VAR_10, VAR_29) == -1)
  FUNC_5(1, "socketpair() failed");

 VAR_34 = FUNC_8("_pflogd");
 if (VAR_34 == ((void*)0))
  FUNC_6(1, "unknown user _pflogd");
 FUNC_4();

 VAR_20 = FUNC_7();
 if (VAR_20 < 0)
  FUNC_5(1, "fork() failed");

 if (!VAR_20) {
  gid_t VAR_35[1];


  if (FUNC_2(VAR_34->pw_dir) != 0)
   FUNC_5(1, "unable to chroot");
  if (FUNC_1("/") != 0)
   FUNC_5(1, "unable to chdir");

  VAR_35[0] = VAR_34->pw_gid;
  if (FUNC_19(VAR_34->pw_gid, VAR_34->pw_gid, VAR_34->pw_gid) == -1)
   FUNC_5(1, "setresgid() failed");
  if (FUNC_17(1, VAR_35) == -1)
   FUNC_5(1, "setgroups() failed");
  if (FUNC_20(VAR_34->pw_uid, VAR_34->pw_uid, VAR_34->pw_uid) == -1)
   FUNC_5(1, "setresuid() failed");
  FUNC_3(VAR_29[0]);
  VAR_24 = VAR_29[1];
  return 0;
 }



 FUNC_21(VAR_11, VAR_26);
 FUNC_21(VAR_16, VAR_26);
 FUNC_21(VAR_13, VAR_26);
 FUNC_21(VAR_14, VAR_26);
 FUNC_21(VAR_15, VAR_26);
 FUNC_21(VAR_12, VAR_25);

 FUNC_18("[priv]");
 FUNC_3(VAR_29[1]);

 while (!VAR_23) {
  if (FUNC_10(VAR_29[0], &VAR_30, sizeof(int)))
   break;
  switch (VAR_30) {
  case 128:
   FUNC_9(VAR_1,
       "[priv]: msg PRIV_SET_SNAPLENGTH received");
   FUNC_12(VAR_29[0], &VAR_31, sizeof(int));

   VAR_32 = FUNC_16(VAR_31);
   if (VAR_32) {
    FUNC_9(VAR_3,
       "[priv]: set_snaplen failed for snaplen %d",
       VAR_31);
   }

   FUNC_13(VAR_29[0], &VAR_32, sizeof(int));
   break;

  case 129:
   FUNC_9(VAR_1,
       "[priv]: msg PRIV_OPEN_LOG received");

   VAR_28 = FUNC_14(VAR_22,
       VAR_9|VAR_6|VAR_5|VAR_8|VAR_7,
       0600);
   VAR_33 = VAR_21;
   FUNC_15(VAR_29[0], VAR_28);
   if (VAR_28 < 0)
    FUNC_9(VAR_3,
        "[priv]: failed to open %s: %s",
        VAR_22, FUNC_23(VAR_33));
   else
    FUNC_3(VAR_28);
   break;

  case 130:
   FUNC_9(VAR_1,
       "[priv]: msg PRIV_MOVE_LOG received");
   VAR_32 = FUNC_11(VAR_22);
   FUNC_13(VAR_29[0], &VAR_32, sizeof(int));
   break;

  default:
   FUNC_9(VAR_2, "[priv]: unknown command %d", VAR_30);
   FUNC_0(1);

  }
 }

 FUNC_0(1);
}
