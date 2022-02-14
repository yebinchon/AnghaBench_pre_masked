
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_cert ;
struct TYPE_8__ {int * val; scalar_t__ len; } ;
struct TYPE_9__ {int ref; struct TYPE_9__* data; int * ctx; int * release; int * basename; int * private_key; TYPE_1__ attrs; int * friendlyname; } ;
typedef int Certificate ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (int const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;

int
FUNC_4(hx509_context VAR_1, const Certificate *VAR_2, hx509_cert *VAR_3)
{
    int VAR_4;

    *VAR_3 = FUNC_3(sizeof(**VAR_3));
    if (*VAR_3 == ((void*)0))
 return VAR_0;
    (*VAR_3)->ref = 1;
    (*VAR_3)->friendlyname = ((void*)0);
    (*VAR_3)->attrs.len = 0;
    (*VAR_3)->attrs.val = ((void*)0);
    (*VAR_3)->private_key = ((void*)0);
    (*VAR_3)->basename = ((void*)0);
    (*VAR_3)->release = ((void*)0);
    (*VAR_3)->ctx = ((void*)0);

    (*VAR_3)->data = FUNC_0(1, sizeof(*(*VAR_3)->data));
    if ((*VAR_3)->data == ((void*)0)) {
 FUNC_2(*VAR_3);
 return VAR_0;
    }
    VAR_4 = FUNC_1(VAR_2, (*VAR_3)->data);
    if (VAR_4) {
 FUNC_2((*VAR_3)->data);
 FUNC_2(*VAR_3);
 *VAR_3 = ((void*)0);
    }
    return VAR_4;
}
