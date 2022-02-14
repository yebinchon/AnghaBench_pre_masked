
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ pool; } ;
typedef TYPE_1__ apr_bucket_pool ;
struct TYPE_8__ {int (* destroy ) (TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_4__ VAR_0 ;
 int FUNC_2 (scalar_t__,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_2)
{
    apr_bucket_pool *VAR_3 = VAR_2;







    if (VAR_3->pool) {



        if (FUNC_1(VAR_3)) {
            FUNC_2(VAR_3->pool, VAR_3, VAR_1);
            FUNC_0(VAR_3);
        }
    }
    else {





        VAR_0.destroy(VAR_3);
    }
}
