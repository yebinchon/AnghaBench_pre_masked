
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* ioc_timeout; void* ioc_retrycount; int ioc_group; int ioc_owner; void* ioc_rights; } ;
struct TYPE_3__ {int ioc_group; int ioc_owner; void* ioc_rights; } ;
struct smb_ctx {TYPE_2__ ct_ssn; TYPE_1__ ct_sh; int ct_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smb_ctx*,char const*) ;
 int FUNC_3 (struct smb_ctx*,char const*) ;
 int FUNC_4 (char*,int *,int *) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char const*) ;
 void* FUNC_7 (char const*,char**,int) ;

int
FUNC_8(struct smb_ctx *VAR_2, int VAR_3, const char *VAR_4)
{
 int VAR_5 = 0;
 char *VAR_6, *VAR_7;

 switch(VAR_3) {
     case 'U':
  break;
     case 'I':
  VAR_5 = FUNC_2(VAR_2, VAR_4);
  break;
     case 'M':
  VAR_2->ct_ssn.ioc_rights = FUNC_7(VAR_4, &VAR_7, 8);
  if (*VAR_7 == '/') {
   VAR_2->ct_sh.ioc_rights = FUNC_7(VAR_7 + 1, &VAR_7, 8);
   VAR_2->ct_flags |= VAR_1;
  }
  break;
     case 'N':
  VAR_2->ct_flags |= VAR_0;
  break;
     case 'O':
  VAR_6 = FUNC_6(VAR_4);
  VAR_7 = FUNC_5(VAR_6, '/');
  if (VAR_7) {
   *VAR_7++ = '\0';
   VAR_5 = FUNC_4(VAR_7, &VAR_2->ct_sh.ioc_owner,
       &VAR_2->ct_sh.ioc_group);
  }
  if (*VAR_6 && VAR_5 == 0) {
   VAR_5 = FUNC_4(VAR_6, &VAR_2->ct_ssn.ioc_owner,
       &VAR_2->ct_ssn.ioc_group);
  }
  FUNC_1(VAR_6);
  break;
     case 'P':

  break;
     case 'R':
  VAR_2->ct_ssn.ioc_retrycount = FUNC_0(VAR_4);
  break;
     case 'T':
  VAR_2->ct_ssn.ioc_timeout = FUNC_0(VAR_4);
  break;
     case 'W':
  VAR_5 = FUNC_3(VAR_2, VAR_4);
  break;
 }
 return VAR_5;
}
