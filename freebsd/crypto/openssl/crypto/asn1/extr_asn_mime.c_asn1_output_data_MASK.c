
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ (* asn1_cb ) (int ,int **,TYPE_2__ const*,TYPE_1__*) ;} ;
struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {int * ndef_bio; int * boundary; int * out; } ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef TYPE_1__ ASN1_STREAM_ARG ;
typedef TYPE_2__ ASN1_ITEM ;
typedef TYPE_3__ ASN1_AUX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int ,int **,TYPE_2__ const*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int **,TYPE_2__ const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_6, BIO *VAR_7, ASN1_VALUE *VAR_8, int VAR_9,
                            const ASN1_ITEM *VAR_10)
{
    BIO *VAR_11;
    const ASN1_AUX *VAR_12 = VAR_10->funcs;
    ASN1_STREAM_ARG VAR_13;
    int VAR_14 = 1;





    if (!(VAR_9 & VAR_5) || (VAR_9 & VAR_4)) {
        FUNC_3(VAR_7, VAR_6, VAR_9);
        return 1;
    }

    if (!VAR_12 || !VAR_12->asn1_cb) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    VAR_13.out = VAR_6;
    VAR_13.ndef_bio = ((void*)0);
    VAR_13.boundary = ((void*)0);



    if (VAR_12->asn1_cb(VAR_2, &VAR_8, VAR_10, &VAR_13) <= 0)
        return 0;


    FUNC_3(VAR_7, VAR_13.ndef_bio, VAR_9);


    if (VAR_12->asn1_cb(VAR_1, &VAR_8, VAR_10, &VAR_13) <= 0)
        VAR_14 = 0;



    while (VAR_13.ndef_bio != VAR_6) {
        VAR_11 = FUNC_2(VAR_13.ndef_bio);
        FUNC_1(VAR_13.ndef_bio);
        VAR_13.ndef_bio = VAR_11;
    }

    return VAR_14;

}
