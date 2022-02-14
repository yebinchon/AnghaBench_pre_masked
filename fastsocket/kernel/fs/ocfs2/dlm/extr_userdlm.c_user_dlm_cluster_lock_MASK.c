
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_level; int l_requested; int l_lock; int l_namelen; int l_name; int l_lksb; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (int) ;
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
 struct dlm_ctxt* FUNC_1 (struct user_lock_res*) ;
 int FUNC_2 (struct dlm_ctxt*,int,int *,int,int ,int ,int ,struct user_lock_res*,int ) ;
 int FUNC_3 (int ,char*,int ,int ,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (struct user_lock_res*,int) ;
 int FUNC_8 (char*,int,struct user_lock_res*) ;
 int FUNC_9 (struct user_lock_res*,int) ;
 int FUNC_10 (struct user_lock_res*) ;
 int FUNC_11 (struct user_lock_res*) ;
 int FUNC_12 (struct user_lock_res*) ;

int FUNC_13(struct user_lock_res *VAR_18,
     int VAR_19,
     int VAR_20)
{
 int VAR_21, VAR_22;
 struct dlm_ctxt *VAR_23 = FUNC_1(VAR_18);

 if (VAR_19 != VAR_6 &&
     VAR_19 != VAR_10) {
  FUNC_3(VAR_12, "lockres %.*s: invalid request!\n",
       VAR_18->l_namelen, VAR_18->l_name);
  VAR_21 = -VAR_3;
  goto bail;
 }

 FUNC_3(0, "lockres %.*s: asking for %s lock, passed flags = 0x%x\n",
      VAR_18->l_namelen, VAR_18->l_name,
      (VAR_19 == VAR_6) ? "LKM_EXMODE" : "LKM_PRMODE",
      VAR_20);

again:
 if (FUNC_4(VAR_15)) {
  VAR_21 = -VAR_4;
  goto bail;
 }

 FUNC_5(&VAR_18->l_lock);




 if ((VAR_18->l_flags & VAR_14) &&
     (VAR_19 > VAR_18->l_level)) {


  FUNC_6(&VAR_18->l_lock);

  FUNC_12(VAR_18);
  goto again;
 }

 if ((VAR_18->l_flags & VAR_13) &&
     (!FUNC_9(VAR_18, VAR_19))) {


  FUNC_6(&VAR_18->l_lock);

  FUNC_11(VAR_18);
  goto again;
 }

 if (VAR_19 > VAR_18->l_level) {
  VAR_22 = VAR_20 | VAR_11;
  if (VAR_18->l_level != VAR_7)
   VAR_22 |= VAR_5;

  VAR_18->l_requested = VAR_19;
  VAR_18->l_flags |= VAR_14;
  FUNC_6(&VAR_18->l_lock);

  FUNC_0(VAR_19 == VAR_7);
  FUNC_0(VAR_19 == VAR_8);


  VAR_21 = FUNC_2(VAR_23,
     VAR_19,
     &VAR_18->l_lksb,
     VAR_22,
     VAR_18->l_name,
     VAR_18->l_namelen,
     VAR_16,
     VAR_18,
     VAR_17);
  if (VAR_21 != VAR_0) {
   if ((VAR_20 & VAR_9) &&
       (VAR_21 == VAR_1))
    VAR_21 = -VAR_2;
   else {
    FUNC_8("dlmlock", VAR_21, VAR_18);
    VAR_21 = -VAR_3;
   }
   FUNC_10(VAR_18);
   goto bail;
  }

  FUNC_12(VAR_18);
  goto again;
 }

 FUNC_7(VAR_18, VAR_19);
 FUNC_6(&VAR_18->l_lock);

 VAR_21 = 0;
bail:
 return VAR_21;
}
