
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iomode; scalar_t__ ibuf; scalar_t__ obuf; scalar_t__ oxa; scalar_t__ oxb; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_1(br_ssl_engine_context *VAR_2, size_t VAR_3)
{




 if (VAR_2->iomode == VAR_0 && VAR_2->ibuf == VAR_2->obuf) {
  VAR_2->iomode = VAR_1;
 }
 VAR_2->oxa += VAR_3;
 if (VAR_2->oxa >= VAR_2->oxb) {





  VAR_2->oxb = VAR_2->oxa + 1;
  FUNC_0(VAR_2, 0);
 }
}
