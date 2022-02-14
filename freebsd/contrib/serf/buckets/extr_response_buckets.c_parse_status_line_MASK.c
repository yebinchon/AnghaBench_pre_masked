
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int serf_bucket_alloc_t ;
struct TYPE_6__ {scalar_t__ used; char* line; } ;
struct TYPE_5__ {int reason; int code; int version; } ;
struct TYPE_7__ {TYPE_2__ linebuf; TYPE_1__ sl; } ;
typedef TYPE_3__ response_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,char) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char**,int) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static apr_status_t FUNC_5(response_context_t *VAR_3,
                                      serf_bucket_alloc_t *VAR_4)
{
    int VAR_5;
    char *VAR_6;


    if (VAR_3->linebuf.used >= VAR_2) {
       return VAR_1;
    }


    VAR_3->linebuf.line[VAR_3->linebuf.used] = '\0';




    VAR_5 = FUNC_1(VAR_3->linebuf.line, "HTTP/#.# ###*");
    if (!VAR_5) {

        return VAR_1;
    }

    VAR_3->sl.version = FUNC_0(VAR_3->linebuf.line[5] - '0',
                                        VAR_3->linebuf.line[7] - '0');
    VAR_3->sl.code = FUNC_3(VAR_3->linebuf.line + 8, &VAR_6, 10);


    if (FUNC_2(*VAR_6)) {
        VAR_6++;
    }


    VAR_3->sl.reason = FUNC_4(VAR_4, VAR_6,
                                     VAR_3->linebuf.used
                                     - (VAR_6 - VAR_3->linebuf.line));

    return VAR_0;
}
