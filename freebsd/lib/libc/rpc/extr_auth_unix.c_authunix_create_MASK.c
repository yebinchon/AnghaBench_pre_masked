
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct timeval {int tv_sec; } ;
struct authunix_parms {char* aup_machname; int aup_uid; int aup_gid; int aup_len; int* aup_gids; int aup_time; } ;
struct TYPE_2__ {int oa_length; struct audata* oa_base; int oa_flavor; } ;
struct audata {TYPE_1__ au_origcred; TYPE_1__ ah_cred; scalar_t__ au_shfaults; int au_shcred; int ah_verf; scalar_t__ ah_private; int ah_ops; } ;
typedef scalar_t__ caddr_t ;
typedef int XDR ;
typedef struct audata AUTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (struct audata*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (struct audata*,int) ;
 int FUNC_7 (struct audata*,char*,size_t) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,struct authunix_parms*) ;
 int FUNC_10 (int *,char*,int,int ) ;

AUTH *
FUNC_11(char *VAR_4, u_int VAR_5, u_int VAR_6, int VAR_7, u_int *VAR_8)
{
 struct authunix_parms VAR_9;
 char VAR_10[VAR_1];
 struct timeval VAR_11;
 XDR VAR_12;
 AUTH *VAR_13;
 struct audata *VAR_14;




 VAR_14 = ((void*)0);
 VAR_13 = FUNC_5(sizeof(*VAR_13));

 if (VAR_13 == ((void*)0)) {
  FUNC_8("authunix_create: out of memory");
  goto cleanup_authunix_create;
 }

 VAR_14 = FUNC_5(sizeof(*VAR_14));

 if (VAR_14 == ((void*)0)) {
  FUNC_8("authunix_create: out of memory");
  goto cleanup_authunix_create;
 }

 VAR_13->ah_ops = FUNC_2();
 VAR_13->ah_private = (caddr_t)VAR_14;
 VAR_13->ah_verf = VAR_14->au_shcred = VAR_3;
 VAR_14->au_shfaults = 0;
 VAR_14->au_origcred.oa_base = ((void*)0);




 (void)FUNC_3(&VAR_11, ((void*)0));
 VAR_9.aup_time = VAR_11.tv_sec;
 VAR_9.aup_machname = VAR_4;
 VAR_9.aup_uid = VAR_5;
 VAR_9.aup_gid = VAR_6;
 VAR_9.aup_len = (u_int)VAR_7;
 VAR_9.aup_gids = VAR_8;




 FUNC_10(&VAR_12, VAR_10, VAR_1, VAR_2);
 if (! FUNC_9(&VAR_12, &VAR_9))
  FUNC_1();
 VAR_14->au_origcred.oa_length = VAR_7 = FUNC_0(&VAR_12);
 VAR_14->au_origcred.oa_flavor = VAR_0;



 if ((VAR_14->au_origcred.oa_base = FUNC_5((u_int) VAR_7)) == ((void*)0)) {
  FUNC_8("authunix_create: out of memory");
  goto cleanup_authunix_create;
 }

 FUNC_7(VAR_14->au_origcred.oa_base, VAR_10, (size_t)VAR_7);




 VAR_13->ah_cred = VAR_14->au_origcred;
 FUNC_4(VAR_13);
 return (VAR_13);

 cleanup_authunix_create:
 if (VAR_13)
  FUNC_6(VAR_13, sizeof(*VAR_13));
 if (VAR_14) {
  if (VAR_14->au_origcred.oa_base)
   FUNC_6(VAR_14->au_origcred.oa_base, (u_int)VAR_7);
  FUNC_6(VAR_14, sizeof(*VAR_14));
 }
 return (((void*)0));

}
