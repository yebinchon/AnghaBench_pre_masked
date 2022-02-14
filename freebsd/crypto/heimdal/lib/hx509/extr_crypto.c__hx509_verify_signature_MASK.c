
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct signature_alg {int flags; int (* verify_signature ) (int ,struct signature_alg const*,TYPE_4__ const*,TYPE_5__ const*,int const*,int const*) ;scalar_t__ key_oid; } ;
typedef int hx509_context ;
typedef scalar_t__ hx509_cert ;
typedef int heim_octet_string ;
struct TYPE_14__ {int algorithm; } ;
struct TYPE_11__ {int algorithm; } ;
struct TYPE_12__ {TYPE_2__ algorithm; } ;
struct TYPE_10__ {TYPE_3__ subjectPublicKeyInfo; } ;
struct TYPE_13__ {TYPE_1__ tbsCertificate; } ;
typedef TYPE_3__ SubjectPublicKeyInfo ;
typedef TYPE_4__ Certificate ;
typedef TYPE_5__ AlgorithmIdentifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 struct signature_alg* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct signature_alg const*,TYPE_4__ const*,TYPE_5__ const*,int const*,int const*) ;

int
FUNC_5(hx509_context VAR_6,
   const hx509_cert VAR_7,
   const AlgorithmIdentifier *VAR_8,
   const heim_octet_string *VAR_9,
   const heim_octet_string *VAR_10)
{
    const struct signature_alg *VAR_11;
    const Certificate *VAR_12 = ((void*)0);

    if (VAR_7)
 VAR_12 = FUNC_0(VAR_7);

    VAR_11 = FUNC_2(&VAR_8->algorithm);
    if (VAR_11 == ((void*)0)) {
 FUNC_3(VAR_6);
 return VAR_3;
    }
    if (VAR_12 && (VAR_11->flags & VAR_4) == 0) {
 FUNC_3(VAR_6);
 return VAR_1;
    }
    if (VAR_12 == ((void*)0) && (VAR_11->flags & VAR_5)) {
     FUNC_3(VAR_6);
 return VAR_0;
    }
    if (VAR_11->key_oid && VAR_12) {
 const SubjectPublicKeyInfo *VAR_13;
 VAR_13 = &VAR_12->tbsCertificate.subjectPublicKeyInfo;

 if (FUNC_1(&VAR_13->algorithm.algorithm, VAR_11->key_oid) != 0) {
     FUNC_3(VAR_6);
     return VAR_2;
 }
    }
    return (*VAR_11->verify_signature)(VAR_6, VAR_11, VAR_12, VAR_8, VAR_9, VAR_10);
}
