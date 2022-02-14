
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int br_ssl_client_context ;
struct TYPE_5__ {int chain_len; int chain; } ;
typedef TYPE_1__ br_ssl_client_certificate_rsa_context ;
typedef int br_ssl_client_certificate_class ;
struct TYPE_6__ {int hash_id; int chain_len; int chain; int auth_type; } ;
typedef TYPE_2__ br_ssl_client_certificate ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(const br_ssl_client_certificate_class **VAR_1,
 const br_ssl_client_context *VAR_2, uint32_t VAR_3,
 br_ssl_client_certificate *VAR_4)
{
 br_ssl_client_certificate_rsa_context *VAR_5;
 int VAR_6;

 (void)VAR_2;
 VAR_5 = (br_ssl_client_certificate_rsa_context *)VAR_1;
 VAR_6 = FUNC_0((unsigned)VAR_3);
 if (VAR_6 == 0 && (VAR_3 & 1) == 0) {
  FUNC_1(VAR_4, 0, sizeof *VAR_4);
 }
 VAR_4->auth_type = VAR_0;
 VAR_4->hash_id = VAR_6;
 VAR_4->chain = VAR_5->chain;
 VAR_4->chain_len = VAR_5->chain_len;
}
