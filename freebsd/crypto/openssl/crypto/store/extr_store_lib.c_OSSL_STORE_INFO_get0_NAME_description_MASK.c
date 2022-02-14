
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* desc; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_INFO ;


 scalar_t__ VAR_0 ;

const char *FUNC_0(const OSSL_STORE_INFO *VAR_1)
{
    if (VAR_1->type == VAR_0)
        return VAR_1->_.name.desc;
    return ((void*)0);
}
