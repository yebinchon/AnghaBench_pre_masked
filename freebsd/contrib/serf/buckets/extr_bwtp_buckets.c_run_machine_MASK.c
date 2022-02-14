
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int allocator; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_9__ {int used; int state; } ;
struct TYPE_11__ {int state; TYPE_1__ linebuf; int body; int type; int length; int stream; } ;
typedef TYPE_3__ incoming_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static apr_status_t FUNC_7(serf_bucket_t *VAR_6, incoming_context_t *VAR_7)
{
    apr_status_t VAR_8 = VAR_2;

    switch (VAR_7->state) {
    case 128:



        VAR_8 = FUNC_3(VAR_7, VAR_5);
        if (FUNC_1(VAR_8))
            return VAR_8;

        if (VAR_7->linebuf.state == VAR_4 && VAR_7->linebuf.used) {

            VAR_8 = FUNC_4(VAR_7, VAR_6->allocator);
            if (VAR_8)
                return VAR_8;

            if (VAR_7->length) {
                VAR_7->body =
                    FUNC_5(VAR_7->stream, VAR_6->allocator);
                VAR_7->body = FUNC_6(VAR_7->body, VAR_7->length,
                                                     VAR_6->allocator);
                if (!VAR_7->type) {
                    VAR_7->state = 129;
                } else {
                    VAR_7->state = 131;
                }
            } else {
                VAR_7->state = 130;
            }
        }
        else {




            if (FUNC_0(VAR_8)) {
                return VAR_3;
            }
        }
        break;
    case 129:
        VAR_8 = FUNC_2(VAR_7->body, VAR_7);
        if (FUNC_1(VAR_8))
            return VAR_8;




        if (VAR_7->linebuf.state == VAR_4 && !VAR_7->linebuf.used) {

            VAR_7->state = 130;
        }
        break;
    case 131:

        break;
    case 130:
        return VAR_1;
    default:

        return VAR_0;
    }

    return VAR_8;
}
