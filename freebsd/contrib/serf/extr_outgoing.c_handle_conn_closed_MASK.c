
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int closed_baton; int (* closed ) (TYPE_1__*,int ,int ,int ) ;} ;
typedef TYPE_1__ serf_connection_t ;
typedef int apr_status_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(serf_connection_t *VAR_0, apr_status_t VAR_1)
{
    (*VAR_0->closed)(VAR_0, VAR_0->closed_baton, VAR_1,
                    VAR_0->pool);
}
