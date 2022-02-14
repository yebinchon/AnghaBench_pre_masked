
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {struct sbc_ihl* ihl; struct resource** irq; } ;
struct sbc_ihl {int ** intr; void** intr_arg; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sbc_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sbc_softc*) ;
 int FUNC_3 (struct sbc_softc*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, device_t VAR_4, struct resource *VAR_5, int VAR_6,
           driver_filter_t *VAR_7,
        driver_intr_t *VAR_8,
           void *VAR_9, void **VAR_10)
{
 struct sbc_softc *VAR_11 = FUNC_0(VAR_3);
 struct sbc_ihl *VAR_12 = ((void*)0);
 int VAR_13, VAR_14;

 if (VAR_7 != ((void*)0)) {
  FUNC_1("sbc.c: we cannot use a filter here\n");
  return (VAR_0);
 }
 FUNC_2(VAR_11);
 VAR_13 = 0;
 while (VAR_13 < VAR_2) {
  if (VAR_5 == VAR_11->irq[VAR_13]) VAR_12 = &VAR_11->ihl[VAR_13];
  VAR_13++;
 }
 VAR_14 = 0;
 if (VAR_12 == ((void*)0)) VAR_14 = VAR_0;
 VAR_13 = 0;
 while ((VAR_14 == 0) && (VAR_13 < VAR_1)) {
  if (VAR_12->intr[VAR_13] == ((void*)0)) {
   VAR_12->intr[VAR_13] = VAR_8;
   VAR_12->intr_arg[VAR_13] = VAR_9;
   *VAR_10 = &VAR_12->intr[VAR_13];
   VAR_14 = -1;
  } else VAR_13++;
 }
 FUNC_3(VAR_11);
 return (VAR_14 > 0)? VAR_0 : 0;
}
