
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_cursor ;
typedef int hx509_context ;
typedef TYPE_2__* hx509_certs ;
struct TYPE_6__ {int ops_data; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* iter_end ) (int ,TYPE_2__*,int ,int ) ;} ;


 int FUNC_0 (int ,TYPE_2__*,int ,int ) ;

int
FUNC_1(hx509_context VAR_0,
      hx509_certs VAR_1,
      hx509_cursor VAR_2)
{
    (*VAR_1->ops->iter_end)(VAR_0, VAR_1, VAR_1->ops_data, VAR_2);
    return 0;
}
