
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int token_t ;
typedef int pid_t ;
typedef int gid_t ;
typedef int au_tid_t ;
typedef int au_id_t ;
typedef int au_asid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (short,int *,int *,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*) ;

int
FUNC_5(short VAR_3, char *VAR_4, int VAR_5, au_id_t VAR_6,
    uid_t VAR_7, gid_t VAR_8, uid_t VAR_9, gid_t VAR_10, pid_t VAR_11, au_asid_t VAR_12,
    au_tid_t *VAR_13)
{
 char *VAR_14 = "audit_write_failure()";
 token_t *VAR_15, *VAR_16;

 VAR_15 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_0, "%s: au_to_subject32() failed", VAR_14);
  return (VAR_1);
 }


 if ((VAR_16 = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_0(VAR_15);
  FUNC_4(VAR_0, "%s: au_to_text() failed", VAR_14);
  return (VAR_2);
 }

 return (FUNC_3(VAR_3, VAR_15, VAR_16, -1, VAR_5));
}
