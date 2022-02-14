
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_principal ;
typedef int krb5_pac ;
typedef int krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry_ex ;
struct TYPE_11__ {unsigned int len; TYPE_2__* val; } ;
struct TYPE_10__ {int authtime; TYPE_4__* authorization_data; } ;
struct TYPE_8__ {int length; int data; } ;
struct TYPE_9__ {scalar_t__ ad_type; TYPE_1__ ad_data; } ;
typedef int EncryptionKey ;
typedef TYPE_3__ EncTicketPart ;
typedef TYPE_4__ AuthorizationData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int const,int const,int *,int *,int *,int *,int*) ;
 int FUNC_1 (int ,int ,int ,int const,int const*,int const*,int *) ;
 int FUNC_2 (int ,int ,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int ,int const,int const*,int const*) ;
 int FUNC_7 (int ,int ,char*,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_8(krb5_context VAR_2,
   krb5_kdc_configuration *VAR_3,
   const krb5_principal VAR_4,
   const krb5_principal VAR_5,
   hdb_entry_ex *VAR_6,
   hdb_entry_ex *VAR_7,
   hdb_entry_ex *VAR_8,
   const EncryptionKey *VAR_9,
   const EncryptionKey *VAR_10,
   const EncryptionKey *VAR_11,
   const EncryptionKey *VAR_12,
   EncTicketPart *VAR_13,
   krb5_data *VAR_14,
   int *VAR_15)
{
    AuthorizationData *VAR_16 = VAR_13->authorization_data;
    unsigned VAR_17, VAR_18;
    krb5_error_code VAR_19;

    if (VAR_16 == ((void*)0) || VAR_16->len == 0)
 return 0;

    for (VAR_17 = 0; VAR_17 < VAR_16->len; VAR_17++) {
 AuthorizationData VAR_20;

 if (VAR_16->val[VAR_17].ad_type != VAR_0)
     continue;

 VAR_19 = FUNC_2(VAR_16->val[VAR_17].ad_data.data,
           VAR_16->val[VAR_17].ad_data.length,
           &VAR_20,
           ((void*)0));
 if (VAR_19) {
     FUNC_7(VAR_2, VAR_19, "Failed to decode "
       "IF_RELEVANT with %d", VAR_19);
     return VAR_19;
 }
 for (VAR_18 = 0; VAR_18 < VAR_20.len; VAR_18++) {

     if (VAR_20.val[VAR_18].ad_type == VAR_1) {
  int VAR_21 = 0;
  krb5_pac VAR_22;


  VAR_19 = FUNC_5(VAR_2,
         VAR_20.val[VAR_18].ad_data.data,
         VAR_20.val[VAR_18].ad_data.length,
         &VAR_22);
  FUNC_3(&VAR_20);
  if (VAR_19)
      return VAR_19;

  VAR_19 = FUNC_6(VAR_2, VAR_22, VAR_13->authtime,
          VAR_4,
          VAR_9, VAR_10);
  if (VAR_19) {
      FUNC_4(VAR_2, VAR_22);
      return VAR_19;
  }

  VAR_19 = FUNC_0(VAR_2, VAR_4,
          VAR_5,
          VAR_6, VAR_7, VAR_8, &VAR_22, &VAR_21);
  if (VAR_19) {
      FUNC_4(VAR_2, VAR_22);
      return VAR_19;
  }







  if (VAR_21) {
      *VAR_15 = 1;
      VAR_19 = FUNC_1(VAR_2, VAR_22, VAR_13->authtime,
      VAR_4,
      VAR_11, VAR_12, VAR_14);
  }
  FUNC_4(VAR_2, VAR_22);

  return VAR_19;
     }
 }
 FUNC_3(&VAR_20);
    }
    return 0;
}
