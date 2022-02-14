
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_cert; } ;
typedef TYPE_1__ serf_ssl_certificate_t ;
typedef int buf ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;
typedef int BIO ;
typedef int ASN1_TIME ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int ,unsigned char*,unsigned int*) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ,int *) ;
 int * FUNC_11 (int *,char*) ;
 int FUNC_12 (int **,int ,int ,int *) ;
 int FUNC_13 (char*,int ,int) ;

apr_hash_t *FUNC_14(
    const serf_ssl_certificate_t *VAR_3,
    apr_pool_t *VAR_4)
{
    apr_hash_t *VAR_5 = FUNC_9(VAR_4);
    unsigned int VAR_6, VAR_7;
    unsigned char VAR_8[VAR_1];
    BIO *VAR_9;
    apr_array_header_t *VAR_10;


    if (FUNC_6(VAR_3->ssl_cert, FUNC_5(), VAR_8, &VAR_6)) {
        const char VAR_11[] = "0123456789ABCDEF";
        char VAR_12[VAR_1 * 3];

        for (VAR_7=0; VAR_7<VAR_6; VAR_7++) {
            VAR_12[3*VAR_7] = VAR_11[(VAR_8[VAR_7] & 0xf0) >> 4];
            VAR_12[(3*VAR_7)+1] = VAR_11[(VAR_8[VAR_7] & 0x0f)];
            VAR_12[(3*VAR_7)+2] = ':';
        }
        if (VAR_6 > 0)
            VAR_12[(3*(VAR_6-1))+2] = '\0';
        else
            VAR_12[0] = '\0';

        FUNC_10(VAR_5, "sha1", VAR_0,
                     FUNC_11(VAR_4, VAR_12));
    }


    VAR_9 = FUNC_2(FUNC_4());
    if (VAR_9) {
        ASN1_TIME *VAR_13, *VAR_14;
        char VAR_15[256];

        FUNC_13 (VAR_15, 0, sizeof (VAR_15));
        VAR_13 = FUNC_8(VAR_3->ssl_cert);
        if (FUNC_0(VAR_9, VAR_13)) {
            FUNC_3(VAR_9, VAR_15, 255);
            FUNC_10(VAR_5, "notBefore", VAR_0,
                         FUNC_11(VAR_4, VAR_15));
        }
        FUNC_13 (VAR_15, 0, sizeof (VAR_15));
        VAR_14 = FUNC_7(VAR_3->ssl_cert);
        if (FUNC_0(VAR_9, VAR_14)) {
            FUNC_3(VAR_9, VAR_15, 255);
            FUNC_10(VAR_5, "notAfter", VAR_0,
                         FUNC_11(VAR_4, VAR_15));
        }
    }
    FUNC_1(VAR_9);


    if (!FUNC_12(&VAR_10, VAR_3->ssl_cert, VAR_2, VAR_4))
        FUNC_10(VAR_5, "subjectAltName", VAR_0, VAR_10);

    return VAR_5;
}
