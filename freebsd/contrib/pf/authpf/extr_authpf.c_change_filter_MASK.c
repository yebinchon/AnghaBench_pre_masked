
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
struct stat {int dummy; } ;
typedef int pid_t ;
typedef int gid_t ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (char**,char*,char const*,...) ;
 int VAR_8 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,char**) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 () ;
 char const* VAR_9 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,struct stat*) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_13 (int ,int*,int ) ;
 int FUNC_14 (char*,int ) ;

__attribute__((used)) static int
FUNC_15(int VAR_11, const char *VAR_12, const char *VAR_13)
{
 char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 pid_t VAR_19;
 gid_t VAR_20;
 int VAR_21;

 if (VAR_11) {
  struct stat VAR_22;
  char *VAR_23[13] = {
   "pfctl", "-p", "/dev/pf", "-q", "-a", "anchor/ruleset",
   "-D", "user_id=X", "-D", "user_ip=X", "-f", "file", ((void*)0)
  };

  if (VAR_12 == ((void*)0) || !VAR_12[0] || VAR_13 == ((void*)0) || !VAR_13[0]) {
   FUNC_12(VAR_0, "invalid luser/ipsrc");
   goto error;
  }

  if (FUNC_1(&VAR_17, "%s/%s", VAR_7, VAR_9) == -1)
   goto no_mem;
  if (FUNC_1(&VAR_14, "/dev/fd/%s", VAR_8) == -1)
   goto no_mem;
  if (FUNC_1(&VAR_16, "user_ip=%s", VAR_13) == -1)
   goto no_mem;
  if (FUNC_1(&VAR_15, "user_id=%s", VAR_12) == -1)
   goto no_mem;
  if (FUNC_1(&VAR_18, "%s/%s/authpf.rules",
      VAR_4, VAR_12) == -1)
   goto no_mem;
  if (FUNC_10(VAR_18, &VAR_22) == -1) {
   FUNC_5(VAR_18);
   if ((VAR_18 = FUNC_11(VAR_3)) == ((void*)0))
    goto no_mem;
  }
  VAR_23[2] = VAR_14;
  VAR_23[5] = VAR_17;
  VAR_23[7] = VAR_15;
  if (VAR_10) {
   VAR_23[9] = VAR_16;
   VAR_23[11] = VAR_18;
  } else {
   VAR_23[8] = "-f";
   VAR_23[9] = VAR_18;
   VAR_23[10] = ((void*)0);
  }

  switch (VAR_19 = FUNC_4()) {
  case -1:
   FUNC_12(VAR_0, "fork failed");
   goto error;
  case 0:

   VAR_20 = FUNC_6();
   if (FUNC_9(VAR_20, VAR_20) == -1) {
    FUNC_2(1, "setregid");
   }
   FUNC_3(VAR_2, VAR_23);
   FUNC_14("exec of %s failed", VAR_2);
   FUNC_0(1);
  }


  FUNC_13(VAR_19, &VAR_21, 0);
  if (VAR_21 != 0) {
   FUNC_12(VAR_0, "pfctl exited abnormally");
   goto error;
  }

  FUNC_7(&VAR_6, ((void*)0));
  FUNC_12(VAR_1, "allowing %s, user %s", VAR_13, VAR_12);
 } else {
  FUNC_8();

  FUNC_7(&VAR_5, ((void*)0));
  FUNC_12(VAR_1, "removed %s, user %s - duration %ju seconds",
      VAR_13, VAR_12, (uintmax_t)(VAR_5.tv_sec - VAR_6.tv_sec));
 }
 return (0);
no_mem:
 FUNC_12(VAR_0, "malloc failed");
error:
 FUNC_5(VAR_14);
 FUNC_5(VAR_17);
 FUNC_5(VAR_15);
 FUNC_5(VAR_16);
 FUNC_5(VAR_18);
 return (-1);
}
