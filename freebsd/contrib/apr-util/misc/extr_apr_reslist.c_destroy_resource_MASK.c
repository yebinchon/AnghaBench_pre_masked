
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_5__ {int pool; int params; int (* destructor ) (int ,int ,int ) ;} ;
typedef TYPE_1__ apr_reslist_t ;
struct TYPE_6__ {int opaque; } ;
typedef TYPE_2__ apr_res_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_1(apr_reslist_t *VAR_0, apr_res_t *VAR_1)
{
    return VAR_0->destructor(VAR_1->opaque, VAR_0->params, VAR_0->pool);
}
