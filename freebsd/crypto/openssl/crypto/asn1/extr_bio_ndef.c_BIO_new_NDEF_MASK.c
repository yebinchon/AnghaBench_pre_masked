
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ (* asn1_cb ) (int ,int **,TYPE_3__ const*,TYPE_2__*) ;} ;
struct TYPE_13__ {TYPE_4__* funcs; } ;
struct TYPE_12__ {int * ndef_bio; int * boundary; int * out; } ;
struct TYPE_11__ {int * out; int * boundary; int * ndef_bio; TYPE_3__ const* it; int * val; } ;
typedef TYPE_1__ NDEF_SUPPORT ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_STREAM_ARG ;
typedef TYPE_3__ ASN1_ITEM ;
typedef TYPE_4__ ASN1_AUX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ,int **,TYPE_3__ const*,TYPE_2__*) ;

BIO *FUNC_11(BIO *VAR_8, ASN1_VALUE *VAR_9, const ASN1_ITEM *VAR_10)
{
    NDEF_SUPPORT *VAR_11 = ((void*)0);
    BIO *VAR_12 = ((void*)0);
    const ASN1_AUX *VAR_13 = VAR_10->funcs;
    ASN1_STREAM_ARG VAR_14;

    if (!VAR_13 || !VAR_13->asn1_cb) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }
    VAR_11 = FUNC_9(sizeof(*VAR_11));
    VAR_12 = FUNC_6(FUNC_4());
    if (VAR_11 == ((void*)0) || VAR_12 == ((void*)0))
        goto err;


    VAR_8 = FUNC_7(VAR_12, VAR_8);
    if (VAR_8 == ((void*)0))
        goto err;

    FUNC_1(VAR_12, VAR_4, VAR_5);
    FUNC_2(VAR_12, VAR_6, VAR_7);






    VAR_14.out = VAR_8;
    VAR_14.ndef_bio = ((void*)0);
    VAR_14.boundary = ((void*)0);

    if (VAR_13->asn1_cb(VAR_1, &VAR_9, VAR_10, &VAR_14) <= 0)
        goto err;

    VAR_11->val = VAR_9;
    VAR_11->it = VAR_10;
    VAR_11->ndef_bio = VAR_14.ndef_bio;
    VAR_11->boundary = VAR_14.boundary;
    VAR_11->out = VAR_8;

    FUNC_3(VAR_12, VAR_3, 0, VAR_11);

    return VAR_14.ndef_bio;

 err:
    FUNC_5(VAR_12);
    FUNC_8(VAR_11);
    return ((void*)0);
}
