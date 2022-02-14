
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ oxb; scalar_t__ oxa; scalar_t__ oxc; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(br_ssl_engine_context *VAR_0, size_t VAR_1)
{
 VAR_0->oxb = (VAR_0->oxa += VAR_1);
 if (VAR_0->oxa == VAR_0->oxc) {
  FUNC_0(VAR_0);
 }
}
