
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int subject; } ;
struct TYPE_5__ {TYPE_1__ cert_info; } ;
typedef TYPE_2__ X509 ;


 unsigned long FUNC_0 (int ) ;

unsigned long FUNC_1(X509 *VAR_0)
{
    return FUNC_0(VAR_0->cert_info.subject);
}
