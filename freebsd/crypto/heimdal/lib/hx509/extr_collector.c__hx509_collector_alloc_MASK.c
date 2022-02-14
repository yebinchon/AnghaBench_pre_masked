
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; int * data; } ;
struct hx509_collector {int unenvelop_certs; int certs; TYPE_1__ val; int lock; } ;
typedef int hx509_lock ;
typedef int hx509_context ;


 int VAR_0 ;
 struct hx509_collector* FUNC_0 (int,int) ;
 int FUNC_1 (struct hx509_collector*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int,char*) ;

int
FUNC_5(hx509_context VAR_1, hx509_lock VAR_2, struct hx509_collector **VAR_3)
{
    struct hx509_collector *VAR_4;
    int VAR_5;

    *VAR_3 = ((void*)0);

    VAR_4 = FUNC_0(1, sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
 FUNC_4(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_4->lock = VAR_2;

    VAR_5 = FUNC_3(VAR_1, "MEMORY:collector-unenvelop-cert",
      0,((void*)0), &VAR_4->unenvelop_certs);
    if (VAR_5) {
 FUNC_1(VAR_4);
 return VAR_5;
    }
    VAR_4->val.data = ((void*)0);
    VAR_4->val.len = 0;
    VAR_5 = FUNC_3(VAR_1, "MEMORY:collector-tmp-store",
      0, ((void*)0), &VAR_4->certs);
    if (VAR_5) {
 FUNC_2(&VAR_4->unenvelop_certs);
 FUNC_1(VAR_4);
 return VAR_5;
    }

    *VAR_3 = VAR_4;
    return 0;
}
