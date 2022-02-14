
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int br_ssl_client_context ;
struct TYPE_7__ {int allowed_usages; scalar_t__ issuer_key_type; int chain_len; int chain; TYPE_1__* sk; } ;
typedef TYPE_2__ br_ssl_client_certificate_ec_context ;
typedef int br_ssl_client_certificate_class ;
struct TYPE_8__ {int hash_id; int chain_len; int chain; int auth_type; } ;
typedef TYPE_3__ br_ssl_client_certificate ;
struct TYPE_6__ {int curve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(const br_ssl_client_certificate_class **VAR_5,
 const br_ssl_client_context *VAR_6, uint32_t VAR_7,
 br_ssl_client_certificate *VAR_8)
{
 br_ssl_client_certificate_ec_context *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = (br_ssl_client_certificate_ec_context *)VAR_5;
 VAR_11 = FUNC_1(VAR_6);

 if ((VAR_9->allowed_usages & VAR_2) != 0
  && VAR_11 == VAR_9->sk->curve)
 {
  int VAR_12;

  VAR_12 = (VAR_9->issuer_key_type == VAR_3) ? 16 : 17;
  if (((VAR_7 >> VAR_12) & 1) != 0) {
   VAR_8->auth_type = VAR_0;
   VAR_8->hash_id = -1;
   VAR_8->chain = VAR_9->chain;
   VAR_8->chain_len = VAR_9->chain_len;
  }
 }





 VAR_10 = FUNC_0((unsigned)(VAR_7 >> 8));
 if (VAR_10 == 0 || (VAR_9->allowed_usages & VAR_4) == 0) {
  FUNC_2(VAR_8, 0, sizeof *VAR_8);
  return;
 }
 VAR_8->auth_type = VAR_1;
 VAR_8->hash_id = VAR_10;
 VAR_8->chain = VAR_9->chain;
 VAR_8->chain_len = VAR_9->chain_len;
}
