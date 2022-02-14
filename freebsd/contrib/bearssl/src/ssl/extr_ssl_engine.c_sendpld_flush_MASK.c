
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* vtable; } ;
struct TYPE_6__ {size_t oxa; size_t oxb; size_t oxc; unsigned char* obuf; int version_out; int record_type_out; TYPE_1__ out; } ;
typedef TYPE_2__ br_ssl_engine_context ;
struct TYPE_7__ {unsigned char* (* encrypt ) (TYPE_3__**,int ,int ,unsigned char*,size_t*) ;} ;


 unsigned char* FUNC_0 (TYPE_3__**,int ,int ,unsigned char*,size_t*) ;

__attribute__((used)) static void
FUNC_1(br_ssl_engine_context *VAR_0, int VAR_1)
{
 size_t VAR_2;
 unsigned char *VAR_3;

 if (VAR_0->oxa == VAR_0->oxb) {
  return;
 }
 VAR_2 = VAR_0->oxa - VAR_0->oxc;
 if (VAR_2 == 0 && !VAR_1) {
  return;
 }
 VAR_3 = VAR_0->out.vtable->encrypt(&VAR_0->out.vtable,
  VAR_0->record_type_out, VAR_0->version_out,
  VAR_0->obuf + VAR_0->oxc, &VAR_2);
 VAR_0->oxb = VAR_0->oxa = (size_t)(VAR_3 - VAR_0->obuf);
 VAR_0->oxc = VAR_0->oxa + VAR_2;
}
