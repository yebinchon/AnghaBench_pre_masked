
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
typedef TYPE_4__* hx509_cert ;
struct TYPE_9__ {TYPE_3__* data; } ;
struct TYPE_6__ {int notAfter; } ;
struct TYPE_7__ {TYPE_1__ validity; } ;
struct TYPE_8__ {TYPE_2__ tbsCertificate; } ;


 int FUNC_0 (int *) ;

time_t
FUNC_1(hx509_cert VAR_0)
{
    return FUNC_0(&VAR_0->data->tbsCertificate.validity.notAfter);
}
