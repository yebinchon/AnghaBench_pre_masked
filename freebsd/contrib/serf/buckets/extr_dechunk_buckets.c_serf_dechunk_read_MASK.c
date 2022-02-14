
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_7__ {int used; char* line; int state; } ;
struct TYPE_6__ {int state; int body_left; int stream; TYPE_3__ linebuf; } ;
typedef TYPE_2__ dechunk_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_3 (char*,int *,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int,char const**,int*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_6(serf_bucket_t *VAR_7,
                                      apr_size_t VAR_8,
                                      const char **VAR_9, apr_size_t *VAR_10)
{
    dechunk_context_t *VAR_11 = VAR_7->data;
    apr_status_t VAR_12;

    while (1) {
        switch (VAR_11->state) {
        case 129:


            VAR_12 = FUNC_5(&VAR_11->linebuf, VAR_11->stream,
                                        VAR_5);
            if (FUNC_2(VAR_12))
                return VAR_12;


            if (VAR_11->linebuf.state == VAR_4) {


                if (VAR_11->linebuf.used == sizeof(VAR_11->linebuf.line))
                    return FUNC_0(VAR_2);
                VAR_11->linebuf.line[VAR_11->linebuf.used] = '\0';


                VAR_11->body_left = FUNC_3(VAR_11->linebuf.line, ((void*)0), 16);
                if (VAR_6 == VAR_2) {
                    return FUNC_0(VAR_2);
                }

                if (VAR_11->body_left == 0) {

                    VAR_11->state = 130;
                    VAR_12 = VAR_1;
                }
                else {

                    VAR_11->state = 131;
                }


                if (!VAR_12)
                    continue;
            }





            *VAR_10 = 0;

            return VAR_12;

        case 131:

            if (VAR_8 > VAR_11->body_left) {
                VAR_8 = VAR_11->body_left;
            }


            VAR_12 = FUNC_4(VAR_11->stream, VAR_8, VAR_9, VAR_10);
            if (FUNC_2(VAR_12))
                return VAR_12;




            VAR_11->body_left -= *VAR_10;
            if (!VAR_11->body_left) {
                VAR_11->state = 128;
                VAR_11->body_left = 2;
            }


            if (VAR_11->body_left && FUNC_1(VAR_12)) {
                return VAR_3;
            }


            return VAR_12;

        case 128:

            VAR_12 = FUNC_4(VAR_11->stream, VAR_11->body_left, VAR_9, VAR_10);
            if (FUNC_2(VAR_12))
                return VAR_12;




            VAR_11->body_left -= *VAR_10;


            if (VAR_11->body_left && FUNC_1(VAR_12))
                return VAR_3;

            if (!VAR_11->body_left) {
                VAR_11->state = 129;
            }


            *VAR_10 = 0;

            if (VAR_12)
                return VAR_12;

            break;

        case 130:

            *VAR_10 = 0;
            return VAR_1;

        default:

            return VAR_0;
        }
    }

}
