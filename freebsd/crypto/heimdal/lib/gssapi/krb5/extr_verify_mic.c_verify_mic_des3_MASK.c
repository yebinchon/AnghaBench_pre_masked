
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int krb5_keyblock ;
struct TYPE_13__ {int length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_12__ {int length; int * data; } ;
struct TYPE_16__ {TYPE_1__ checksum; int cksumtype; } ;
struct TYPE_15__ {int length; int * value; } ;
struct TYPE_14__ {int more_flags; int ctx_id_mutex; int order; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_5__ Checksum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int **,int,char const*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ,int ,int ,int *,int,TYPE_2__*,char*) ;
 scalar_t__ FUNC_11 (int ,int ,int ,char*,int,TYPE_5__*) ;
 char* FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int *,char*,int) ;
 int FUNC_14 (char*,int *,int) ;
 int FUNC_15 (char*,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_16
           (OM_uint32 * VAR_12,
            const gsskrb5_ctx VAR_13,
     krb5_context VAR_14,
            const gss_buffer_t VAR_15,
            const gss_buffer_t VAR_16,
            gss_qop_t * VAR_17,
     krb5_keyblock *VAR_18,
     const char *VAR_19
     )
{
  u_char *VAR_20;
  u_char *VAR_21;
  uint32_t VAR_22;
  OM_uint32 VAR_23;
  krb5_crypto VAR_24;
  krb5_data VAR_25;
  int VAR_26, VAR_27;
  Checksum VAR_28;
  char *VAR_29;
  char VAR_30[8];

  VAR_20 = VAR_16->value;
  VAR_23 = FUNC_4 (&VAR_20,
       VAR_16->length,
       VAR_19,
       VAR_4);
  if (VAR_23)
      return VAR_23;

  if (FUNC_13(VAR_20, "\x04\x00", 2) != 0)
      return VAR_6;
  VAR_20 += 2;
  if (FUNC_13 (VAR_20, "\xff\xff\xff\xff", 4) != 0)
    return VAR_5;
  VAR_20 += 4;

  VAR_23 = FUNC_8(VAR_14, VAR_18,
    VAR_2, &VAR_24);
  if (VAR_23){
      *VAR_12 = VAR_23;
      return VAR_8;
  }


  VAR_27 = 0;
retry:
  if (VAR_27)
      FUNC_15(VAR_30, 0, 8);
  else
      FUNC_14(VAR_30, VAR_20 + 8, 8);

  VAR_23 = FUNC_10 (VAR_14,
      VAR_24,
      VAR_9,
      VAR_20, 8, &VAR_25, VAR_30);
  if (VAR_23) {
      if (VAR_27++) {
   FUNC_7 (VAR_14, VAR_24);
   *VAR_12 = VAR_23;
   return VAR_8;
      } else
   goto retry;
  }

  if (VAR_25.length != 8) {
      FUNC_9 (&VAR_25);
      if (VAR_27++) {
   FUNC_7 (VAR_14, VAR_24);
   return VAR_5;
      } else
   goto retry;
  }

  FUNC_0(&VAR_13->ctx_id_mutex);

  VAR_21 = VAR_25.data;
  FUNC_3(VAR_21, &VAR_22);

  if (VAR_13->more_flags & VAR_11)
      VAR_26 = FUNC_5(&VAR_21[4], "\xff\xff\xff\xff", 4);
  else
      VAR_26 = FUNC_5(&VAR_21[4], "\x00\x00\x00\x00", 4);

  FUNC_9 (&VAR_25);
  if (VAR_26 != 0) {
      FUNC_7 (VAR_14, VAR_24);
      *VAR_12 = 0;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_5;
  }

  VAR_23 = FUNC_2(VAR_13->order, VAR_22);
  if (VAR_23) {
      FUNC_7 (VAR_14, VAR_24);
      *VAR_12 = 0;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_23;
  }



  VAR_29 = FUNC_12 (VAR_15->length + 8);
  if (VAR_29 == ((void*)0)) {
      FUNC_7 (VAR_14, VAR_24);
      FUNC_1(&VAR_13->ctx_id_mutex);
      *VAR_12 = VAR_1;
      return VAR_8;
  }

  FUNC_14 (VAR_29, VAR_20 - 8, 8);
  FUNC_14 (VAR_29 + 8, VAR_15->value, VAR_15->length);

  VAR_28.cksumtype = VAR_0;
  VAR_28.checksum.length = 20;
  VAR_28.checksum.data = VAR_20 + 8;

  FUNC_7 (VAR_14, VAR_24);
  VAR_23 = FUNC_8(VAR_14, VAR_18,
    VAR_3, &VAR_24);
  if (VAR_23){
      *VAR_12 = VAR_23;
      return VAR_8;
  }

  VAR_23 = FUNC_11 (VAR_14, VAR_24,
         VAR_10,
         VAR_29, VAR_15->length + 8,
         &VAR_28);
  FUNC_6 (VAR_29);
  if (VAR_23) {
      FUNC_7 (VAR_14, VAR_24);
      *VAR_12 = VAR_23;
      FUNC_1(&VAR_13->ctx_id_mutex);
      return VAR_5;
  }
  FUNC_1(&VAR_13->ctx_id_mutex);

  FUNC_7 (VAR_14, VAR_24);
  return VAR_7;
}
