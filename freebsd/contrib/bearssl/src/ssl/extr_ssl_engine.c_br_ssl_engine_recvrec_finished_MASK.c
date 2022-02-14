
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iomode; int ixa; int ixc; } ;
typedef TYPE_1__ br_ssl_engine_context ;





int
FUNC_0(const br_ssl_engine_context *VAR_0)
{
 switch (VAR_0->iomode) {
 case 129:
 case 128:
  return VAR_0->ixc == 0 || VAR_0->ixa < 5;
 default:
  return 1;
 }
}
