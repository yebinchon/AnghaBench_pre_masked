
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct cmx_softc {int ch; int sel; scalar_t__ polling; int dev; int dying; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cmx_softc*) ;
 int FUNC_1 (struct cmx_softc*) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,void (*) (void*),struct cmx_softc*) ;
 int FUNC_4 (struct cmx_softc*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 struct cmx_softc *VAR_5 = VAR_4;
 uint8_t VAR_6;

 FUNC_0(VAR_5);
 if (VAR_5->polling && !VAR_5->dying) {
  VAR_6 = FUNC_4(VAR_5);
  FUNC_2(VAR_5->dev, "BSR=%b\n", VAR_6, VAR_0);
  if (FUNC_5(VAR_6, VAR_1, 1)) {
   VAR_5->polling = 0;
   FUNC_6(&VAR_5->sel, VAR_3);
  } else {
   FUNC_3(&VAR_5->ch, VAR_2, FUNC_7, VAR_5);
  }
 }
 FUNC_1(VAR_5);
}
