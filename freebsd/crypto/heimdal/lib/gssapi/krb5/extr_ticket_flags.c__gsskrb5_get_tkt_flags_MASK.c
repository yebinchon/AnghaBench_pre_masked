
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* gsskrb5_ctx ;
struct TYPE_7__ {int ctx_id_mutex; TYPE_1__* ticket; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {TYPE_2__ ticket; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

OM_uint32
FUNC_3(OM_uint32 *VAR_4,
         gsskrb5_ctx VAR_5,
         OM_uint32 *VAR_6)
{
    if (VAR_5 == ((void*)0)) {
 *VAR_4 = VAR_0;
 return VAR_3;
    }
    FUNC_0(&VAR_5->ctx_id_mutex);

    if (VAR_5->ticket == ((void*)0)) {
 FUNC_1(&VAR_5->ctx_id_mutex);
 *VAR_4 = VAR_0;
 return VAR_1;
    }

    *VAR_6 = FUNC_2(VAR_5->ticket->ticket.flags);
    FUNC_1(&VAR_5->ctx_id_mutex);

    *VAR_4 = 0;
    return VAR_2;
}
