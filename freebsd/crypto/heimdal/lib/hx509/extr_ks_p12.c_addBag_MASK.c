
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_7__ {size_t length; void* data; } ;
struct TYPE_6__ {TYPE_3__* content; int contentType; } ;
struct TYPE_5__ {int len; TYPE_2__* val; } ;
typedef TYPE_1__ PKCS12_AuthenticatedSafe ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,char*) ;
 void* FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_5(hx509_context VAR_1,
       PKCS12_AuthenticatedSafe *VAR_2,
       const heim_oid *VAR_3,
       void *VAR_4,
       size_t VAR_5)
{
    void *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_4(VAR_2->val, sizeof(VAR_2->val[0]) * (VAR_2->len + 1));
    if (VAR_6 == ((void*)0)) {
 FUNC_3(VAR_1, 0, VAR_0, "out of memory");
 return VAR_0;
    }
    VAR_2->val = VAR_6;

    VAR_7 = FUNC_1(VAR_3, &VAR_2->val[VAR_2->len].contentType);
    if (VAR_7) {
 FUNC_3(VAR_1, 0, VAR_7, "out of memory");
 return VAR_7;
    }

    VAR_2->val[VAR_2->len].content = FUNC_0(1, sizeof(*VAR_2->val[0].content));
    if (VAR_2->val[VAR_2->len].content == ((void*)0)) {
 FUNC_2(&VAR_2->val[VAR_2->len].contentType);
 FUNC_3(VAR_1, 0, VAR_0, "malloc out of memory");
 return VAR_0;
    }

    VAR_2->val[VAR_2->len].content->data = VAR_4;
    VAR_2->val[VAR_2->len].content->length = VAR_5;

    VAR_2->len++;

    return 0;
}
