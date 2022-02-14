
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc_retrycount; int ioc_timeout; } ;
struct smb_ctx {TYPE_1__ ct_ssn; } ;


 int FUNC_0 (int ,char const*,char*,int *) ;
 int FUNC_1 (int ,char const*,char*,char**) ;
 int FUNC_2 (struct smb_ctx*,char*) ;
 int FUNC_3 (struct smb_ctx*,char*) ;
 int FUNC_4 (struct smb_ctx*,char*) ;
 int FUNC_5 (struct smb_ctx*,char*) ;
 int FUNC_6 (char*,int,char const*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(struct smb_ctx *VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4;
 int VAR_5;

 if (VAR_3 >= 0) {
  FUNC_1(VAR_0, VAR_2, "charsets", &VAR_4);
  if (VAR_4) {
   VAR_5 = FUNC_2(VAR_1, VAR_4);
   if (VAR_5)
    FUNC_6("charset specification in the section '%s' ignored", VAR_5, VAR_2);
  }
 }
 if (VAR_3 <= 1) {
  FUNC_0(VAR_0, VAR_2, "timeout", &VAR_1->ct_ssn.ioc_timeout);
  FUNC_0(VAR_0, VAR_2, "retry_count", &VAR_1->ct_ssn.ioc_retrycount);
 }
 if (VAR_3 == 1) {
  FUNC_1(VAR_0, VAR_2, "addr", &VAR_4);
  if (VAR_4) {
   VAR_5 = FUNC_4(VAR_1, VAR_4);
   if (VAR_5) {
    FUNC_6("invalid address specified in the section %s", 0, VAR_2);
    return VAR_5;
   }
  }
 }
 if (VAR_3 >= 2) {
  FUNC_1(VAR_0, VAR_2, "password", &VAR_4);
  if (VAR_4)
   FUNC_3(VAR_1, VAR_4);
 }
 FUNC_1(VAR_0, VAR_2, "workgroup", &VAR_4);
 if (VAR_4)
  FUNC_5(VAR_1, VAR_4);
 return 0;
}
