
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anadig_softc {int * res; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct anadig_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct anadig_softc*,int ,int) ;
 struct anadig_softc* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 struct anadig_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct anadig_softc*,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_13)
{
 struct anadig_softc *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_5(VAR_13);

 if (FUNC_4(VAR_13, VAR_12, VAR_14->res)) {
  FUNC_6(VAR_13, "could not allocate resources\n");
  return (VAR_9);
 }


 VAR_14->bst = FUNC_10(VAR_14->res[0]);
 VAR_14->bsh = FUNC_9(VAR_14->res[0]);

 VAR_11 = VAR_14;


 FUNC_7(VAR_14, VAR_2);
 FUNC_7(VAR_14, VAR_6);


 FUNC_7(VAR_14, VAR_0);
 FUNC_7(VAR_14, VAR_1);
 FUNC_7(VAR_14, VAR_3);
 FUNC_7(VAR_14, VAR_4);
 FUNC_7(VAR_14, VAR_5);


 VAR_15 = FUNC_0(VAR_14, VAR_7);
 VAR_15 |= (VAR_8);
 FUNC_3(VAR_14, VAR_7, VAR_15);


 VAR_15 = FUNC_0(VAR_14, FUNC_2(0));
 VAR_15 |= (VAR_10);
 FUNC_3(VAR_14, FUNC_2(0), VAR_15);

 VAR_15 = FUNC_0(VAR_14, FUNC_2(1));
 VAR_15 |= (VAR_10);
 FUNC_3(VAR_14, FUNC_2(1), VAR_15);
 return (0);
}
