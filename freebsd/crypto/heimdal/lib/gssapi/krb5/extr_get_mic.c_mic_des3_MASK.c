
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_14__ {int length; char* data; } ;
typedef TYPE_2__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_3__* gsskrb5_ctx ;
typedef int gss_qop_t ;
typedef TYPE_4__* gss_buffer_t ;
struct TYPE_13__ {char* data; int length; } ;
struct TYPE_17__ {TYPE_1__ checksum; } ;
struct TYPE_16__ {size_t length; char* value; } ;
struct TYPE_15__ {int more_flags; int ctx_id_mutex; int auth_context; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_5__ Checksum ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,size_t*,size_t*,int ) ;
 char* FUNC_3 (char*,size_t,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,char*,int,TYPE_5__*) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (int ,int ,int ,char*,int,TYPE_2__*,char*) ;
 void* FUNC_14 (int) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,int,int) ;

__attribute__((used)) static OM_uint32
FUNC_17
           (OM_uint32 * VAR_9,
            const gsskrb5_ctx VAR_10,
     krb5_context VAR_11,
            gss_qop_t VAR_12,
            const gss_buffer_t VAR_13,
            gss_buffer_t VAR_14,
     krb5_keyblock *VAR_15
           )
{
  u_char *VAR_16;
  Checksum VAR_17;
  u_char VAR_18[8];

  int32_t VAR_19;
  size_t VAR_20, VAR_21;

  krb5_crypto VAR_22;
  krb5_error_code VAR_23;
  krb5_data VAR_24;
  char *VAR_25;
  char VAR_26[8];

  FUNC_2 (36, &VAR_20, &VAR_21, VAR_3);

  VAR_14->length = VAR_21;
  VAR_14->value = FUNC_14 (VAR_21);
  if (VAR_14->value == ((void*)0)) {
      VAR_14->length = 0;
      *VAR_9 = VAR_1;
      return VAR_5;
  }

  VAR_16 = FUNC_3(VAR_14->value,
         VAR_20,
         "\x01\x01",
         VAR_3);

  FUNC_15 (VAR_16, "\x04\x00", 2);
  VAR_16 += 2;

  FUNC_15 (VAR_16, "\xff\xff\xff\xff", 4);
  VAR_16 += 4;



  VAR_25 = FUNC_14 (VAR_13->length + 8);
  if (VAR_25 == ((void*)0)) {
      FUNC_5 (VAR_14->value);
      VAR_14->value = ((void*)0);
      VAR_14->length = 0;
      *VAR_9 = VAR_1;
      return VAR_5;
  }
  FUNC_15 (VAR_25, VAR_16 - 8, 8);
  FUNC_15 (VAR_25 + 8, VAR_13->value, VAR_13->length);

  VAR_23 = FUNC_11(VAR_11, VAR_15, 0, &VAR_22);
  if (VAR_23) {
      FUNC_5 (VAR_14->value);
      VAR_14->value = ((void*)0);
      VAR_14->length = 0;
      FUNC_5 (VAR_25);
      *VAR_9 = VAR_23;
      return VAR_5;
  }

  VAR_23 = FUNC_9 (VAR_11,
          VAR_22,
          VAR_7,
          0,
          VAR_25,
          VAR_13->length + 8,
          &VAR_17);
  FUNC_5 (VAR_25);
  FUNC_10 (VAR_11, VAR_22);
  if (VAR_23) {
      FUNC_5 (VAR_14->value);
      VAR_14->value = ((void*)0);
      VAR_14->length = 0;
      *VAR_9 = VAR_23;
      return VAR_5;
  }

  FUNC_15 (VAR_16 + 8, VAR_17.checksum.data, VAR_17.checksum.length);

  FUNC_0(&VAR_10->ctx_id_mutex);

  FUNC_7 (VAR_11,
          VAR_10->auth_context,
          &VAR_19);

  VAR_18[0] = (VAR_19 >> 0) & 0xFF;
  VAR_18[1] = (VAR_19 >> 8) & 0xFF;
  VAR_18[2] = (VAR_19 >> 16) & 0xFF;
  VAR_18[3] = (VAR_19 >> 24) & 0xFF;
  FUNC_16 (VAR_18 + 4,
   (VAR_10->more_flags & VAR_8) ? 0 : 0xFF,
   4);

  VAR_23 = FUNC_11(VAR_11, VAR_15,
     VAR_2, &VAR_22);
  if (VAR_23) {
      FUNC_5 (VAR_14->value);
      VAR_14->value = ((void*)0);
      VAR_14->length = 0;
      *VAR_9 = VAR_23;
      return VAR_5;
  }

  if (VAR_10->more_flags & VAR_0)
      FUNC_16(VAR_26, 0, 8);
  else
      FUNC_15(VAR_26, VAR_16 + 8, 8);

  VAR_23 = FUNC_13 (VAR_11,
       VAR_22,
       VAR_6,
       VAR_18, 8, &VAR_24, VAR_26);
  FUNC_10 (VAR_11, VAR_22);
  if (VAR_23) {
      FUNC_5 (VAR_14->value);
      VAR_14->value = ((void*)0);
      VAR_14->length = 0;
      *VAR_9 = VAR_23;
      return VAR_5;
  }

  FUNC_4 (VAR_24.length == 8);

  FUNC_15 (VAR_16, VAR_24.data, VAR_24.length);
  FUNC_12 (&VAR_24);

  FUNC_8 (VAR_11,
          VAR_10->auth_context,
          ++VAR_19);
  FUNC_1(&VAR_10->ctx_id_mutex);

  FUNC_6 (&VAR_17);
  *VAR_9 = 0;
  return VAR_4;
}
