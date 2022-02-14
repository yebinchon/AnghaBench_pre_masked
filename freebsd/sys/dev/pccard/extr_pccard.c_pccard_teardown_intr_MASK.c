
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pccard_softc {int dummy; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int * intr_handler_cookie; int * intr_handler_arg; int * intr_handler; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pccard_ivar* FUNC_0 (int ) ;
 struct pccard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct resource*,void*) ;
 int FUNC_3 (struct pccard_function*,int ) ;
 int FUNC_4 (struct pccard_function*,int ,int) ;
 scalar_t__ FUNC_5 (struct pccard_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
    void *VAR_5)
{
 struct pccard_softc *VAR_6 = FUNC_1(VAR_2);
 struct pccard_ivar *VAR_7 = FUNC_0(VAR_3);
 struct pccard_function *VAR_8 = VAR_7->pf;
 int VAR_9;

 if (FUNC_5(VAR_6)) {
  FUNC_4(VAR_8, VAR_0,
      FUNC_3(VAR_8, VAR_0) &
      ~VAR_1);
 }
 VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_9 == 0) {
  VAR_8->intr_handler = ((void*)0);
  VAR_8->intr_handler_arg = ((void*)0);
  VAR_8->intr_handler_cookie = ((void*)0);
 }

 return (VAR_9);
}
