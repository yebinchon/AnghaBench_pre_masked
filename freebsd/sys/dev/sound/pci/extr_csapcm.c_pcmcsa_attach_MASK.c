
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sndcard_func {TYPE_3__* varinfo; } ;
struct TYPE_12__ {int irq; scalar_t__ irq_rid; void* mem_rid; void* io_rid; } ;
struct TYPE_9__ {int dma; } ;
struct TYPE_8__ {int dma; } ;
struct csa_info {int ih; TYPE_4__* card; TYPE_5__ res; TYPE_3__* binfo; scalar_t__ active; TYPE_2__ rch; TYPE_1__ pch; } ;
struct ac97_info {int dummy; } ;
typedef int device_t ;
typedef TYPE_5__ csa_res ;
struct TYPE_11__ {scalar_t__ inv_eapd; } ;
struct TYPE_10__ {TYPE_4__* card; } ;


 struct ac97_info* FUNC_0 (int ,struct csa_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (struct ac97_info*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ac97_info*,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct csa_info*,int) ;
 scalar_t__ FUNC_7 (struct csa_info*,int ) ;
 scalar_t__ FUNC_8 (struct csa_info*) ;
 int VAR_11 ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (struct csa_info*,int ) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int VAR_12 ;
 struct sndcard_func* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 struct csa_info* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int ,int ,struct ac97_info*) ;
 int FUNC_16 (int ,int ,int *,struct csa_info*) ;
 scalar_t__ FUNC_17 (int ,struct csa_info*,int,int) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_20 (int ,int ,int ,int ,struct csa_info*,int *) ;
 int FUNC_21 (char*,int,char*,int ,int ) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_14)
{
 struct csa_info *VAR_15;
 csa_res *VAR_16;
 int VAR_17;
 char VAR_18[VAR_9];
 struct ac97_info *VAR_19;
 struct sndcard_func *VAR_20;

 VAR_15 = FUNC_14(sizeof(*VAR_15), VAR_4, VAR_5 | VAR_6);
 VAR_17 = FUNC_13(VAR_14);
 VAR_20 = FUNC_12(VAR_14);
 VAR_15->binfo = VAR_20->varinfo;





 VAR_15->pch.dma = VAR_15->rch.dma = 1;
 VAR_15->active = 0;
 VAR_15->card = VAR_15->binfo->card;


 VAR_16 = &VAR_15->res;
 VAR_16->io_rid = FUNC_1(0);
 VAR_16->mem_rid = FUNC_1(1);
 VAR_16->irq_rid = 0;
 if (FUNC_7(VAR_15, VAR_14)) {
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }

 FUNC_6(VAR_15, 1);
 if (FUNC_8(VAR_15)) {
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }
 VAR_19 = FUNC_0(VAR_14, VAR_15, VAR_10);
 if (VAR_19 == ((void*)0)) {
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }
 if (VAR_15->card->inv_eapd)
  FUNC_5(VAR_19, VAR_0);
 if (FUNC_15(VAR_14, FUNC_4(), VAR_19) == -1) {
  FUNC_3(VAR_19);
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }

 FUNC_21(VAR_18, VAR_9, "at irq %jd %s",
   FUNC_19(VAR_16->irq),FUNC_2(VAR_13));


 if (FUNC_20(VAR_14, VAR_16->irq, 0, VAR_11, VAR_15, &VAR_15->ih)) {
  FUNC_3(VAR_19);
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }
 FUNC_11(VAR_16, VAR_2, FUNC_9(VAR_16, VAR_2) & ~0x0000f03f);
 FUNC_11(VAR_16, VAR_1, (FUNC_9(VAR_16, VAR_1) & ~0x0000003f) | 0x00000001);
 FUNC_6(VAR_15, -1);

 if (FUNC_17(VAR_14, VAR_15, 1, 1)) {
  FUNC_3(VAR_19);
  FUNC_10(VAR_15, VAR_14);
  return (VAR_3);
 }
 FUNC_16(VAR_14, VAR_8, &VAR_12, VAR_15);
 FUNC_16(VAR_14, VAR_7, &VAR_12, VAR_15);
 FUNC_18(VAR_14, VAR_18);

 return (0);
}
