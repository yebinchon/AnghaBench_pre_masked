
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int sc ;
typedef int hx509_context ;
struct TYPE_9__ {size_t len; TYPE_2__* val; } ;
struct TYPE_7__ {int length; int data; } ;
struct TYPE_8__ {int bagAttributes; TYPE_1__ bagValue; int bagId; } ;
typedef TYPE_3__ PKCS12_SafeContents ;


 int FUNC_0 (unsigned char const*,size_t,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int ,struct hx509_collector*,int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(hx509_context VAR_0,
     struct hx509_collector *VAR_1,
     const unsigned char *VAR_2, size_t VAR_3)
{
    PKCS12_SafeContents VAR_4;
    int VAR_5;
    size_t VAR_6;

    FUNC_2(&VAR_4, 0, sizeof(VAR_4));

    VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4, ((void*)0));
    if (VAR_5)
 return VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_4.len ; VAR_6++)
 FUNC_3(VAR_0,
     VAR_1,
     &VAR_4.val[VAR_6].bagId,
     VAR_4.val[VAR_6].bagValue.data,
     VAR_4.val[VAR_6].bagValue.length,
     VAR_4.val[VAR_6].bagAttributes);

    FUNC_1(&VAR_4);
    return 0;
}
