
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; struct hx509_collector* data; } ;
struct hx509_collector {TYPE_1__ val; scalar_t__ certs; scalar_t__ unenvelop_certs; } ;


 int FUNC_0 (struct hx509_collector*) ;
 int FUNC_1 (struct hx509_collector) ;
 int FUNC_2 (scalar_t__*) ;

void
FUNC_3(struct hx509_collector *VAR_0)
{
    size_t VAR_1;

    if (VAR_0->unenvelop_certs)
 FUNC_2(&VAR_0->unenvelop_certs);
    if (VAR_0->certs)
 FUNC_2(&VAR_0->certs);
    for (VAR_1 = 0; VAR_1 < VAR_0->val.len; VAR_1++)
 FUNC_1(VAR_0->val.data[VAR_1]);
    if (VAR_0->val.data)
 FUNC_0(VAR_0->val.data);
    FUNC_0(VAR_0);
}
