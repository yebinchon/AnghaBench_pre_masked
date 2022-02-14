
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct glxiic_softc {size_t state; int error; int addr; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ master; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct glxiic_softc*) ;
 int FUNC_2 (struct glxiic_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct glxiic_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct glxiic_softc*,int ) ;
 int FUNC_5 (struct glxiic_softc*) ;
 int FUNC_6 (struct glxiic_softc*,int ,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, u_char VAR_5, u_char VAR_6, u_char *VAR_7)
{
 struct glxiic_softc *VAR_8;

 VAR_8 = FUNC_3(VAR_4);

 FUNC_0(VAR_8);

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_8->addr;
 VAR_8->addr = VAR_6;


 FUNC_5(VAR_8);
 FUNC_6(VAR_8, VAR_5, VAR_6);

 if (VAR_3[VAR_8->state].master) {
  VAR_8->error = VAR_1;
  FUNC_2(VAR_8);
 }
 FUNC_4(VAR_8, VAR_0);

 FUNC_1(VAR_8);

 return (VAR_2);
}
