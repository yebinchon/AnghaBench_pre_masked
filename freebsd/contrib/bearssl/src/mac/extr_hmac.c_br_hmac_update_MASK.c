
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* vtable; } ;
struct TYPE_6__ {TYPE_1__ dig; } ;
typedef TYPE_2__ br_hmac_context ;
struct TYPE_7__ {int (* update ) (TYPE_3__**,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_3__**,void const*,size_t) ;

void
FUNC_1(br_hmac_context *VAR_0, const void *VAR_1, size_t VAR_2)
{
 VAR_0->dig.vtable->update(&VAR_0->dig.vtable, VAR_1, VAR_2);
}
