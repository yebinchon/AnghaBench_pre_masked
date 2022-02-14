
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_softc {scalar_t__ polling; int poll_ival; int poll_callout; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct hdac_softc*) ;
 int FUNC_1 (struct hdac_softc*) ;
 int FUNC_2 (struct hdac_softc*) ;
 int FUNC_3 (struct hdac_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct hdac_softc *VAR_1 = VAR_0;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(VAR_1);
 if (VAR_1->polling == 0) {
  FUNC_3(VAR_1);
  return;
 }
 FUNC_0(&VAR_1->poll_callout, VAR_1->poll_ival,
     FUNC_4, VAR_1);
 FUNC_3(VAR_1);

 FUNC_1(VAR_1);
}
