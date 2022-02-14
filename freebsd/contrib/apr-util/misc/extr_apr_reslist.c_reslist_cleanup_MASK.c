
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
struct TYPE_5__ {scalar_t__ nidle; scalar_t__ ntotal; int avail; int listlock; } ;
typedef TYPE_1__ apr_reslist_t ;
typedef int apr_res_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int * FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static apr_status_t FUNC_8(void *VAR_1)
{
    apr_status_t VAR_2 = VAR_0;
    apr_reslist_t *VAR_3 = VAR_1;
    apr_res_t *VAR_4;





    while (VAR_3->nidle > 0) {
        apr_status_t VAR_5;
        VAR_4 = FUNC_7(VAR_3);
        VAR_3->ntotal--;
        VAR_5 = FUNC_5(VAR_3, VAR_4);
        if (VAR_5 != VAR_0) {
            VAR_2 = VAR_5;

        }
        FUNC_6(VAR_3, VAR_4);
    }

    FUNC_4(VAR_3->nidle == 0);
    FUNC_4(VAR_3->ntotal == 0);







    return VAR_2;
}
