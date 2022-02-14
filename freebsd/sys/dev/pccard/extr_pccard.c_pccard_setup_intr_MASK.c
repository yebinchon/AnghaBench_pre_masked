
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pccard_softc {int dummy; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {void* intr_handler_cookie; int * intr_handler; int * intr_filter; void* intr_handler_arg; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pccard_ivar* FUNC_0 (int ) ;
 struct pccard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct resource*,int,int ,int *,struct pccard_function*,void**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct pccard_function*,int ) ;
 int FUNC_5 (struct pccard_function*,int ,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_6 (struct pccard_softc*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, device_t VAR_5, struct resource *VAR_6,
    int VAR_7, driver_filter_t *VAR_8, driver_intr_t *VAR_9, void *VAR_10,
    void **VAR_11)
{
 struct pccard_softc *VAR_12 = FUNC_1(VAR_4);
 struct pccard_ivar *VAR_13 = FUNC_0(VAR_5);
 struct pccard_function *VAR_14 = VAR_13->pf;
 int VAR_15;

 if (VAR_14->intr_filter != ((void*)0) || VAR_14->intr_handler != ((void*)0))
  FUNC_3("Only one interrupt handler per function allowed");
 VAR_14->intr_filter = VAR_8;
 VAR_14->intr_handler = VAR_9;
 VAR_14->intr_handler_arg = VAR_10;
 VAR_15 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_2,
     VAR_9 ? VAR_3 : ((void*)0), VAR_14, VAR_11);
 if (VAR_15 != 0) {
  VAR_14->intr_filter = ((void*)0);
  VAR_14->intr_handler = ((void*)0);
  return (VAR_15);
 }
 VAR_14->intr_handler_cookie = *VAR_11;
 if (FUNC_6(VAR_12)) {
  FUNC_5(VAR_14, VAR_0,
      FUNC_4(VAR_14, VAR_0) |
      VAR_1);
 }
 return (0);
}
