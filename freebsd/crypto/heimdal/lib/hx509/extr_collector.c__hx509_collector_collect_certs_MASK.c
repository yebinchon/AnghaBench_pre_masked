
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; int * data; } ;
struct hx509_collector {TYPE_1__ val; int certs; } ;
typedef int hx509_context ;
typedef int * hx509_certs ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int ,char*,int ,int *,int **) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;

int
FUNC_5(hx509_context VAR_0,
          struct hx509_collector *VAR_1,
          hx509_certs *VAR_2)
{
    hx509_certs VAR_3;
    int VAR_4;
    size_t VAR_5;

    *VAR_2 = ((void*)0);

    VAR_4 = FUNC_1(VAR_0, "MEMORY:collector-store", 0, ((void*)0), &VAR_3);
    if (VAR_4)
 return VAR_4;

    VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_1->certs);
    if (VAR_4) {
 FUNC_0(&VAR_3);
 return VAR_4;
    }

    for (VAR_5 = 0; VAR_5 < VAR_1->val.len; VAR_5++) {
 VAR_4 = FUNC_4(VAR_0, VAR_1->val.data[VAR_5], VAR_3);
 if (VAR_4 == 0)
     continue;
 VAR_4 = FUNC_3(VAR_0, VAR_1->val.data[VAR_5], VAR_3);
 if (VAR_4 == 0)
     continue;
    }

    *VAR_2 = VAR_3;

    return 0;
}
