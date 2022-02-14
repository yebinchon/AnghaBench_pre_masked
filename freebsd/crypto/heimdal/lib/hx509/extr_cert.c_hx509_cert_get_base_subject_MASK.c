
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_name ;
typedef int hx509_context ;
typedef TYPE_2__* hx509_cert ;
struct TYPE_5__ {int subject; } ;
struct TYPE_7__ {TYPE_1__ tbsCertificate; } ;
struct TYPE_6__ {TYPE_3__* data; scalar_t__ basename; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int,char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*,int *) ;

int
FUNC_4(hx509_context VAR_1, hx509_cert VAR_2,
       hx509_name *VAR_3)
{
    if (VAR_2->basename)
 return FUNC_1(VAR_1, VAR_2->basename, VAR_3);
    if (FUNC_3(VAR_1, VAR_2->data, ((void*)0)) == 0) {
 int VAR_4 = VAR_0;
 FUNC_2(VAR_1, 0, VAR_4,
          "Proxy certificate have not been "
          "canonicalize yet, no base name");
 return VAR_4;
    }
    return FUNC_0(&VAR_2->data->tbsCertificate.subject, VAR_3);
}
