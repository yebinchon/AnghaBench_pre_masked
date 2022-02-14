
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int contentType ;
typedef int PKCS12_Attributes ;


 int FUNC_0 (struct hx509_collector*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,void const*,size_t,int *,TYPE_1__*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,struct hx509_collector*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(hx509_context VAR_1,
       struct hx509_collector *VAR_2,
       const void *VAR_3, size_t VAR_4,
       const PKCS12_Attributes *VAR_5)
{
    heim_octet_string VAR_6;
    heim_oid VAR_7;
    int VAR_8;

    FUNC_5(&VAR_7, 0, sizeof(VAR_7));

    VAR_8 = FUNC_4(VAR_1,
          FUNC_0(VAR_2),
          VAR_3, VAR_4,
          &VAR_7,
          &VAR_6);
    if (VAR_8)
 return VAR_8;

    if (FUNC_3(&VAR_7, &VAR_0) == 0)
 VAR_8 = FUNC_6(VAR_1, VAR_2, VAR_6.data, VAR_6.length);

    FUNC_1(&VAR_6);
    FUNC_2(&VAR_7);
    return VAR_8;
}
