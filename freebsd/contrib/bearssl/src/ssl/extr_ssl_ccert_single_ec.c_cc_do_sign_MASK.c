
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t (* iecdsa ) (int ,int const*,unsigned char*,int ,unsigned char*) ;int sk; int iec; int mhash; } ;
typedef TYPE_1__ br_ssl_client_certificate_ec_context ;
typedef int br_ssl_client_certificate_class ;
typedef int br_hash_class ;


 int * FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 size_t FUNC_2 (int ,int const*,unsigned char*,int ,unsigned char*) ;

__attribute__((used)) static size_t
FUNC_3(const br_ssl_client_certificate_class **VAR_0,
 int VAR_1, size_t VAR_2, unsigned char *VAR_3, size_t VAR_4)
{
 br_ssl_client_certificate_ec_context *VAR_5;
 unsigned char VAR_6[64];
 const br_hash_class *VAR_7;

 VAR_5 = (br_ssl_client_certificate_ec_context *)VAR_0;
 FUNC_1(VAR_6, VAR_3, VAR_2);
 VAR_7 = FUNC_0(VAR_5->mhash, VAR_1);
 if (VAR_7 == ((void*)0)) {
  return 0;
 }
 if (VAR_4 < 139) {
  return 0;
 }
 return VAR_5->iecdsa(VAR_5->iec, VAR_7, VAR_6, VAR_5->sk, VAR_3);
}
