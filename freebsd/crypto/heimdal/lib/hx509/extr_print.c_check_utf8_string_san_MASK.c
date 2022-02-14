
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_validate_ctx ;
struct TYPE_3__ {int length; int data; } ;
typedef TYPE_1__ heim_any ;
typedef int PKIXXmppAddr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*,size_t*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(hx509_validate_ctx VAR_2, heim_any *VAR_3)
{
    PKIXXmppAddr VAR_4;
    size_t VAR_5;
    int VAR_6;

    VAR_6 = FUNC_0(VAR_3->data, VAR_3->length, &VAR_4, &VAR_5);
    if (VAR_6) {
 FUNC_2(VAR_2, VAR_0,
         "Decoding JID in SAN failed: %d", VAR_6);
 return 1;
    }

    FUNC_2(VAR_2, VAR_1, "%s", VAR_4);
    FUNC_1(&VAR_4);

    return 0;
}
