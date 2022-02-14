
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hx509_collector {int dummy; } ;
typedef int hx509_lock ;
typedef int hx509_context ;
typedef int heim_oid ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ heim_octet_string ;
typedef int contentType ;
typedef int PKCS12_Attributes ;


 int VAR_0 ;
 int FUNC_0 (struct hx509_collector*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ,int ,void const*,size_t,int *,int ,int *,TYPE_1__*) ;
 int FUNC_6 (int ,int ,int,char*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,struct hx509_collector*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(hx509_context VAR_2,
       struct hx509_collector *VAR_3,
       const void *VAR_4, size_t VAR_5,
       const PKCS12_Attributes *VAR_6)
{
    heim_octet_string VAR_7;
    heim_oid VAR_8;
    hx509_lock VAR_9;
    int VAR_10;

    FUNC_7(&VAR_8, 0, sizeof(VAR_8));

    VAR_9 = FUNC_0(VAR_3);

    VAR_10 = FUNC_5(VAR_2,
          FUNC_1(VAR_9),
          0,
          VAR_4, VAR_5,
          ((void*)0),
          0,
          &VAR_8,
          &VAR_7);
    if (VAR_10) {
 FUNC_6(VAR_2, VAR_0, VAR_10,
          "PKCS12 failed to unenvelope");
 return VAR_10;
    }

    if (FUNC_4(&VAR_8, &VAR_1) == 0)
 VAR_10 = FUNC_8(VAR_2, VAR_3, VAR_7.data, VAR_7.length);

    FUNC_2(&VAR_7);
    FUNC_3(&VAR_8);

    return VAR_10;
}
