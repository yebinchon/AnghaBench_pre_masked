
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_4__ {void* ioc_group; void* ioc_owner; void* ioc_rights; void* ioc_mode; void* ioc_opt; } ;
struct TYPE_3__ {int ioc_timeout; int ioc_retrycount; void* ioc_rights; void* ioc_mode; void* ioc_group; void* ioc_owner; void* ioc_opt; } ;
struct smb_ctx {int ct_fd; int ct_minlevel; int ct_maxlevel; char const* ct_uncnext; int ct_nb; TYPE_2__ ct_sh; TYPE_1__ ct_ssn; int ct_smbtcpport; int ct_parsedlevel; } ;
struct passwd {char const* pw_name; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct smb_ctx*,int) ;
 int FUNC_1 (int,char**,char*) ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 struct passwd* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (struct smb_ctx*,char const*,int,char const**) ;
 int FUNC_9 (struct smb_ctx*,char const*) ;
 int FUNC_10 (struct smb_ctx*,char const*) ;
 scalar_t__ FUNC_11 (char const*,char*,int) ;

int
FUNC_12(struct smb_ctx *VAR_10, int VAR_11, char *VAR_12[],
 int VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17 = 0;
 uid_t VAR_18;
 const char *VAR_19, *VAR_20;
 struct passwd *VAR_21;

 FUNC_0(VAR_10,sizeof(*VAR_10));
 VAR_17 = FUNC_5(&VAR_10->ct_nb);
 if (VAR_17)
  return VAR_17;
 VAR_10->ct_fd = -1;
 VAR_10->ct_parsedlevel = VAR_0;
 VAR_10->ct_minlevel = VAR_13;
 VAR_10->ct_maxlevel = VAR_14;
 VAR_10->ct_smbtcpport = VAR_6;

 VAR_10->ct_ssn.ioc_opt = VAR_5;
 VAR_10->ct_ssn.ioc_timeout = 15;
 VAR_10->ct_ssn.ioc_retrycount = 4;
 VAR_10->ct_ssn.ioc_owner = VAR_2;
 VAR_10->ct_ssn.ioc_group = VAR_1;
 VAR_10->ct_ssn.ioc_mode = VAR_4;
 VAR_10->ct_ssn.ioc_rights = VAR_3;

 VAR_10->ct_sh.ioc_opt = VAR_5;
 VAR_10->ct_sh.ioc_owner = VAR_2;
 VAR_10->ct_sh.ioc_group = VAR_1;
 VAR_10->ct_sh.ioc_mode = VAR_4;
 VAR_10->ct_sh.ioc_rights = VAR_3;
 VAR_10->ct_sh.ioc_owner = VAR_2;
 VAR_10->ct_sh.ioc_group = VAR_1;

 FUNC_6(VAR_10->ct_nb, "");
 VAR_18 = FUNC_3();
 if ((VAR_21 = FUNC_4(VAR_18)) != ((void*)0)) {
  FUNC_10(VAR_10, VAR_21->pw_name);
  FUNC_2();
 } else if (VAR_18 == 0)
  FUNC_10(VAR_10, "root");
 else
  return 0;
 if (VAR_12 == ((void*)0))
  return 0;
 for (VAR_16 = 1; VAR_16 < VAR_11; VAR_16++) {
  VAR_20 = VAR_12[VAR_16];
  if (FUNC_11(VAR_20, "//", 2) != 0)
   continue;
  VAR_17 = FUNC_8(VAR_10, VAR_20, VAR_15, (const char**)&VAR_20);
  if (VAR_17)
   return VAR_17;
  VAR_10->ct_uncnext = VAR_20;
  break;
 }
 while (VAR_17 == 0 && (VAR_16 = FUNC_1(VAR_11, VAR_12, ":E:L:U:")) != -1) {
  VAR_19 = VAR_7;
  switch (VAR_16) {
      case 'E':
   VAR_17 = FUNC_9(VAR_10, VAR_19);
   if (VAR_17)
    return VAR_17;
   break;
      case 'L':
   VAR_17 = FUNC_7(VAR_19);
   if (VAR_17)
    break;
   break;
      case 'U':
   VAR_17 = FUNC_10(VAR_10, VAR_19);
   break;
  }
 }
 VAR_8 = VAR_9 = 1;
 return VAR_17;
}
