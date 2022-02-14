
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int state; int amt_read; TYPE_1__* cur_read; TYPE_1__* list; } ;
typedef TYPE_2__ headers_context_t ;
typedef int apr_size_t ;
struct TYPE_4__ {char* header; int header_size; char* value; int value_size; } ;






 int VAR_0 ;



__attribute__((used)) static void FUNC_0(
    headers_context_t *VAR_1,
    const char **VAR_2,
    apr_size_t *VAR_3)
{
    const char *VAR_4;
    apr_size_t VAR_5;

    if (VAR_1->state == VAR_0) {
        if (VAR_1->list == ((void*)0)) {

            VAR_1->state = 129;
        }
        else {
            VAR_1->state = 131;
            VAR_1->cur_read = VAR_1->list;
        }
        VAR_1->amt_read = 0;
    }

    switch (VAR_1->state) {
    case 131:
        VAR_4 = VAR_1->cur_read->header;
        VAR_5 = VAR_1->cur_read->header_size;
        break;
    case 130:
        VAR_4 = ": ";
        VAR_5 = 2;
        break;
    case 128:
        VAR_4 = VAR_1->cur_read->value;
        VAR_5 = VAR_1->cur_read->value_size;
        break;
    case 133:
    case 129:
        VAR_4 = "\r\n";
        VAR_5 = 2;
        break;
    case 132:
        *VAR_3 = 0;
        return;
    default:

        return;
    }

    *VAR_2 = VAR_4 + VAR_1->amt_read;
    *VAR_3 = VAR_5 - VAR_1->amt_read;
}
