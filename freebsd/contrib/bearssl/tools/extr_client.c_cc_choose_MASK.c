
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int const issuer_key_type; scalar_t__ verbose; scalar_t__ chain_len; int * chain; TYPE_3__* sk; } ;
typedef TYPE_4__ ccert_context ;
typedef int br_ssl_client_context ;
typedef int br_ssl_client_certificate_class ;
struct TYPE_11__ {int hash_id; scalar_t__ chain_len; int * chain; int auth_type; } ;
typedef TYPE_5__ br_ssl_client_certificate ;
struct TYPE_7__ {int curve; } ;
struct TYPE_8__ {TYPE_1__ ec; } ;
struct TYPE_9__ {int key_type; TYPE_2__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int const*) ;
 unsigned int FUNC_1 (int const*) ;
 void* FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int,unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(const br_ssl_client_certificate_class **VAR_4,
 const br_ssl_client_context *VAR_5, uint32_t VAR_6,
 br_ssl_client_certificate *VAR_7)
{
 ccert_context *VAR_8;
 int VAR_9;

 VAR_8 = (ccert_context *)VAR_4;
 VAR_9 = FUNC_0(VAR_5);
 if (VAR_8->verbose) {
  unsigned VAR_10;

  VAR_10 = FUNC_1(VAR_5);
  if ((VAR_6 & 0x00FF) != 0) {
   FUNC_4(VAR_3, "supported: RSA signatures:");
   FUNC_6(VAR_6, VAR_10);
   FUNC_4(VAR_3, "\n");
  }
  if ((VAR_6 & 0xFF00) != 0) {
   FUNC_4(VAR_3, "supported: ECDSA signatures:");
   FUNC_6(VAR_6 >> 8, VAR_10 >> 8);
   FUNC_4(VAR_3, "\n");
  }
  if ((VAR_6 & 0x010000) != 0) {
   FUNC_4(VAR_3, "supported:"
    " fixed ECDH (cert signed with RSA)\n");
  }
  if ((VAR_6 & 0x020000) != 0) {
   FUNC_4(VAR_3, "supported:"
    " fixed ECDH (cert signed with ECDSA)\n");
  }
  if (VAR_9) {
   FUNC_4(VAR_3, "server key curve: %s (%d)\n",
    FUNC_3(VAR_9), VAR_9);
  } else {
   FUNC_4(VAR_3, "server key is not EC\n");
  }
 }
 switch (VAR_8->sk->key_type) {
 case 128:
  if ((VAR_7->hash_id = FUNC_2(VAR_6)) >= 0) {
   if (VAR_8->verbose) {
    FUNC_4(VAR_3, "using RSA, hash = %d (%s)\n",
     VAR_7->hash_id,
     FUNC_5(VAR_7->hash_id));
   }
   VAR_7->auth_type = VAR_2;
   VAR_7->chain = VAR_8->chain;
   VAR_7->chain_len = VAR_8->chain_len;
   return;
  }
  break;
 case 129:
  if (VAR_8->issuer_key_type != 0
   && VAR_9 == VAR_8->sk->key.ec.curve)
  {
   int VAR_11;

   VAR_11 = (VAR_8->issuer_key_type == 128) ? 16 : 17;
   if (((VAR_6 >> VAR_11) & 1) != 0) {
    if (VAR_8->verbose) {
     FUNC_4(VAR_3, "using static ECDH\n");
    }
    VAR_7->auth_type = VAR_0;
    VAR_7->hash_id = -1;
    VAR_7->chain = VAR_8->chain;
    VAR_7->chain_len = VAR_8->chain_len;
    return;
   }
  }
  if ((VAR_7->hash_id = FUNC_2(VAR_6 >> 8)) >= 0) {
   if (VAR_8->verbose) {
    FUNC_4(VAR_3, "using ECDSA, hash = %d (%s)\n",
     VAR_7->hash_id,
     FUNC_5(VAR_7->hash_id));
   }
   VAR_7->auth_type = VAR_1;
   VAR_7->chain = VAR_8->chain;
   VAR_7->chain_len = VAR_8->chain_len;
   return;
  }
  break;
 }
 if (VAR_8->verbose) {
  FUNC_4(VAR_3, "no matching client certificate\n");
 }
 VAR_7->chain = ((void*)0);
 VAR_7->chain_len = 0;
}
