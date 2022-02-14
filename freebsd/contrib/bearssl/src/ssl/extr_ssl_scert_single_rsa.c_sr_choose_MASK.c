
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
struct TYPE_12__ {int allowed_usages; int chain_len; int chain; } ;
typedef TYPE_3__ br_ssl_server_policy_rsa_context ;
typedef int br_ssl_server_policy_class ;
struct TYPE_10__ {scalar_t__ version; } ;
struct TYPE_11__ {TYPE_1__ session; } ;
struct TYPE_13__ {TYPE_2__ eng; } ;
typedef TYPE_4__ br_ssl_server_context ;
struct TYPE_14__ {unsigned int algo_id; void* cipher_suite; int chain_len; int chain; } ;
typedef TYPE_5__ br_ssl_server_choices ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__ const*) ;
 void*** FUNC_2 (TYPE_4__ const*,size_t*) ;

__attribute__((used)) static int
FUNC_3(const br_ssl_server_policy_class **VAR_3,
 const br_ssl_server_context *VAR_4,
 br_ssl_server_choices *VAR_5)
{
 br_ssl_server_policy_rsa_context *VAR_6;
 const br_suite_translated *VAR_7;
 size_t VAR_8, VAR_9;
 unsigned VAR_10;
 int VAR_11;

 VAR_6 = (br_ssl_server_policy_rsa_context *)VAR_3;
 VAR_7 = FUNC_2(VAR_4, &VAR_9);
 if (VAR_4->eng.session.version < VAR_2) {
  VAR_10 = 0;
  VAR_11 = 1;
 } else {
  VAR_10 = FUNC_0(
   FUNC_1(VAR_4));
  VAR_11 = (VAR_10 != 0);
 }
 VAR_5->chain = VAR_6->chain;
 VAR_5->chain_len = VAR_6->chain_len;
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8 ++) {
  unsigned VAR_12;

  VAR_12 = VAR_7[VAR_8][1];
  switch (VAR_12 >> 12) {
  case 128:
   if ((VAR_6->allowed_usages & VAR_0) != 0) {
    VAR_5->cipher_suite = VAR_7[VAR_8][0];
    return 1;
   }
   break;
  case 129:
   if ((VAR_6->allowed_usages & VAR_1) != 0 && VAR_11) {
    VAR_5->cipher_suite = VAR_7[VAR_8][0];
    VAR_5->algo_id = VAR_10 + 0xFF00;
    return 1;
   }
   break;
  }
 }
 return 0;
}
