
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_gid; int cr_uid; } ;
struct ksem {unsigned int ks_value; int ks_ref; int ks_birthtime; int ks_ctime; int ks_mtime; int ks_atime; int ks_cv; int ks_mode; int ks_gid; int ks_uid; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct ucred*,struct ksem*) ;
 int FUNC_2 (struct ksem*) ;
 struct ksem* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct ksem *
FUNC_9(struct ucred *VAR_7, mode_t VAR_8, unsigned int VAR_9)
{
 struct ksem *VAR_10;

 FUNC_4(&VAR_4);
 if (VAR_6 == FUNC_6(VAR_0) || VAR_5) {
  FUNC_5(&VAR_4);
  return (((void*)0));
 }
 VAR_6++;
 FUNC_5(&VAR_4);
 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_1, VAR_2 | VAR_3);
 VAR_10->ks_uid = VAR_7->cr_uid;
 VAR_10->ks_gid = VAR_7->cr_gid;
 VAR_10->ks_mode = VAR_8;
 VAR_10->ks_value = VAR_9;
 FUNC_0(&VAR_10->ks_cv, "ksem");
 FUNC_8(&VAR_10->ks_birthtime);
 VAR_10->ks_atime = VAR_10->ks_mtime = VAR_10->ks_ctime = VAR_10->ks_birthtime;
 FUNC_7(&VAR_10->ks_ref, 1);





 return (VAR_10);
}
