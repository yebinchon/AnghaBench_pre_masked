
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* funcs; } ;
struct TYPE_9__ {scalar_t__ (* asn1_cb ) (int ,int *,TYPE_4__*,TYPE_2__*) ;} ;
struct TYPE_8__ {unsigned char** boundary; int out; int ndef_bio; } ;
struct TYPE_7__ {unsigned char** boundary; unsigned char* derbuf; TYPE_4__* it; int val; int out; int ndef_bio; } ;
typedef TYPE_1__ NDEF_SUPPORT ;
typedef int BIO ;
typedef TYPE_2__ ASN1_STREAM_ARG ;
typedef TYPE_3__ ASN1_AUX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char**,TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 unsigned char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,TYPE_4__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_3, unsigned char **VAR_4, int *VAR_5, void *VAR_6)
{
    NDEF_SUPPORT *VAR_7;
    unsigned char *VAR_8;
    int VAR_9;
    const ASN1_AUX *VAR_10;
    ASN1_STREAM_ARG VAR_11;

    if (!VAR_6)
        return 0;

    VAR_7 = *(NDEF_SUPPORT **)VAR_6;

    VAR_10 = VAR_7->it->funcs;


    VAR_11.ndef_bio = VAR_7->ndef_bio;
    VAR_11.out = VAR_7->out;
    VAR_11.boundary = VAR_7->boundary;
    if (VAR_10->asn1_cb(VAR_1,
                     &VAR_7->val, VAR_7->it, &VAR_11) <= 0)
        return 0;

    VAR_9 = FUNC_0(VAR_7->val, ((void*)0), VAR_7->it);
    if ((VAR_8 = FUNC_2(VAR_9)) == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    VAR_7->derbuf = VAR_8;
    *VAR_4 = VAR_8;
    VAR_9 = FUNC_0(VAR_7->val, &VAR_8, VAR_7->it);

    if (!*VAR_7->boundary)
        return 0;
    *VAR_4 = *VAR_7->boundary;
    *VAR_5 = VAR_9 - (*VAR_7->boundary - VAR_7->derbuf);

    return 1;
}
