
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_uid; int cr_ruid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int FUNC_1 (int) ;


 int VAR_4 ;
 int FUNC_2 (int,int ,int ,int ,int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (struct ucred*,int) ;
 scalar_t__ FUNC_5 (struct ucred*,int) ;
 scalar_t__ FUNC_6 (struct ucred*,int ) ;
 int FUNC_7 (struct ucred*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

int
FUNC_8(struct ucred *VAR_12, int VAR_13)
{
 int VAR_14;

 FUNC_0(FUNC_1(VAR_13), ("priv_check_cred: invalid privilege %d",
     VAR_13));
 VAR_14 = FUNC_7(VAR_12, VAR_13);
 if (VAR_14)
  goto out;

 if (VAR_10) {




  switch (VAR_13) {
  case 129:
  case 128:
   VAR_14 = 0;
   goto out;
  }
 }

 if (VAR_11) {




  if (VAR_13 == VAR_3) {
   VAR_14 = 0;
   goto out;
  }
 }
 if (VAR_9) {
  switch (VAR_13) {
  case 132:
  case 131:
  case 130:
   if (VAR_12->cr_ruid == 0) {
    VAR_14 = 0;
    goto out;
   }
   break;
  default:
   if (VAR_12->cr_uid == 0) {
    VAR_14 = 0;
    goto out;
   }
   break;
  }
 }






 if (VAR_13 == VAR_2) {
  VAR_14 = 0;
  goto out;
 }






 if (VAR_13 == VAR_1) {
  if (FUNC_6(VAR_12, VAR_4)) {
   VAR_14 = 0;
   goto out;
  }
 }
 VAR_14 = VAR_0;
out:
 if (FUNC_3()) {
  if (VAR_14)
   FUNC_2(VAR_13, VAR_5, VAR_8, VAR_6, VAR_13);
  else
   FUNC_2(VAR_13, VAR_5, VAR_8, VAR_7, VAR_13);
 }
 return (VAR_14);
}
