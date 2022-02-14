
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {int cardok; } ;
struct cbb_intrhand {int cookie; struct cbb_softc* sc; void* arg; int * intr; int * filt; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct resource*,int,int *,int *,struct cbb_intrhand*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct cbb_softc*) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int ) ;
 struct cbb_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct cbb_intrhand*,int ) ;
 struct cbb_intrhand* FUNC_5 (int,int ,int ) ;

int
FUNC_6(device_t VAR_6, device_t VAR_7, struct resource *VAR_8,
  int VAR_9, driver_filter_t *VAR_10, driver_intr_t *VAR_11, void *VAR_12,
   void **VAR_13)
{
 struct cbb_intrhand *VAR_14;
 struct cbb_softc *VAR_15 = FUNC_3(VAR_6);
 int VAR_16;

 if (VAR_10 == ((void*)0) && VAR_11 == ((void*)0))
  return (VAR_0);
 VAR_14 = FUNC_5(sizeof(struct cbb_intrhand), VAR_2, VAR_3);
 if (VAR_14 == ((void*)0))
  return (VAR_1);
 *VAR_13 = VAR_14;
 VAR_14->filt = VAR_10;
 VAR_14->intr = VAR_11;
 VAR_14->arg = VAR_12;
 VAR_14->sc = VAR_15;




 VAR_16 = FUNC_0(FUNC_2(VAR_6), VAR_7, VAR_8, VAR_9,
     VAR_10 ? VAR_4 : ((void*)0), VAR_11 ? VAR_5 : ((void*)0), VAR_14,
     &VAR_14->cookie);
 if (VAR_16 != 0) {
  FUNC_4(VAR_14, VAR_2);
  return (VAR_16);
 }
 FUNC_1(VAR_15);
 VAR_15->cardok = 1;
 return 0;
}
