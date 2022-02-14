
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t len; TYPE_1__** data; } ;
struct hx509_collector {TYPE_2__ val; } ;
typedef int * hx509_private_key ;
typedef int hx509_context ;
struct TYPE_3__ {int * private_key; } ;


 int VAR_0 ;
 int ** FUNC_0 (size_t,int) ;
 int FUNC_1 (int ,int ,int,char*) ;

int
FUNC_2(hx509_context VAR_1,
          struct hx509_collector *VAR_2,
          hx509_private_key **VAR_3)
{
    size_t VAR_4, VAR_5;

    *VAR_3 = ((void*)0);

    for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2->val.len; VAR_4++)
 if (VAR_2->val.data[VAR_4]->private_key)
     VAR_5++;

    *VAR_3 = FUNC_0(VAR_5 + 1, sizeof(**VAR_3));
    if (*VAR_3 == ((void*)0)) {
 FUNC_1(VAR_1, 0, VAR_0, "malloc - out of memory");
 return VAR_0;
    }

    for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_2->val.len; VAR_4++) {
  if (VAR_2->val.data[VAR_4]->private_key) {
     (*VAR_3)[VAR_5++] = VAR_2->val.data[VAR_4]->private_key;
     VAR_2->val.data[VAR_4]->private_key = ((void*)0);
 }
    }
    (*VAR_3)[VAR_5] = ((void*)0);

    return 0;
}
