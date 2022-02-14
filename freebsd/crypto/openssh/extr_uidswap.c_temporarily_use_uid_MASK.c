
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct passwd {scalar_t__ pw_uid; scalar_t__ pw_gid; int pw_name; } ;
typedef int gid_t ;


 int FUNC_0 (char*,int ,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 void* FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int * FUNC_13 (int *,int,int) ;

void
FUNC_14(struct passwd *VAR_10)
{
 if (FUNC_4() != 0) {
  VAR_1 = 0;
  return;
 }


 VAR_1 = 1;
 VAR_6 = 1;

 VAR_4 = FUNC_5(0, ((void*)0));
 if (VAR_4 < 0)
  FUNC_1("getgroups: %.100s", FUNC_12(VAR_0));
 if (VAR_4 > 0) {
  VAR_3 = FUNC_13(VAR_3,
      VAR_4, sizeof(gid_t));
  if (FUNC_5(VAR_4, VAR_3) < 0)
   FUNC_1("getgroups: %.100s", FUNC_12(VAR_0));
 } else {
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
 }


 if (VAR_9 == -1 || VAR_8 != VAR_10->pw_uid) {
  if (FUNC_6(VAR_10->pw_name, VAR_10->pw_gid) < 0)
   FUNC_1("initgroups: %s: %.100s", VAR_10->pw_name,
       FUNC_12(VAR_0));

  VAR_9 = FUNC_5(0, ((void*)0));
  if (VAR_9 < 0)
   FUNC_1("getgroups: %.100s", FUNC_12(VAR_0));
  if (VAR_9 > 0) {
   VAR_7 = FUNC_13(VAR_7,
       VAR_9, sizeof(gid_t));
   if (FUNC_5(VAR_9, VAR_7) < 0)
    FUNC_1("getgroups: %.100s", FUNC_12(VAR_0));
  } else {
   FUNC_2(VAR_7);
   VAR_7 = ((void*)0);
  }
  VAR_8 = VAR_10->pw_uid;
 }

 if (FUNC_10(VAR_9, VAR_7) < 0)
  FUNC_1("setgroups: %.100s", FUNC_12(VAR_0));


 if (FUNC_9(FUNC_3()) < 0)
  FUNC_0("setgid %u: %.100s", (u_int) FUNC_3(), FUNC_12(VAR_0));

 if (FUNC_11(FUNC_4()) < 0)
  FUNC_0("setuid %u: %.100s", (u_int) FUNC_4(), FUNC_12(VAR_0));

 if (FUNC_7(VAR_10->pw_gid) < 0)
  FUNC_1("setegid %u: %.100s", (u_int)VAR_10->pw_gid,
      FUNC_12(VAR_0));
 if (FUNC_8(VAR_10->pw_uid) == -1)
  FUNC_1("seteuid %u: %.100s", (u_int)VAR_10->pw_uid,
      FUNC_12(VAR_0));
}
