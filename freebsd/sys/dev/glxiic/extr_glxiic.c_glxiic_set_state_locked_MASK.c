
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct glxiic_softc {scalar_t__ timeout; scalar_t__ state; int callout; } ;
typedef scalar_t__ glxiic_state_t ;


 int FUNC_0 (struct glxiic_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct glxiic_softc*) ;

__attribute__((used)) static void
FUNC_3(struct glxiic_softc *VAR_1, glxiic_state_t VAR_2)
{

 FUNC_0(VAR_1);

 if (VAR_2 == VAR_0)
  FUNC_1(&VAR_1->callout);
 else if (VAR_1->timeout > 0)
  FUNC_2(VAR_1);

 VAR_1->state = VAR_2;
}
