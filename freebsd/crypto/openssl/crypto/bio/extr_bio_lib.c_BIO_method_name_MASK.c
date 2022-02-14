
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* method; } ;
struct TYPE_4__ {char const* name; } ;
typedef TYPE_2__ BIO ;



const char *FUNC_0(const BIO *VAR_0)
{
    return VAR_0->method->name;
}
