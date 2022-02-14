
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t max_cert_list; } ;
typedef TYPE_1__ SSL ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static size_t FUNC_0(const SSL *VAR_2)
{
    size_t VAR_3 = VAR_0 + VAR_1;
    if (VAR_3 < VAR_2->max_cert_list)
        return VAR_2->max_cert_list;
    return VAR_3;
}
