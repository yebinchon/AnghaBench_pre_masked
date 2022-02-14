
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_7__ {int pool; int params; int (* constructor ) (int *,int ,int ) ;} ;
typedef TYPE_1__ apr_reslist_t ;
struct TYPE_8__ {int opaque; } ;
typedef TYPE_2__ apr_res_t ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_2(apr_reslist_t *VAR_0, apr_res_t **VAR_1)
{
    apr_status_t VAR_2;
    apr_res_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0);

    VAR_2 = VAR_0->constructor(&VAR_3->opaque, VAR_0->params, VAR_0->pool);

    *VAR_1 = VAR_3;
    return VAR_2;
}
