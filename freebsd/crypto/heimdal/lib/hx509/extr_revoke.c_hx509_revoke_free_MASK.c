
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_3__* hx509_revoke_ctx ;
struct TYPE_9__ {size_t len; TYPE_3__* val; } ;
struct TYPE_8__ {size_t len; TYPE_3__* val; } ;
struct TYPE_10__ {scalar_t__ ref; TYPE_2__ crls; TYPE_1__ ocsps; int crl; struct TYPE_10__* path; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

void
FUNC_5(hx509_revoke_ctx *VAR_0)
{
    size_t VAR_1 ;

    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
 return;

    if ((*VAR_0)->ref == 0)
 FUNC_0("revoke ctx refcount == 0 on free");
    if (--(*VAR_0)->ref > 0)
 return;

    for (VAR_1 = 0; VAR_1 < (*VAR_0)->crls.len; VAR_1++) {
 FUNC_1((*VAR_0)->crls.val[VAR_1].path);
 FUNC_2(&(*VAR_0)->crls.val[VAR_1].crl);
    }

    for (VAR_1 = 0; VAR_1 < (*VAR_0)->ocsps.len; VAR_1++)
 FUNC_3(&(*VAR_0)->ocsps.val[VAR_1]);
    FUNC_1((*VAR_0)->ocsps.val);

    FUNC_1((*VAR_0)->crls.val);

    FUNC_4(*VAR_0, 0, sizeof(**VAR_0));
    FUNC_1(*VAR_0);
    *VAR_0 = ((void*)0);
}
