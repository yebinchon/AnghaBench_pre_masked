
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ ap_req_nofail; } ;
typedef TYPE_1__ krb5_verify_init_creds_opt ;
typedef int krb5_context ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,char*,char*,int *) ;

__attribute__((used)) static krb5_boolean
FUNC_1 (krb5_context VAR_3,
     krb5_verify_init_creds_opt *VAR_4)
{
    if ((VAR_4->flags & VAR_1
  && VAR_4->ap_req_nofail != 0)
 || FUNC_0 (VAR_3,
     ((void*)0),
     "libdefaults",
     "verify_ap_req_nofail",
     ((void*)0)))
 return VAR_0;
    else
 return VAR_2;
}
