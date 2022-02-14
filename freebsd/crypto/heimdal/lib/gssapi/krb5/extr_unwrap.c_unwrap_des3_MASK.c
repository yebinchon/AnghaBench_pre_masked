
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int krb5_keyblock ;
struct TYPE_16__ {size_t length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_15__ {int length; int * data; } ;
struct TYPE_19__ {TYPE_1__ checksum; int cksumtype; } ;
struct TYPE_18__ {int length; int * value; } ;
struct TYPE_17__ {int more_flags; int ctx_id_mutex; int order; } ;
typedef scalar_t__ OM_uint32 ;
typedef int DES_cblock ;
typedef TYPE_5__ Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__* const) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__* const,size_t,size_t*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int **,int,char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int *,int ,int *) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int *,size_t,TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,int *,int,TYPE_2__*,int *) ;
 scalar_t__ FUNC_14 (int ,int ,int ,int *,size_t,TYPE_5__*) ;
 int * FUNC_15 (size_t) ;
 scalar_t__ FUNC_16 (int *,char*,int) ;
 int FUNC_17 (int *,int *,int) ;

__attribute__((used)) static OM_uint32
FUNC_18
           (OM_uint32 * VAR_12,
            const gsskrb5_ctx VAR_13,
     krb5_context VAR_14,
            const gss_buffer_t VAR_15,
            gss_buffer_t VAR_16,
            int * VAR_17,
            gss_qop_t * VAR_18,
     krb5_keyblock *VAR_19
           )
{
  u_char *VAR_20;
  size_t VAR_21;
  u_char *VAR_22;
  krb5_data VAR_23;
  u_char VAR_24[20];
  uint32_t VAR_25;
  size_t VAR_26;
  OM_uint32 VAR_27;
  int VAR_28;
  krb5_crypto VAR_29;
  Checksum VAR_30;
  int VAR_31;
  int VAR_32;

  if (FUNC_2(VAR_13)) {
     VAR_32 = 34 + 8 + 15;
  } else {
     VAR_32 = VAR_15->length;
  }

  VAR_20 = VAR_15->value;
  VAR_27 = FUNC_6 (&VAR_20,
       VAR_32,
       "\x02\x01",
       VAR_2);
  if (VAR_27)
      return VAR_27;

  if (FUNC_16 (VAR_20, "\x04\x00", 2) != 0)
    return VAR_4;
  VAR_20 += 2;
  if (FUNC_8 (VAR_20, "\x02\x00", 2) == 0) {
    VAR_28 = 1;
  } else if (FUNC_8 (VAR_20, "\xff\xff", 2) == 0) {
    VAR_28 = 0;
  } else
    return VAR_3;
  VAR_20 += 2;
  if(VAR_17 != ((void*)0))
    *VAR_17 = VAR_28;
  if (FUNC_8 (VAR_20, "\xff\xff", 2) != 0)
    return VAR_6;
  VAR_20 += 2;
  VAR_20 += 28;

  VAR_21 = VAR_20 - (u_char *)VAR_15->value;

  if(VAR_28) {

      krb5_data VAR_33;

      VAR_27 = FUNC_10(VAR_14, VAR_19,
        VAR_1, &VAR_29);
      if (VAR_27) {
   *VAR_12 = VAR_27;
   return VAR_7;
      }
      VAR_27 = FUNC_12(VAR_14, VAR_29, VAR_8,
    VAR_20, VAR_15->length - VAR_21, &VAR_33);
      FUNC_9(VAR_14, VAR_29);
      if (VAR_27) {
   *VAR_12 = VAR_27;
   return VAR_7;
      }
      FUNC_7 (VAR_33.length == VAR_15->length - VAR_21);

      FUNC_17 (VAR_20, VAR_33.data, VAR_33.length);
      FUNC_11(&VAR_33);
  }

  if (FUNC_2(VAR_13)) {
    VAR_26 = 0;
  } else {

    VAR_27 = FUNC_4(VAR_15,
        VAR_15->length - VAR_21,
        &VAR_26);
    if (VAR_27)
        return VAR_27;
  }



  FUNC_0(&VAR_13->ctx_id_mutex);

  VAR_20 -= 28;

  VAR_27 = FUNC_10(VAR_14, VAR_19,
    VAR_1, &VAR_29);
  if (VAR_27) {
      *VAR_12 = VAR_27;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_7;
  }
  {
      DES_cblock VAR_34;

      FUNC_17(&VAR_34, VAR_20 + 8, 8);
      VAR_27 = FUNC_13 (VAR_14,
          VAR_29,
          VAR_9,
          VAR_20, 8, &VAR_23,
          &VAR_34);
  }
  FUNC_9 (VAR_14, VAR_29);
  if (VAR_27) {
      *VAR_12 = VAR_27;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_7;
  }
  if (VAR_23.length != 8) {
      FUNC_11 (&VAR_23);
      *VAR_12 = 0;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_3;
  }

  VAR_22 = VAR_23.data;
  FUNC_5(VAR_22, &VAR_25);

  if (VAR_13->more_flags & VAR_11)
      VAR_31 = FUNC_8(&VAR_22[4], "\xff\xff\xff\xff", 4);
  else
      VAR_31 = FUNC_8(&VAR_22[4], "\x00\x00\x00\x00", 4);

  FUNC_11 (&VAR_23);
  if (VAR_31 != 0) {
      *VAR_12 = 0;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_3;
  }

  VAR_27 = FUNC_3(VAR_13->order, VAR_25);
  if (VAR_27) {
      *VAR_12 = 0;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_27;
  }

  FUNC_1(&VAR_13->ctx_id_mutex);



  FUNC_17 (VAR_24, VAR_20 + 8, 20);

  FUNC_17 (VAR_20 + 20, VAR_20 - 8, 8);

  VAR_30.cksumtype = VAR_0;
  VAR_30.checksum.length = 20;
  VAR_30.checksum.data = VAR_24;

  VAR_27 = FUNC_10(VAR_14, VAR_19, 0, &VAR_29);
  if (VAR_27) {
      *VAR_12 = VAR_27;
      return VAR_7;
  }

  VAR_27 = FUNC_14 (VAR_14, VAR_29,
         VAR_10,
         VAR_20 + 20,
         VAR_15->length - VAR_21 + 8,
         &VAR_30);
  FUNC_9 (VAR_14, VAR_29);
  if (VAR_27) {
      *VAR_12 = VAR_27;
      return VAR_7;
  }



  VAR_16->length = VAR_15->length
    - VAR_21 - VAR_26 - 8;
  VAR_16->value = FUNC_15(VAR_16->length);
  if(VAR_16->length != 0 && VAR_16->value == ((void*)0))
      return VAR_7;
  FUNC_17 (VAR_16->value,
   VAR_20 + 36,
   VAR_16->length);
  return VAR_5;
}
