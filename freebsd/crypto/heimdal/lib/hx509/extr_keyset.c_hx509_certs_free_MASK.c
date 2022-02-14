
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* hx509_certs ;
struct TYPE_7__ {scalar_t__ ref; int ops_data; TYPE_1__* ops; } ;
struct TYPE_6__ {int (* free ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(hx509_certs *VAR_0)
{
    if (*VAR_0) {
 if ((*VAR_0)->ref == 0)
     FUNC_0("cert refcount == 0 on free");
 if (--(*VAR_0)->ref > 0)
     return;

 (*(*VAR_0)->ops->free)(*VAR_0, (*VAR_0)->ops_data);
 FUNC_1(*VAR_0);
 *VAR_0 = ((void*)0);
    }
}
