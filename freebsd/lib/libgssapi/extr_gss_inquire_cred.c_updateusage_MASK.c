
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gss_cred_usage_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(gss_cred_usage_t VAR_5, int *VAR_6)
{
    if (VAR_5 == VAR_2)
 *VAR_6 |= VAR_0 | VAR_4;
    else if (VAR_5 == VAR_1)
 *VAR_6 |= VAR_0;
    else if (VAR_5 == VAR_3)
 *VAR_6 |= VAR_4;
}
