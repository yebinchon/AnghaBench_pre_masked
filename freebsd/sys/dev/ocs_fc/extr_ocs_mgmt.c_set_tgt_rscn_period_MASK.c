
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tgt_rscn_period_msec; } ;
typedef TYPE_1__ ocs_t ;


 int FUNC_0 (TYPE_1__*,char*,char*,char*) ;
 int FUNC_1 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(ocs_t *VAR_0, char *VAR_1, char *VAR_2)
{
 VAR_0->tgt_rscn_period_msec = FUNC_1(VAR_2, ((void*)0), 0) * 1000;
 FUNC_0(VAR_0, "mgmt set: %s %s\n", VAR_1, VAR_2);
 return 0;
}
