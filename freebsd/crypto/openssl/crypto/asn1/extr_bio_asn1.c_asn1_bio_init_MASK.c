
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bufsize; int state; int asn1_tag; int asn1_class; int * buf; } ;
typedef TYPE_1__ BIO_ASN1_BUF_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(BIO_ASN1_BUF_CTX *VAR_5, int VAR_6)
{
    if ((VAR_5->buf = FUNC_1(VAR_6)) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_5->bufsize = VAR_6;
    VAR_5->asn1_class = VAR_4;
    VAR_5->asn1_tag = VAR_3;
    VAR_5->state = VAR_1;
    return 1;
}
