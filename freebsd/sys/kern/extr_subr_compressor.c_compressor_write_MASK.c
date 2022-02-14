
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct compressor {int arg; int cb; int priv; TYPE_1__* methods; } ;
struct TYPE_2__ {int (* write ) (int ,void*,size_t,int ,int ) ;} ;


 int FUNC_0 (int ,void*,size_t,int ,int ) ;

int
FUNC_1(struct compressor *VAR_0, void *VAR_1, size_t VAR_2)
{

 return (VAR_0->methods->write(VAR_0->priv, VAR_1, VAR_2, VAR_0->cb,
     VAR_0->arg));
}
