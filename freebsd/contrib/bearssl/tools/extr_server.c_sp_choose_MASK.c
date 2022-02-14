
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ verbose; int chain_len; int chain; int cert_signer_algo; TYPE_1__* sk; int cbhash; } ;
typedef TYPE_2__ policy_context ;
typedef void** br_suite_translated ;
typedef int br_ssl_server_policy_class ;
struct TYPE_11__ {int client_max_version; int eng; } ;
typedef TYPE_3__ br_ssl_server_context ;
struct TYPE_12__ {void* cipher_suite; int algo_id; int chain_len; int chain; } ;
typedef TYPE_4__ br_ssl_server_choices ;
struct TYPE_9__ {int key_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_0 (int *) ;
 unsigned int FUNC_1 (TYPE_3__ const*) ;
 void*** FUNC_2 (TYPE_3__ const*,size_t*) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (void*,char*,int) ;
 int FUNC_6 (unsigned int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(const br_ssl_server_policy_class **VAR_4,
 const br_ssl_server_context *VAR_5,
 br_ssl_server_choices *VAR_6)
{
 policy_context *VAR_7;
 const br_suite_translated *VAR_8;
 size_t VAR_9, VAR_10;
 unsigned VAR_11;

 VAR_7 = (policy_context *)VAR_4;
 VAR_8 = FUNC_2(VAR_5, &VAR_10);
 VAR_11 = FUNC_1(VAR_5);
 if (VAR_7->verbose) {
  FUNC_4(VAR_3, "Client parameters:\n");
  FUNC_4(VAR_3, "   Maximum version:      ");
  switch (VAR_5->client_max_version) {
  case 136:
   FUNC_4(VAR_3, "SSL 3.0");
   break;
  case 130:
   FUNC_4(VAR_3, "TLS 1.0");
   break;
  case 129:
   FUNC_4(VAR_3, "TLS 1.1");
   break;
  case 128:
   FUNC_4(VAR_3, "TLS 1.2");
   break;
  default:
   FUNC_4(VAR_3, "unknown (0x%04X)",
    (unsigned)VAR_5->client_max_version);
   break;
  }
  FUNC_4(VAR_3, "\n");
  FUNC_4(VAR_3, "   Compatible cipher suites:\n");
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9 ++) {
   char VAR_12[80];

   FUNC_5(VAR_8[VAR_9][0], VAR_12, sizeof VAR_12);
   FUNC_4(VAR_3, "      %s\n", VAR_12);
  }
  FUNC_4(VAR_3, "   Common sign+hash functions:\n");
  if ((VAR_11 & 0xFF) != 0) {
   FUNC_4(VAR_3, "      with RSA:");
   FUNC_6(VAR_11);
   FUNC_4(VAR_3, "\n");
  }
  if ((VAR_11 >> 8) != 0) {
   FUNC_4(VAR_3, "      with ECDSA:");
   FUNC_6(VAR_11 >> 8);
   FUNC_4(VAR_3, "\n");
  }
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9 ++) {
  unsigned VAR_13;

  VAR_13 = VAR_8[VAR_9][1];
  switch (VAR_13 >> 12) {
  case 131:
   if (VAR_7->sk->key_type == VAR_1) {
    VAR_6->cipher_suite = VAR_8[VAR_9][0];
    goto choose_ok;
   }
   break;
  case 134:
   if (VAR_7->sk->key_type == VAR_1) {
    VAR_6->cipher_suite = VAR_8[VAR_9][0];
    if (FUNC_0(&VAR_5->eng)
     < 128)
    {
     if (VAR_7->cbhash) {
      VAR_6->algo_id = 0x0001;
     } else {
      VAR_6->algo_id = 0xFF00;
     }
    } else {
     unsigned VAR_14;

     VAR_14 = FUNC_3(VAR_11);
     if (VAR_7->cbhash) {
      VAR_6->algo_id =
       (VAR_14 << 8) + 0x01;
     } else {
      VAR_6->algo_id = 0xFF00 + VAR_14;
     }
    }
    goto choose_ok;
   }
   break;
  case 135:
   if (VAR_7->sk->key_type == VAR_0) {
    VAR_6->cipher_suite = VAR_8[VAR_9][0];
    if (FUNC_0(&VAR_5->eng)
     < 128)
    {
     if (VAR_7->cbhash) {
      VAR_6->algo_id = 0x0203;
     } else {
      VAR_6->algo_id =
       0xFF00 + VAR_2;
     }
    } else {
     unsigned VAR_15;

     VAR_15 = FUNC_3(VAR_11 >> 8);
     if (VAR_7->cbhash) {
      VAR_6->algo_id =
       (VAR_15 << 8) + 0x03;
     } else {
      VAR_6->algo_id =
       0xFF00 + VAR_15;
     }
    }
    goto choose_ok;
   }
   break;
  case 132:
   if (VAR_7->sk->key_type == VAR_0
    && VAR_7->cert_signer_algo == VAR_1)
   {
    VAR_6->cipher_suite = VAR_8[VAR_9][0];
    goto choose_ok;
   }
   break;
  case 133:
   if (VAR_7->sk->key_type == VAR_0
    && VAR_7->cert_signer_algo == VAR_0)
   {
    VAR_6->cipher_suite = VAR_8[VAR_9][0];
    goto choose_ok;
   }
   break;
  }
 }
 return 0;

choose_ok:
 VAR_6->chain = VAR_7->chain;
 VAR_6->chain_len = VAR_7->chain_len;
 if (VAR_7->verbose) {
  char VAR_16[80];

  FUNC_5(VAR_6->cipher_suite, VAR_16, sizeof VAR_16);
  FUNC_4(VAR_3, "Using: %s\n", VAR_16);
 }
 return 1;
}
