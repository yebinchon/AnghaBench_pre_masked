
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_context {int kc_lock; } ;
typedef scalar_t__ gss_ctx_id_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int ) ;

__attribute__((used)) static void
FUNC_1(gss_ctx_id_t VAR_1)
{
 struct krb5_context *VAR_2 = (struct krb5_context *)VAR_1;

 FUNC_0(&VAR_2->kc_lock, "krb5 gss lock", ((void*)0), VAR_0);
}
