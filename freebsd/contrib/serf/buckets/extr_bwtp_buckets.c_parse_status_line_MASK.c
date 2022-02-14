
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_alloc_t ;
struct TYPE_4__ {char* line; int used; } ;
struct TYPE_5__ {int type; int * phrase; TYPE_1__ linebuf; void* length; void* channel; } ;
typedef TYPE_2__ incoming_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 void* FUNC_2 (char*,char**,int) ;
 int * FUNC_3 (int *,char*,int) ;

__attribute__((used)) static apr_status_t FUNC_4(incoming_context_t *VAR_2,
                                      serf_bucket_alloc_t *VAR_3)
{
    int VAR_4;
    char *VAR_5;


    VAR_4 = FUNC_0(VAR_2->linebuf.line, "BW*");
    if (!VAR_4) {

        return VAR_0;
    }

    if (VAR_2->linebuf.line[2] == 'H') {
        VAR_2->type = 0;
    }
    else if (VAR_2->linebuf.line[2] == 'M') {
        VAR_2->type = 1;
    }
    else {
        VAR_2->type = -1;
    }

    VAR_2->channel = FUNC_2(VAR_2->linebuf.line + 3, &VAR_5, 16);


    if (FUNC_1(*VAR_5)) {
        VAR_5++;
    }

    VAR_2->length = FUNC_2(VAR_5, &VAR_5, 16);


    if (VAR_5 - VAR_2->linebuf.line < VAR_2->linebuf.used) {
        if (FUNC_1(*VAR_5)) {
            VAR_5++;
        }

        VAR_2->phrase = FUNC_3(VAR_3, VAR_5,
                                      VAR_2->linebuf.used
                                      - (VAR_5 - VAR_2->linebuf.line));
    } else {
        VAR_2->phrase = ((void*)0);
    }

    return VAR_1;
}
