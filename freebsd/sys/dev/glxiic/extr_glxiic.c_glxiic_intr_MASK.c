
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct glxiic_softc {size_t state; int error; int iicbus; } ;
struct TYPE_2__ {int (* callback ) (struct glxiic_softc*,int) ;scalar_t__ master; } ;


 int FUNC_0 (struct glxiic_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct glxiic_softc*) ;
 int FUNC_2 (struct glxiic_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct glxiic_softc*) ;
 int FUNC_4 (struct glxiic_softc*,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (struct glxiic_softc*) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (struct glxiic_softc*,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_6)
{
 struct glxiic_softc *VAR_7;
 int VAR_8;
 uint8_t VAR_9, VAR_10;

 VAR_7 = (struct glxiic_softc *)VAR_6;

 FUNC_0(VAR_7);

 VAR_9 = FUNC_3(VAR_7);


 if ((VAR_9 &
  ~(VAR_0 | VAR_1)) != 0) {

  VAR_8 = VAR_5[VAR_7->state].callback(VAR_7, VAR_9);

  if (VAR_8 != VAR_3) {
   if (VAR_5[VAR_7->state].master) {
    FUNC_5(VAR_7);
    FUNC_4(VAR_7, VAR_2);
    VAR_7->error = VAR_8;
    FUNC_2(VAR_7);
   } else {
    VAR_10 = VAR_8 & 0xff;
    FUNC_6(VAR_7->iicbus, VAR_4, &VAR_10);
    FUNC_4(VAR_7, VAR_2);
   }
  }
 }

 FUNC_1(VAR_7);
}
