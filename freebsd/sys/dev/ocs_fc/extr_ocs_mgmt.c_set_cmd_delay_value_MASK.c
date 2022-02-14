
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ delay_value_msec; int err_injection; } ;
typedef TYPE_1__ ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(ocs_t *VAR_2, char *VAR_3, char *VAR_4)
{
 VAR_2->delay_value_msec = FUNC_1(VAR_4, ((void*)0), 0);
 VAR_2->err_injection = (VAR_2->delay_value_msec == 0 ? VAR_1 : VAR_0);
 FUNC_0(VAR_2, "mgmt set: %s %s\n", VAR_3, VAR_4);
 return 0;
}
