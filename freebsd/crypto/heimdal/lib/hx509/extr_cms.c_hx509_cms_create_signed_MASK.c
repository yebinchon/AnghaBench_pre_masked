
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_18__ {unsigned int len; int * val; } ;
struct TYPE_15__ {int len; TYPE_3__* val; } ;
struct TYPE_13__ {TYPE_10__* eContent; int eContentType; } ;
struct TYPE_17__ {TYPE_10__* certificates; TYPE_8__ digestAlgorithms; TYPE_4__ signerInfos; TYPE_2__ encapContentInfo; int version; } ;
struct TYPE_12__ {size_t length; int data; } ;
struct sigctx {int leafonly; void* certs; TYPE_7__ sd; void* pool; void* anchors; int cmsidflag; int peer; int const* eContentType; TYPE_1__ content; int const* digest_alg; } ;
typedef int sigctx ;
typedef int name ;
typedef int hx509_peer_info ;
typedef struct sigctx hx509_name ;
typedef int hx509_context ;
typedef void* hx509_certs ;
typedef int heim_oid ;
struct TYPE_16__ {size_t length; int data; } ;
typedef TYPE_5__ heim_octet_string ;
struct TYPE_14__ {int digestAlgorithm; } ;
struct TYPE_11__ {size_t length; int * data; } ;
typedef int AlgorithmIdentifier ;


 int FUNC_0 (TYPE_10__*,int) ;
 int FUNC_1 (int ,int ,size_t,TYPE_7__*,size_t*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_8__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int const*,int *) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (void**) ;
 int FUNC_8 (int ,char*,int ,int *,void**) ;
 int FUNC_9 (int ,void*,int ,struct sigctx*) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (size_t) ;
 int FUNC_12 (int *,void const*,size_t) ;
 int FUNC_13 (struct sigctx*,int ,int) ;
 int FUNC_14 (void const*) ;
 int VAR_12 ;

int
FUNC_15(hx509_context VAR_13,
   int VAR_14,
   const heim_oid *VAR_15,
   const void *VAR_16, size_t VAR_17,
   const AlgorithmIdentifier *VAR_18,
   hx509_certs VAR_19,
   hx509_peer_info VAR_20,
   hx509_certs VAR_21,
   hx509_certs VAR_22,
   heim_octet_string *VAR_23)
{
    unsigned int VAR_24, VAR_25;
    hx509_name VAR_26;
    int VAR_27;
    size_t VAR_28;
    struct sigctx VAR_29;

    FUNC_13(&VAR_29, 0, sizeof(VAR_29));
    FUNC_13(&VAR_26, 0, sizeof(VAR_26));

    if (VAR_15 == ((void*)0))
 VAR_15 = &VAR_10;

    VAR_29.digest_alg = VAR_18;
    VAR_29.content.data = FUNC_14(VAR_16);
    VAR_29.content.length = VAR_17;
    VAR_29.eContentType = VAR_15;
    VAR_29.peer = VAR_20;





    if (VAR_14 & VAR_5)
 VAR_29.cmsidflag = VAR_1;
    else
 VAR_29.cmsidflag = VAR_2;





    VAR_29.leafonly = (VAR_14 & VAR_6) ? 1 : 0;






    if ((VAR_14 & VAR_7) == 0) {
 VAR_27 = FUNC_8(VAR_13, "MEMORY:certs", 0, ((void*)0), &VAR_29.certs);
 if (VAR_27)
     return VAR_27;
    }

    VAR_29.anchors = VAR_21;
    VAR_29.pool = VAR_22;

    VAR_29.sd.version = VAR_0;

    FUNC_5(VAR_15, &VAR_29.sd.encapContentInfo.eContentType);




    if ((VAR_14 & VAR_4) == 0) {
 FUNC_0(VAR_29.sd.encapContentInfo.eContent, 1);
 if (VAR_29.sd.encapContentInfo.eContent == ((void*)0)) {
     FUNC_10(VAR_13);
     VAR_27 = VAR_3;
     goto out;
 }

 VAR_29.sd.encapContentInfo.eContent->data = FUNC_11(VAR_17);
 if (VAR_29.sd.encapContentInfo.eContent->data == ((void*)0)) {
     FUNC_10(VAR_13);
     VAR_27 = VAR_3;
     goto out;
 }
 FUNC_12(VAR_29.sd.encapContentInfo.eContent->data, VAR_16, VAR_17);
 VAR_29.sd.encapContentInfo.eContent->length = VAR_17;
    }





    if ((VAR_14 & VAR_8) == 0) {
 VAR_27 = FUNC_9(VAR_13, VAR_19, VAR_12, &VAR_29);
 if (VAR_27)
     goto out;
    }

    if (VAR_29.sd.signerInfos.len) {




 for (VAR_24 = 0; VAR_24 < VAR_29.sd.signerInfos.len; VAR_24++) {
     AlgorithmIdentifier *VAR_30 =
  &VAR_29.sd.signerInfos.val[VAR_24].digestAlgorithm;

     for (VAR_25 = 0; VAR_25 < VAR_29.sd.digestAlgorithms.len; VAR_25++)
  if (FUNC_4(VAR_30, &VAR_29.sd.digestAlgorithms.val[VAR_25]) == 0)
      break;
     if (VAR_25 == VAR_29.sd.digestAlgorithms.len) {
  VAR_27 = FUNC_3(&VAR_29.sd.digestAlgorithms, VAR_30);
  if (VAR_27) {
      FUNC_10(VAR_13);
      goto out;
  }
     }
 }
    }




    if (VAR_29.certs) {
 FUNC_0(VAR_29.sd.certificates, 1);
 if (VAR_29.sd.certificates == ((void*)0)) {
     FUNC_10(VAR_13);
     VAR_27 = VAR_3;
     goto out;
 }

 VAR_27 = FUNC_9(VAR_13, VAR_29.certs, VAR_11, &VAR_29);
 if (VAR_27)
     goto out;
    }

    FUNC_1(VAR_9,
         VAR_23->data, VAR_23->length,
         &VAR_29.sd, &VAR_28, VAR_27);
    if (VAR_27) {
 FUNC_10(VAR_13);
 goto out;
    }
    if (VAR_23->length != VAR_28)
 FUNC_2("internal ASN.1 encoder error");

out:
    FUNC_7(&VAR_29.certs);
    FUNC_6(&VAR_29.sd);

    return VAR_27;
}
