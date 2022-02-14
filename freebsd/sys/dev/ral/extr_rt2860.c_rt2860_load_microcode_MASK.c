
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_softc {int sc_dev; } ;
struct firmware {int datasize; int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*) ;
 int FUNC_3 (struct rt2860_softc*) ;
 int FUNC_4 (struct rt2860_softc*) ;
 int FUNC_5 (struct rt2860_softc*,int ) ;
 int FUNC_6 (struct rt2860_softc*) ;
 int FUNC_7 (struct rt2860_softc*,int ,int ) ;
 int FUNC_8 (struct rt2860_softc*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ,char*) ;
 struct firmware* FUNC_10 (char*) ;
 int FUNC_11 (struct firmware const*,int ) ;

int
FUNC_12(struct rt2860_softc *VAR_10)
{
 const struct firmware *VAR_11;
 int VAR_12, VAR_13;

 FUNC_4(VAR_10);

 FUNC_6(VAR_10);
 VAR_11 = FUNC_10("rt2860fw");
 FUNC_3(VAR_10);
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_10->sc_dev,
      "unable to receive rt2860fw firmware image\n");
  return VAR_0;
 }


 FUNC_7(VAR_10, VAR_9, VAR_6);

 FUNC_8(VAR_10, VAR_3, VAR_11->data, VAR_11->datasize);

 FUNC_7(VAR_10, VAR_9, 0);
 FUNC_2(VAR_10);
 FUNC_7(VAR_10, VAR_9, VAR_8);

 FUNC_7(VAR_10, VAR_4, 0);
 FUNC_7(VAR_10, VAR_5, 0);


 FUNC_1(VAR_10);
 for (VAR_12 = 0; VAR_12 < 1000; VAR_12++) {
  if (FUNC_5(VAR_10, VAR_9) & VAR_7)
   break;
  FUNC_0(1000);
 }
 if (VAR_12 == 1000) {
  FUNC_9(VAR_10->sc_dev,
      "timeout waiting for MCU to initialize\n");
  VAR_13 = VAR_1;
 } else
  VAR_13 = 0;

 FUNC_11(VAR_11, VAR_2);
 return VAR_13;
}
