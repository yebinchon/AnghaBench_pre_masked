
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct compressor {int priv; TYPE_1__* methods; } ;
struct TYPE_2__ {int (* fini ) (int ) ;} ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct compressor *VAR_0)
{

 VAR_0->methods->fini(VAR_0->priv);
}
