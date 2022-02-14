
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int br_tls_prf_impl ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_5__ {int prf10; int prf_sha256; int prf_sha384; TYPE_1__ session; } ;
typedef TYPE_2__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

br_tls_prf_impl
FUNC_0(br_ssl_engine_context *VAR_2, int VAR_3)
{
 if (VAR_2->session.version >= VAR_0) {
  if (VAR_3 == VAR_1) {
   return VAR_2->prf_sha384;
  } else {
   return VAR_2->prf_sha256;
  }
 } else {
  return VAR_2->prf10;
 }
}
