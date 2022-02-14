
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_certs ;
typedef int hx509_cert ;
struct TYPE_6__ {int ops_data; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* add ) (int ,TYPE_2__*,int ,int ) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,char*,int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ,int ) ;

int
FUNC_2(hx509_context VAR_1, hx509_certs VAR_2, hx509_cert VAR_3)
{
    if (VAR_2->ops->add == ((void*)0)) {
 FUNC_0(VAR_1, 0, VAR_0,
          "Keyset type %s doesn't support add operation",
          VAR_2->ops->name);
 return VAR_0;
    }

    return (*VAR_2->ops->add)(VAR_1, VAR_2, VAR_2->ops_data, VAR_3);
}
