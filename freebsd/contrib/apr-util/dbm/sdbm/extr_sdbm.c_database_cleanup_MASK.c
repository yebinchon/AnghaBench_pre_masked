
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {int flags; int pagf; int dirf; } ;
typedef TYPE_1__ apr_sdbm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static apr_status_t FUNC_3(void *VAR_3)
{
    apr_sdbm_t *VAR_4 = VAR_3;





    if (VAR_4->flags & (VAR_2 | VAR_1))
        (void) FUNC_1(VAR_4->dirf);
    (void) FUNC_0(VAR_4->dirf);
    (void) FUNC_0(VAR_4->pagf);
    FUNC_2(VAR_4);

    return VAR_0;
}
