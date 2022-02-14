
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_70__ TYPE_9__ ;
typedef struct TYPE_69__ TYPE_8__ ;
typedef struct TYPE_68__ TYPE_7__ ;
typedef struct TYPE_67__ TYPE_6__ ;
typedef struct TYPE_66__ TYPE_5__ ;
typedef struct TYPE_65__ TYPE_4__ ;
typedef struct TYPE_64__ TYPE_3__ ;
typedef struct TYPE_63__ TYPE_2__ ;
typedef struct TYPE_62__ TYPE_29__ ;
typedef struct TYPE_61__ TYPE_1__ ;
typedef struct TYPE_60__ TYPE_12__ ;
typedef struct TYPE_59__ TYPE_11__ ;
typedef struct TYPE_58__ TYPE_10__ ;


typedef scalar_t__ time_t ;
typedef int proxy_issuer ;
typedef TYPE_6__* hx509_verify_ctx ;
struct TYPE_68__ {size_t len; TYPE_9__** val; } ;
typedef TYPE_7__ hx509_path ;
typedef int hx509_name_constraints ;
typedef TYPE_8__* hx509_context ;
typedef int * hx509_certs ;
typedef TYPE_9__* hx509_cert ;
typedef enum certtype { ____Placeholder_certtype } certtype ;
struct TYPE_70__ {TYPE_12__* data; int basename; } ;
struct TYPE_69__ {scalar_t__ default_trust_anchors; } ;
struct TYPE_67__ {int flags; scalar_t__ time_now; scalar_t__ revoke_ctx; int max_depth; scalar_t__ trust_anchors; } ;
struct TYPE_65__ {int notBefore; int notAfter; } ;
struct TYPE_66__ {TYPE_4__ validity; int _save; int subject; int issuer; } ;
struct TYPE_63__ {size_t len; TYPE_29__* val; } ;
struct TYPE_64__ {TYPE_2__ rdnSequence; } ;
struct TYPE_62__ {int len; TYPE_1__* val; } ;
struct TYPE_61__ {int type; } ;
struct TYPE_60__ {int signatureAlgorithm; TYPE_5__ tbsCertificate; int signatureValue; } ;
struct TYPE_59__ {TYPE_3__ u; } ;
struct TYPE_58__ {size_t* pCPathLenConstraint; } ;
typedef TYPE_10__ ProxyCertInfo ;
typedef TYPE_11__ Name ;
typedef TYPE_12__ Certificate ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;

 scalar_t__ FUNC_1 (TYPE_6__*) ;

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

 int FUNC_2 (TYPE_6__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_8__*,int ,scalar_t__,int *,int ,TYPE_9__*,int *,TYPE_7__*) ;
 TYPE_12__* FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_11__*,int *,int*) ;
 int FUNC_7 (TYPE_11__*,int *) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_8__*,int *,scalar_t__) ;
 int FUNC_10 (TYPE_8__*,TYPE_9__*,int *,int *,int *) ;
 int FUNC_11 (TYPE_8__*,TYPE_12__*,int,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (TYPE_8__*,TYPE_12__*,int*) ;
 int FUNC_13 (TYPE_8__*,TYPE_12__*,int,size_t) ;
 int FUNC_14 (TYPE_8__*,TYPE_12__*,int,int ) ;
 int FUNC_15 (TYPE_8__*,int *,TYPE_12__*) ;
 int FUNC_16 (int *,TYPE_11__*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (TYPE_12__*,int *,size_t*) ;
 int FUNC_19 (TYPE_11__*) ;
 int FUNC_20 (TYPE_10__*) ;
 int FUNC_21 (TYPE_29__*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (TYPE_8__*,int *,TYPE_9__*) ;
 int FUNC_24 (int **) ;
 int FUNC_25 (TYPE_8__*,char*,int ,int *,int **) ;
 int FUNC_26 (TYPE_8__*,int *,int *) ;
 int * FUNC_27 (scalar_t__) ;
 int FUNC_28 (TYPE_8__*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (TYPE_8__*,scalar_t__,int *,scalar_t__,TYPE_9__*,TYPE_9__*) ;
 int FUNC_31 (TYPE_8__*,int ,int,char*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (TYPE_8__*,TYPE_12__*,TYPE_10__*) ;
 int FUNC_34 (TYPE_11__*,int ,int) ;
 scalar_t__ FUNC_35 (int *) ;

int
FUNC_36(hx509_context VAR_14,
    hx509_verify_ctx VAR_15,
    hx509_cert VAR_16,
    hx509_certs VAR_17)
{
    hx509_name_constraints VAR_18;
    hx509_path VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    size_t VAR_24, VAR_25;
    enum certtype VAR_26;
    Name VAR_27;
    hx509_certs VAR_28 = ((void*)0);

    FUNC_34(&VAR_27, 0, sizeof(VAR_27));

    VAR_20 = FUNC_32(&VAR_18);
    if (VAR_20)
 return VAR_20;

    VAR_19.val = ((void*)0);
    VAR_19.len = 0;

    if ((VAR_15->flags & VAR_9) == 0)
 VAR_15->time_now = FUNC_35(((void*)0));




    if (VAR_15->trust_anchors)
 VAR_28 = FUNC_27(VAR_15->trust_anchors);
    else if (VAR_14->default_trust_anchors && FUNC_0(VAR_15))
 VAR_28 = FUNC_27(VAR_14->default_trust_anchors);
    else {
 VAR_20 = FUNC_25(VAR_14, "MEMORY:no-TA", 0, ((void*)0), &VAR_28);
 if (VAR_20)
     goto out;
    }





    VAR_20 = FUNC_4(VAR_14, 0, VAR_15->time_now,
    VAR_28, VAR_15->max_depth,
    VAR_16, VAR_17, &VAR_19);
    if (VAR_20)
 goto out;
    VAR_21 = 0;
    VAR_22 = 0;

    if (VAR_15->flags & VAR_7)
 VAR_26 = 128;
    else
 VAR_26 = 129;

    for (VAR_24 = 0; VAR_24 < VAR_19.len; VAR_24++) {
 Certificate *VAR_29;
 time_t VAR_30;

 VAR_29 = FUNC_5(VAR_19.val[VAR_24]);







 switch (VAR_26) {
 case 130:


     VAR_20 = FUNC_14(VAR_14, VAR_29, 1 << 5,
      FUNC_2(VAR_15) ? VAR_10 : VAR_0);
     if (VAR_20) {
  FUNC_31(VAR_14, VAR_3, VAR_20,
           "Key usage missing from CA certificate");
  goto out;
     }


     if (VAR_24 + 1 != VAR_19.len) {
  int VAR_31;

  VAR_20 = FUNC_12(VAR_14, VAR_29, &VAR_31);
  if (VAR_20)
      goto out;
  if (VAR_31)
      VAR_22++;
     }

     break;
 case 128: {
     ProxyCertInfo VAR_32;

     if (FUNC_33(VAR_14, VAR_29, &VAR_32) == 0) {
  size_t VAR_33;

  if (VAR_32.pCPathLenConstraint != ((void*)0) &&
      *VAR_32.pCPathLenConstraint < VAR_24)
  {
      FUNC_20(&VAR_32);
      VAR_20 = VAR_4;
      FUNC_31(VAR_14, 0, VAR_20,
        "Proxy certificate chain "
        "longer then allowed");
      goto out;
  }

  FUNC_20(&VAR_32);

  VAR_33 = 0;
  if (FUNC_18(VAR_29, &VAR_13, &VAR_33)) {
      VAR_20 = VAR_5;
      FUNC_31(VAR_14, 0, VAR_20,
        "Proxy certificate have explicity "
        "forbidden subjectAltName");
      goto out;
  }

  VAR_33 = 0;
  if (FUNC_18(VAR_29, &VAR_12, &VAR_33)) {
      VAR_20 = VAR_5;
      FUNC_31(VAR_14, 0, VAR_20,
        "Proxy certificate have explicity "
        "forbidden issuerAltName");
      goto out;
  }
  if (VAR_21) {
      VAR_20 = FUNC_6(&VAR_27, &VAR_29->tbsCertificate.subject, &VAR_23);
      if (VAR_20) {
   FUNC_31(VAR_14, 0, VAR_20, "Out of memory");
   goto out;
      }
      if (VAR_23) {
   VAR_20 = VAR_6;
   FUNC_31(VAR_14, 0, VAR_20,
            "Base proxy name not right");
   goto out;
      }
  }

  FUNC_19(&VAR_27);

  VAR_20 = FUNC_16(&VAR_29->tbsCertificate.subject, &VAR_27);
  if (VAR_20) {
      FUNC_28(VAR_14);
      goto out;
  }

  VAR_33 = VAR_27.u.rdnSequence.len;
  if (VAR_27.u.rdnSequence.len < 2
      || VAR_27.u.rdnSequence.val[VAR_33 - 1].len > 1
      || FUNC_17(&VAR_27.u.rdnSequence.val[VAR_33 - 1].val[0].type,
     &VAR_11))
  {
      VAR_20 = VAR_6;
      FUNC_31(VAR_14, 0, VAR_20,
        "Proxy name too short or "
        "does not have Common name "
        "at the top");
      goto out;
  }

  FUNC_21(&VAR_27.u.rdnSequence.val[VAR_33 - 1]);
  VAR_27.u.rdnSequence.len -= 1;

  VAR_20 = FUNC_6(&VAR_27, &VAR_29->tbsCertificate.issuer, &VAR_23);
  if (VAR_20) {
      FUNC_31(VAR_14, 0, VAR_20, "Out of memory");
      goto out;
  }
  if (VAR_23 != 0) {
      VAR_20 = VAR_6;
      FUNC_31(VAR_14, 0, VAR_20,
        "Proxy issuer name not as expected");
      goto out;
  }

  break;
     } else {





  VAR_26 = 129;

     }
 }
 case 129:





     if (VAR_21) {

  VAR_20 = FUNC_6(&VAR_27,
          &VAR_29->tbsCertificate.subject, &VAR_23);
  if (VAR_20) {
      FUNC_31(VAR_14, 0, VAR_20, "out of memory");
      goto out;
  }
  if (VAR_23) {
      VAR_20 = VAR_6;
      FUNC_28(VAR_14);
      goto out;
  }
  if (VAR_16->basename)
      FUNC_29(&VAR_16->basename);

  VAR_20 = FUNC_7(&VAR_27, &VAR_16->basename);
  if (VAR_20) {
      FUNC_28(VAR_14);
      goto out;
  }
     }

     break;
 }

 VAR_20 = FUNC_13(VAR_14, VAR_29, VAR_26,
          VAR_24 - VAR_21 - VAR_22);
 if (VAR_20)
     goto out;





 if (VAR_24 + 1 != VAR_19.len || FUNC_1(VAR_15)) {

     VAR_30 = FUNC_3(&VAR_29->tbsCertificate.validity.notBefore);
     if (VAR_30 > VAR_15->time_now) {
  VAR_20 = VAR_2;
  FUNC_28(VAR_14);
  goto out;
     }
     VAR_30 = FUNC_3(&VAR_29->tbsCertificate.validity.notAfter);
     if (VAR_30 < VAR_15->time_now) {
  VAR_20 = VAR_1;
  FUNC_28(VAR_14);
  goto out;
     }
 }

 if (VAR_26 == 129)
     VAR_26 = 130;
 else if (VAR_26 == 128)
     VAR_21++;
    }






    for (VAR_20 = 0, VAR_25 = VAR_19.len; VAR_25 > 0; VAR_25--) {
 Certificate *VAR_34;
 int VAR_35;
 VAR_24 = VAR_25 - 1;

 VAR_34 = FUNC_5(VAR_19.val[VAR_24]);

 VAR_20 = FUNC_12(VAR_14, VAR_34, &VAR_35);
 if (VAR_20)
     goto out;


 if (!VAR_35 || VAR_24 + 1 != VAR_19.len) {
     VAR_20 = FUNC_15(VAR_14, &VAR_18, VAR_34);
     if (VAR_20) {
  goto out;
     }
 }
 VAR_20 = FUNC_11(VAR_14, VAR_34, VAR_24 == 0, &VAR_18);
 if (VAR_20)
     goto out;



    }





    if (VAR_15->revoke_ctx) {
 hx509_certs VAR_36;

 VAR_20 = FUNC_25(VAR_14, "MEMORY:revoke-certs", 0,
          ((void*)0), &VAR_36);
 if (VAR_20)
     goto out;

 for (VAR_24 = 0; VAR_24 < VAR_19.len; VAR_24++) {
     VAR_20 = FUNC_23(VAR_14, VAR_36, VAR_19.val[VAR_24]);
     if (VAR_20) {
  FUNC_24(&VAR_36);
  goto out;
     }
 }
 VAR_20 = FUNC_26(VAR_14, VAR_36, VAR_17);
 if (VAR_20) {
     FUNC_24(&VAR_36);
     goto out;
 }

 for (VAR_24 = 0; VAR_24 < VAR_19.len - 1; VAR_24++) {
     size_t VAR_37 = (VAR_24 < VAR_19.len - 1) ? VAR_24 + 1 : VAR_24;

     VAR_20 = FUNC_30(VAR_14,
          VAR_15->revoke_ctx,
          VAR_36,
          VAR_15->time_now,
          VAR_19.val[VAR_24],
          VAR_19.val[VAR_37]);
     if (VAR_20) {
  FUNC_24(&VAR_36);
  goto out;
     }
 }
 FUNC_24(&VAR_36);
    }






    for (VAR_25 = VAR_19.len; VAR_25 > 0; VAR_25--) {
 hx509_cert VAR_38;
 Certificate *VAR_39;
 VAR_24 = VAR_25 - 1;

 VAR_39 = FUNC_5(VAR_19.val[VAR_24]);


 if (VAR_24 + 1 == VAR_19.len) {
     int VAR_40;

     VAR_38 = VAR_19.val[VAR_24];

     VAR_20 = FUNC_12(VAR_14, VAR_38->data, &VAR_40);
     if (VAR_20)
  goto out;


     if (!VAR_40)
  continue;
 } else {

     VAR_38 = VAR_19.val[VAR_24 + 1];
 }


 VAR_20 = FUNC_10(VAR_14,
      VAR_38,
      &VAR_39->signatureAlgorithm,
      &VAR_39->tbsCertificate._save,
      &VAR_39->signatureValue);
 if (VAR_20) {
     FUNC_31(VAR_14, VAR_3, VAR_20,
       "Failed to verify signature of certificate");
     goto out;
 }
 if (VAR_24 != 0 && (VAR_15->flags & VAR_8) == 0) {
     time_t VAR_41 =
  FUNC_3(&VAR_39->tbsCertificate.validity.notBefore);
     VAR_20 = FUNC_9(VAR_14,
            &VAR_39->signatureAlgorithm,
            VAR_41);
     if (VAR_20)
  goto out;
 }
    }

out:
    FUNC_24(&VAR_28);
    FUNC_19(&VAR_27);
    FUNC_22(&VAR_18);
    FUNC_8(&VAR_19);

    return VAR_20;
}
