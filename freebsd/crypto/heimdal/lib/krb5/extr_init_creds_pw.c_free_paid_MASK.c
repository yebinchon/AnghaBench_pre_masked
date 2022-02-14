
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pa_info_data {scalar_t__ s2kparams; int salt; } ;
typedef int krb5_context ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(krb5_context VAR_0, struct pa_info_data *VAR_1)
{
    FUNC_1(VAR_0, VAR_1->salt);
    if (VAR_1->s2kparams)
 FUNC_0(VAR_0, VAR_1->s2kparams);
}
