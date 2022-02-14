
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void** br_suite_translated ;
struct TYPE_12__ {int allowed_usages; int cert_issuer_key_type; int chain_len; int chain; } ;
typedef TYPE_3__ br_ssl_server_policy_ec_context ;
typedef int br_ssl_server_policy_class ;
struct TYPE_10__ {scalar_t__ version; } ;
struct TYPE_11__ {TYPE_1__ session; } ;
struct TYPE_13__ {TYPE_2__ eng; } ;
typedef TYPE_4__ br_ssl_server_context ;
struct TYPE_14__ {unsigned int algo_id; void* cipher_suite; int chain_len; int chain; } ;
typedef TYPE_5__ br_ssl_server_choices ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__ const*) ;
 void*** FUNC_2 (TYPE_4__ const*,size_t*) ;

__attribute__((used)) static int
FUNC_3(const br_ssl_server_policy_class **VAR_6,
 const br_ssl_server_context *VAR_7,
 br_ssl_server_choices *VAR_8)
{
 br_ssl_server_policy_ec_context *VAR_9;
 const br_suite_translated *VAR_10;
 size_t VAR_11, VAR_12;
 unsigned VAR_13;

 VAR_9 = (br_ssl_server_policy_ec_context *)VAR_6;
 VAR_10 = FUNC_2(VAR_7, &VAR_12);
 VAR_13 = FUNC_0(FUNC_1(VAR_7) >> 8);
 if (VAR_7->eng.session.version < VAR_4) {
  VAR_13 = VAR_5;
 }
 VAR_8->chain = VAR_9->chain;
 VAR_8->chain_len = VAR_9->chain_len;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 ++) {
  unsigned VAR_14;

  VAR_14 = VAR_10[VAR_11][1];
  switch (VAR_14 >> 12) {
  case 128:
   if ((VAR_9->allowed_usages & VAR_1) != 0
    && VAR_9->cert_issuer_key_type == VAR_2)
   {
    VAR_8->cipher_suite = VAR_10[VAR_11][0];
    return 1;
   }
   break;
  case 129:
   if ((VAR_9->allowed_usages & VAR_1) != 0
    && VAR_9->cert_issuer_key_type == VAR_0)
   {
    VAR_8->cipher_suite = VAR_10[VAR_11][0];
    return 1;
   }
   break;
  case 130:
   if ((VAR_9->allowed_usages & VAR_3) != 0
    && VAR_13 != 0)
   {
    VAR_8->cipher_suite = VAR_10[VAR_11][0];
    VAR_8->algo_id = VAR_13 + 0xFF00;
    return 1;
   }
   break;
  }
 }
 return 0;
}
