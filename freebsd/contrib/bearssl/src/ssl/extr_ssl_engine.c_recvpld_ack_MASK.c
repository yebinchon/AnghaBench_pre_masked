
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t ixa; size_t ixb; scalar_t__ ixc; } ;
typedef TYPE_1__ br_ssl_engine_context ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(br_ssl_engine_context *VAR_0, size_t VAR_1)
{
 VAR_0->ixa += VAR_1;







 if (VAR_0->ixa == VAR_0->ixb) {
  if (VAR_0->ixc == 0) {
   FUNC_0(VAR_0);
  } else {
   VAR_0->ixa = VAR_0->ixb = 5;
  }
 }
}
