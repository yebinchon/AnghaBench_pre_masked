
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
typedef void* keyid_t ;
struct TYPE_10__ {int revoke; int trusted_key_list; scalar_t__ request_key; scalar_t__ control_key; scalar_t__ keys; scalar_t__ cryptosw; scalar_t__ ntp_signd_socket; scalar_t__ keysdir; int crypto_cmd_list; } ;
struct TYPE_11__ {TYPE_3__ auth; } ;
typedef TYPE_4__ config_tree ;
struct TYPE_8__ {int first; int last; } ;
struct TYPE_9__ {int i; TYPE_1__ r; int s; } ;
struct TYPE_12__ {int attr; scalar_t__ type; TYPE_2__ value; struct TYPE_12__* link; } ;
typedef TYPE_5__ attr_val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 TYPE_5__* FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;


 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 () ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_11 (int ,char*,int,...) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_12(
 config_tree *VAR_19
 )
{
 attr_val * VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 if (VAR_19->auth.keysdir) {
  if (VAR_16 != VAR_13)
   FUNC_9(VAR_16);
  VAR_16 = FUNC_7(VAR_19->auth.keysdir);
 }



 if (VAR_19->auth.ntp_signd_socket) {
  if (VAR_17 != VAR_14)
   FUNC_9(VAR_17);
  VAR_17 = FUNC_7(VAR_19->auth.ntp_signd_socket);
 }
 VAR_24 = 0;
 VAR_20 = FUNC_1(VAR_19->auth.trusted_key_list);
 for (; VAR_20 != ((void*)0); VAR_20 = VAR_20->link) {
  if (VAR_9 == VAR_20->type) {
   VAR_21 = VAR_20->value.i;
   if (VAR_21 > 1 && VAR_21 <= VAR_7)
    VAR_24++;
  } else {
   FUNC_2(VAR_10 == VAR_20->type);
   VAR_21 = VAR_20->value.r.first;
   VAR_22 = VAR_20->value.r.last;
   if (!(VAR_21 > VAR_22 || VAR_21 < 1 ||
       VAR_22 > VAR_7)) {
    VAR_24 += 1 + VAR_22 - VAR_21;
   }
  }
 }
 FUNC_3(VAR_24);


 if (VAR_19->auth.keys)
  FUNC_10(VAR_19->auth.keys);


 if (VAR_19->auth.control_key)
  VAR_12 = (keyid_t)VAR_19->auth.control_key;


 if (VAR_19->auth.request_key) {
  FUNC_0(4, ("set info_auth_keyid to %08lx\n",
       (u_long) VAR_19->auth.request_key));
  VAR_15 = (keyid_t)VAR_19->auth.request_key;
 }


 VAR_20 = FUNC_1(VAR_19->auth.trusted_key_list);
 for (; VAR_20 != ((void*)0); VAR_20 = VAR_20->link) {
  if (VAR_9 == VAR_20->type) {
   VAR_21 = VAR_20->value.i;
   if (VAR_21 >= 1 && VAR_21 <= VAR_7) {
    FUNC_4(VAR_21, VAR_8);
   } else {
    FUNC_11(VAR_6,
     "Ignoring invalid trustedkey %d, min 1 max %d.",
     VAR_21, VAR_7);
   }
  } else {
   VAR_21 = VAR_20->value.r.first;
   VAR_22 = VAR_20->value.r.last;
   if (VAR_21 > VAR_22 || VAR_21 < 1 ||
       VAR_22 > VAR_7) {
    FUNC_11(VAR_6,
     "Ignoring invalid trustedkey range %d ... %d, min 1 max %d.",
     VAR_21, VAR_22, VAR_7);
   } else {
    for (VAR_23 = VAR_21; VAR_23 <= VAR_22; VAR_23++) {
     FUNC_4(VAR_23, VAR_8);
    }
   }
  }
 }
}
