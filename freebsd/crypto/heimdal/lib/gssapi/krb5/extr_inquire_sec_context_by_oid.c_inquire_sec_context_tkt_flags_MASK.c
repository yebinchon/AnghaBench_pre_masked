
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_buffer_set_t ;
struct TYPE_10__ {int length; unsigned char* value; } ;
typedef TYPE_4__ gss_buffer_desc ;
typedef int buf ;
struct TYPE_9__ {int ctx_id_mutex; TYPE_2__* ticket; } ;
struct TYPE_7__ {int flags; } ;
struct TYPE_8__ {TYPE_1__ ticket; } ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,TYPE_4__*,int *) ;

__attribute__((used)) static OM_uint32 FUNC_6
           (OM_uint32 *VAR_2,
            const gsskrb5_ctx VAR_3,
            gss_buffer_set_t *VAR_4)
{
    OM_uint32 VAR_5;
    unsigned char VAR_6[4];
    gss_buffer_desc VAR_7;

    FUNC_0(&VAR_3->ctx_id_mutex);

    if (VAR_3->ticket == ((void*)0)) {
 FUNC_1(&VAR_3->ctx_id_mutex);
 FUNC_4(VAR_0, "No ticket from which to obtain flags");
 *VAR_2 = VAR_0;
 return VAR_1;
    }

    VAR_5 = FUNC_2(VAR_3->ticket->ticket.flags);
    FUNC_1(&VAR_3->ctx_id_mutex);

    FUNC_3(VAR_5, VAR_6);
    VAR_7.length = sizeof(VAR_6);
    VAR_7.value = VAR_6;

    return FUNC_5(VAR_2,
         &VAR_7,
         VAR_4);
}
