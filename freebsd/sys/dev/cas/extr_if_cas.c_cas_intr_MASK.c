
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cas_softc {int sc_intr_task; int sc_tq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cas_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct cas_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5)
{
 struct cas_softc *VAR_6 = VAR_5;

 if (FUNC_2((FUNC_0(VAR_6, VAR_2) &
     VAR_1) == 0))
  return (VAR_4);


 FUNC_1(VAR_6, VAR_0, 0xffffffff);
 FUNC_3(VAR_6->sc_tq, &VAR_6->sc_intr_task);

 return (VAR_3);
}
