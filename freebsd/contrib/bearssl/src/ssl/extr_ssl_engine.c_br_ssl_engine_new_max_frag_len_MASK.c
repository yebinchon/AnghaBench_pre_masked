
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_frag_len; unsigned int oxc; size_t oxa; size_t oxb; } ;
typedef TYPE_1__ br_ssl_engine_context ;



void
FUNC_0(br_ssl_engine_context *VAR_0, unsigned VAR_1)
{
 size_t VAR_2;

 VAR_0->max_frag_len = VAR_1;
 VAR_2 = VAR_0->oxc + VAR_1;
 if (VAR_0->oxa < VAR_0->oxb && VAR_0->oxb > VAR_2 && VAR_0->oxa < VAR_2) {
  VAR_0->oxb = VAR_2;
 }
}
