
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int limited_rights_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int nelts; } ;
typedef TYPE_1__ apr_array_header_t ;
struct TYPE_6__ {int node; } ;


 TYPE_3__ FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(apr_array_header_t *VAR_1,
                       limited_rights_t *VAR_2,
                       apr_pool_t *VAR_3)
{
  if (VAR_1)
    {
      int VAR_4;
      for (VAR_4 = 0; VAR_4 < VAR_1->nelts; ++VAR_4)
        FUNC_1(FUNC_0(VAR_1, VAR_4, VAR_0).node, VAR_2,
                      VAR_3);
    }
}
