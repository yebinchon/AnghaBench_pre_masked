
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ apr_random_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static apr_status_t FUNC_0(void *VAR_2)
{
    apr_random_t *VAR_3 = VAR_2,
                 *VAR_4 = VAR_1,
                 **VAR_5 = &VAR_1;
    while (VAR_4) {
        if (VAR_4 == VAR_3) {
            *VAR_5 = VAR_4->next;
            break;
        }
        VAR_5 = &VAR_4->next;
        VAR_4 = VAR_4->next;
    }
    return VAR_0;
}
