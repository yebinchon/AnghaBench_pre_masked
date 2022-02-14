
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twsi_softc {int have_intr; int intrhand; int * res; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ,int,int *,int ,struct twsi_softc*,int *) ;
 struct twsi_softc* FUNC_1 (void*) ;
 int FUNC_2 (void*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3)
{
 struct twsi_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 if ((FUNC_0(VAR_3, VAR_4->res[1], VAR_1 | VAR_0,
       ((void*)0), VAR_2, VAR_4, &VAR_4->intrhand)))
  FUNC_2(VAR_3, "unable to register interrupt handler\n");

 VAR_4->have_intr = 1;
}
