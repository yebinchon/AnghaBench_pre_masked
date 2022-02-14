
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; TYPE_1__* cur_read; scalar_t__ amt_read; } ;
typedef TYPE_2__ headers_context_t ;
typedef int apr_status_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static apr_status_t FUNC_0(headers_context_t *VAR_5)
{

    ++VAR_5->state;
    VAR_5->amt_read = 0;


    if (VAR_5->state == VAR_2)
        return VAR_0;


    if (VAR_5->state == VAR_4) {
        VAR_5->cur_read = VAR_5->cur_read->next;
        if (VAR_5->cur_read != ((void*)0)) {

            VAR_5->state = VAR_3;
        }

    }


    return VAR_1;
}
