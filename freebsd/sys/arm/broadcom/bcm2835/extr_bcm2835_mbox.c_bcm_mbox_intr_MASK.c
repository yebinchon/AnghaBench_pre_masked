
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_mbox_softc {int* have_message; } ;


 int FUNC_0 (struct bcm_mbox_softc*) ;
 int FUNC_1 (struct bcm_mbox_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bcm_mbox_softc*,int*) ;
 int FUNC_3 (struct bcm_mbox_softc*,int ) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct bcm_mbox_softc *VAR_3 = VAR_2;
 int VAR_4;

 FUNC_0(VAR_3);
 while (!(FUNC_3(VAR_3, VAR_0) & VAR_1))
  if (FUNC_2(VAR_3, &VAR_4) == 0) {
   VAR_3->have_message[VAR_4] = 1;
   FUNC_4(&VAR_3->have_message[VAR_4]);
  }
 FUNC_1(VAR_3);
}
