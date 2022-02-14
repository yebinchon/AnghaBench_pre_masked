
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sldns_buffer {int dummy; } ;
struct dnscrypt_query_header {int magic_query; } ;
struct dnsc_env {size_t signed_certs_count; TYPE_1__* certs; } ;
struct TYPE_3__ {int magic_query; } ;
typedef TYPE_1__ dnsccert ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sldns_buffer*) ;
 scalar_t__ FUNC_2 (struct sldns_buffer*) ;

__attribute__((used)) static const dnsccert *
FUNC_3(struct dnsc_env* VAR_2, struct sldns_buffer* VAR_3)
{
 const dnsccert *VAR_4 = VAR_2->certs;
 struct dnscrypt_query_header *VAR_5;
 size_t VAR_6;

 if (FUNC_2(VAR_3) < VAR_1) {
  return ((void*)0);
 }
 VAR_5 = (struct dnscrypt_query_header *)FUNC_1(VAR_3);
 for (VAR_6 = 0U; VAR_6 < VAR_2->signed_certs_count; VAR_6++) {
  if (FUNC_0(VAR_4[VAR_6].magic_query, VAR_5->magic_query,
                   VAR_0) == 0) {
   return &VAR_4[VAR_6];
  }
 }
 return ((void*)0);
}
