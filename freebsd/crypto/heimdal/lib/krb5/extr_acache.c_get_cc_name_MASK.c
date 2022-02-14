
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * cache_name; TYPE_6__* ccache; } ;
typedef TYPE_3__ krb5_acc ;
typedef TYPE_4__* cc_string_t ;
typedef scalar_t__ cc_int32 ;
struct TYPE_13__ {TYPE_1__* func; } ;
struct TYPE_12__ {TYPE_2__* func; int data; } ;
struct TYPE_10__ {int (* release ) (TYPE_4__*) ;} ;
struct TYPE_9__ {scalar_t__ (* get_name ) (TYPE_6__*,TYPE_4__**) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_4__**) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static cc_int32
FUNC_3(krb5_acc *VAR_2)
{
    cc_string_t VAR_3;
    cc_int32 VAR_4;

    VAR_4 = (*VAR_2->ccache->func->get_name)(VAR_2->ccache, &VAR_3);
    if (VAR_4)
 return VAR_4;

    VAR_2->cache_name = FUNC_0(VAR_3->data);
    (*VAR_3->func->release)(VAR_3);
    if (VAR_2->cache_name == ((void*)0))
 return VAR_0;
    return VAR_1;
}
