
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct glxiic_softc {size_t state; int addr; int iicbus; void* error; } ;
struct TYPE_2__ {scalar_t__ master; } ;


 int FUNC_0 (char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct glxiic_softc*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct glxiic_softc*,int ) ;
 int FUNC_3 (struct glxiic_softc*) ;
 int FUNC_4 (struct glxiic_softc*,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_5 (int ,int ,void**) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5)
{
 struct glxiic_softc *VAR_6;
 uint8_t VAR_7;

 VAR_6 = (struct glxiic_softc *)VAR_5;

 FUNC_0("timeout in state %d", VAR_6->state);

 if (VAR_4[VAR_6->state].master) {
  VAR_6->error = VAR_1;
  FUNC_1(VAR_6);
 } else {
  VAR_7 = VAR_1;
  FUNC_5(VAR_6->iicbus, VAR_3, &VAR_7);
 }

 FUNC_3(VAR_6);
 FUNC_4(VAR_6, VAR_2, VAR_6->addr);
 FUNC_2(VAR_6, VAR_0);
}
