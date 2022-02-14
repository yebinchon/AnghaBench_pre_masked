
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ iomode; int err; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;

void
FUNC_0(br_ssl_engine_context *VAR_1, int VAR_2)
{
 if (VAR_1->iomode != VAR_0) {
  VAR_1->iomode = VAR_0;
  VAR_1->err = VAR_2;
 }
}
