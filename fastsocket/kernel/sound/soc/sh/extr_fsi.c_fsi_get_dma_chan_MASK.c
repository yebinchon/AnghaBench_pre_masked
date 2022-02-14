
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* dma_chan; } ;
struct TYPE_4__ {void* dma_chan; } ;
struct TYPE_6__ {TYPE_2__ fsib; TYPE_1__ fsia; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (void*) ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_1 (void*,char*) ;

__attribute__((used)) static int FUNC_2(void)
{
 if (0 != FUNC_1(VAR_1, "fsia"))
  return -VAR_0;

 if (0 != FUNC_1(VAR_2, "fsib")) {
  FUNC_0(VAR_1);
  return -VAR_0;
 }

 VAR_3->fsia.dma_chan = VAR_1;
 VAR_3->fsib.dma_chan = VAR_2;

 return 0;
}
