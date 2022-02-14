
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {TYPE_1__* issuer_and_serial; } ;
struct TYPE_4__ {int serial; int issuer; } ;
typedef TYPE_2__ PKCS7_RECIP_INFO ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(PKCS7_RECIP_INFO *VAR_0, X509 *VAR_1)
{
    int VAR_2;
    VAR_2 = FUNC_1(VAR_0->issuer_and_serial->issuer,
                        FUNC_2(VAR_1));
    if (VAR_2)
        return VAR_2;
    return FUNC_0(FUNC_3(VAR_1),
                            VAR_0->issuer_and_serial->serial);
}
