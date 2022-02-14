
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sndcard_func {int dummy; } ;
typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_5__ {int io; int io_rid; int mem; int mem_rid; int irq; int irq_rid; } ;
typedef TYPE_2__ csa_res ;
struct TYPE_4__ {int ih; int * pcm; int * midi; TYPE_2__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 struct sndcard_func* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct sndcard_func*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 csa_res *VAR_4;
 sc_p VAR_5;
 struct sndcard_func *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_3);
 VAR_4 = &VAR_5->res;

 if (VAR_5->midi != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_5->midi);
  VAR_7 = FUNC_3(VAR_3, VAR_5->midi);
  if (VAR_7 != 0)
   return VAR_7;
  if (VAR_6 != ((void*)0))
   FUNC_6(VAR_6, VAR_0);
  VAR_5->midi = ((void*)0);
 }

 if (VAR_5->pcm != ((void*)0)) {
  VAR_6 = FUNC_4(VAR_5->pcm);
  VAR_7 = FUNC_3(VAR_3, VAR_5->pcm);
  if (VAR_7 != 0)
   return VAR_7;
  if (VAR_6 != ((void*)0))
   FUNC_6(VAR_6, VAR_0);
  VAR_5->pcm = ((void*)0);
 }

 FUNC_2(VAR_3, VAR_4->irq, VAR_5->ih);
 FUNC_1(VAR_3, VAR_1, VAR_4->irq_rid, VAR_4->irq);
 FUNC_1(VAR_3, VAR_2, VAR_4->mem_rid, VAR_4->mem);
 FUNC_1(VAR_3, VAR_2, VAR_4->io_rid, VAR_4->io);

 return FUNC_0(VAR_3);
}
