
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
 int * FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (short,int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,char*) ;

int
FUNC_3(short VAR_2, token_t *VAR_3, au_id_t VAR_4, uid_t VAR_5,
    gid_t VAR_6, uid_t VAR_7, gid_t VAR_8, pid_t VAR_9, au_asid_t VAR_10,
    au_tid_t *VAR_11)
{
 char *VAR_12 = "audit_write_success()";
 token_t *VAR_13 = ((void*)0);


 VAR_13 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
     VAR_11);
 if (VAR_13 == ((void*)0)) {
  FUNC_2(VAR_0, "%s: au_to_subject32() failed", VAR_12);
  return VAR_1;
 }

 return (FUNC_1(VAR_2, VAR_13, VAR_3, 0, 0));
}
