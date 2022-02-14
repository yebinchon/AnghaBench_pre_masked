
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int serf_bucket_t ;
struct TYPE_5__ {scalar_t__ state; int used; char const* line; } ;
struct TYPE_6__ {TYPE_1__ linebuf; int headers; } ;
typedef TYPE_2__ response_context_t ;
typedef int apr_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 char* FUNC_3 (char const*,char,int) ;
 int FUNC_4 (int ,char const*,int,int,char const*,int,int) ;

__attribute__((used)) static apr_status_t FUNC_5(serf_bucket_t *VAR_3, response_context_t *VAR_4)
{
    apr_status_t VAR_5;




    VAR_5 = FUNC_2(VAR_4, VAR_2);
    if (FUNC_0(VAR_5)) {
        return VAR_5;
    }


    if (VAR_4->linebuf.state == VAR_1 && VAR_4->linebuf.used) {
        const char *VAR_6;
        const char *VAR_7;

        VAR_6 = VAR_7 = FUNC_3(VAR_4->linebuf.line, ':', VAR_4->linebuf.used);
        if (!VAR_7) {

            return VAR_0;
        }


        VAR_7++;


        for(; VAR_7 < VAR_4->linebuf.line + VAR_4->linebuf.used; VAR_7++)
        {
            if (!FUNC_1(*VAR_7))
            {
              break;
            }
        }



        FUNC_4(
            VAR_4->headers,
            VAR_4->linebuf.line, VAR_6 - VAR_4->linebuf.line, 1,
            VAR_7, VAR_4->linebuf.line + VAR_4->linebuf.used - VAR_7, 1);
    }

    return VAR_5;
}
