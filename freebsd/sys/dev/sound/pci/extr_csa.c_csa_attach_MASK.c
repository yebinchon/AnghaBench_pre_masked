
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct sndcard_func {int func; TYPE_1__* varinfo; } ;
typedef TYPE_2__* sc_p ;
typedef int device_t ;
struct TYPE_16__ {int * io; void* io_rid; int * mem; void* mem_rid; int * irq; void* irq_rid; } ;
typedef TYPE_3__ csa_res ;
struct TYPE_14__ {TYPE_10__* card; } ;
struct TYPE_15__ {int ih; void* midi; TYPE_1__ binfo; void* pcm; TYPE_10__* card; TYPE_3__ res; int dev; } ;
struct TYPE_13__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_1 (int ,int ,void**,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,void*,int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (TYPE_2__*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 TYPE_10__* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int VAR_16 ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;
 void* FUNC_12 (int ,char*,int) ;
 TYPE_2__* FUNC_13 (int ) ;
 int FUNC_14 (void*,struct sndcard_func*) ;
 struct sndcard_func* FUNC_15 (int,int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*,char*) ;
 scalar_t__ FUNC_18 (int ,int *,int ,int ,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_17)
{
 sc_p VAR_18;
 csa_res *VAR_19;
 struct sndcard_func *VAR_20;
 int VAR_21 = VAR_3;

 VAR_18 = FUNC_13(VAR_17);


 FUNC_5(VAR_18, sizeof(*VAR_18));
 VAR_18->dev = VAR_17;

 FUNC_16(VAR_17);


 VAR_19 = &VAR_18->res;
 VAR_18->card = FUNC_7(VAR_17);
 VAR_18->binfo.card = VAR_18->card;
 FUNC_17("csa: card is %s\n", VAR_18->card->name);
 VAR_19->io_rid = FUNC_0(0);
 VAR_19->io = FUNC_1(VAR_17, VAR_15,
  &VAR_19->io_rid, VAR_10);
 if (VAR_19->io == ((void*)0))
  return (VAR_3);
 VAR_19->mem_rid = FUNC_0(1);
 VAR_19->mem = FUNC_1(VAR_17, VAR_15,
  &VAR_19->mem_rid, VAR_10);
 if (VAR_19->mem == ((void*)0))
  goto err_io;
 VAR_19->irq_rid = 0;
 VAR_19->irq = FUNC_1(VAR_17, VAR_14,
  &VAR_19->irq_rid, VAR_10 | VAR_11);
 if (VAR_19->irq == ((void*)0))
  goto err_mem;


 if (FUNC_18(VAR_17, VAR_19->irq, 0, VAR_16, VAR_18, &VAR_18->ih))
  goto err_intr;






 if (FUNC_8(VAR_18))
  goto err_teardown;


 FUNC_10(VAR_19);


 if (FUNC_6(VAR_19))
  goto err_teardown;




 VAR_20 = FUNC_15(sizeof(struct sndcard_func), VAR_7, VAR_8 | VAR_9);
 if (VAR_20 == ((void*)0)) {
  VAR_21 = VAR_2;
  goto err_teardown;
 }
 VAR_20->varinfo = &VAR_18->binfo;
 VAR_20->func = VAR_13;
 VAR_18->pcm = FUNC_12(VAR_17, "pcm", -1);
 FUNC_14(VAR_18->pcm, VAR_20);


 VAR_20 = FUNC_15(sizeof(struct sndcard_func), VAR_7, VAR_8 | VAR_9);
 if (VAR_20 == ((void*)0)) {
  VAR_21 = VAR_2;
  goto err_teardown;
 }
 VAR_20->varinfo = &VAR_18->binfo;
 VAR_20->func = VAR_12;
 VAR_18->midi = FUNC_12(VAR_17, "midi", -1);
 FUNC_14(VAR_18->midi, VAR_20);

 FUNC_2(VAR_17);

 return (0);

err_teardown:
 FUNC_4(VAR_17, VAR_19->irq, VAR_18->ih);
err_intr:
 FUNC_3(VAR_17, VAR_14, VAR_19->irq_rid, VAR_19->irq);
err_mem:
 FUNC_3(VAR_17, VAR_15, VAR_19->mem_rid, VAR_19->mem);
err_io:
 FUNC_3(VAR_17, VAR_15, VAR_19->io_rid, VAR_19->io);
 return (VAR_21);
}
