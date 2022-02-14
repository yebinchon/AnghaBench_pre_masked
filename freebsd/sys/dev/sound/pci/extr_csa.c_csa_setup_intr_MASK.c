
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sndcard_func {int func; } ;
struct resource {int dummy; } ;
typedef TYPE_1__* sc_p ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_7__ {struct resource* irq; } ;
typedef TYPE_2__ csa_res ;
struct TYPE_6__ {void* midiintr_arg; int * midiintr; void* pcmintr_arg; int * pcmintr; TYPE_2__ res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 struct sndcard_func* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, device_t VAR_7,
        struct resource *VAR_8, int VAR_9,
        driver_filter_t *VAR_10,
        driver_intr_t *VAR_11, void *VAR_12, void **VAR_13)
{
 sc_p VAR_14;
 csa_res *VAR_15;
 struct sndcard_func *VAR_16;

 if (VAR_10 != ((void*)0)) {
  FUNC_4("ata-csa.c: we cannot use a filter here\n");
  return (VAR_2);
 }
 VAR_14 = FUNC_3(VAR_6);
 VAR_15 = &VAR_14->res;





 VAR_16 = FUNC_2(VAR_7);
 if (VAR_16 == ((void*)0) || VAR_8 != VAR_15->irq)
  return (VAR_2);

 switch (VAR_16->func) {
 case 128:
  VAR_14->pcmintr = VAR_11;
  VAR_14->pcmintr_arg = VAR_12;
  break;

 case 129:
  VAR_14->midiintr = VAR_11;
  VAR_14->midiintr_arg = VAR_12;
  break;

 default:
  return (VAR_2);
 }
 *VAR_13 = VAR_14;
 if ((FUNC_0(VAR_15, VAR_1) & VAR_5) == 0)
  FUNC_1(VAR_15, VAR_0, VAR_4 | VAR_3);

 return (0);
}
