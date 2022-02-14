
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* vtable; } ;
struct TYPE_6__ {size_t obuf_len; size_t max_frag_len; size_t oxa; size_t oxb; size_t oxc; scalar_t__ iomode; TYPE_1__ out; } ;
typedef TYPE_2__ br_ssl_engine_context ;
struct TYPE_7__ {int (* max_plaintext ) (TYPE_3__**,size_t*,size_t*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__**,size_t*,size_t*) ;

__attribute__((used)) static void
FUNC_1(br_ssl_engine_context *VAR_2)
{
 size_t VAR_3, VAR_4;

 VAR_3 = 5;
 VAR_4 = VAR_2->obuf_len - VAR_3;
 VAR_2->out.vtable->max_plaintext(&VAR_2->out.vtable, &VAR_3, &VAR_4);
 if ((VAR_4 - VAR_3) > VAR_2->max_frag_len) {
  VAR_4 = VAR_3 + VAR_2->max_frag_len;
 }
 VAR_2->oxa = VAR_3;
 VAR_2->oxb = VAR_4;
 VAR_2->oxc = VAR_3;
 if (VAR_2->iomode == VAR_1) {
  VAR_2->iomode = VAR_0;
 }
}
