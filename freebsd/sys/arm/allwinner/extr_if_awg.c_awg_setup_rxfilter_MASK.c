
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct awg_softc {int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct awg_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (struct awg_softc*,int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct awg_softc *VAR_9)
{
 uint32_t VAR_10, VAR_11[2], VAR_12, VAR_13;
 uint8_t *VAR_14;
 if_t VAR_15;

 FUNC_0(VAR_9);

 VAR_15 = VAR_9->ifp;
 VAR_10 = 0;
 VAR_11[0] = VAR_11[1] = 0;

 if (FUNC_6(VAR_15) & VAR_6)
  VAR_10 |= VAR_0;
 else if (FUNC_6(VAR_15) & VAR_5) {
  VAR_10 |= VAR_7;
  VAR_11[0] = VAR_11[1] = ~0;
 } else if (FUNC_5(VAR_15, VAR_8, VAR_11) > 0)
  VAR_10 |= VAR_4;


 VAR_14 = FUNC_3(VAR_15);
 VAR_12 = (VAR_14[5] << 8) | VAR_14[4];
 VAR_13 = (VAR_14[3] << 24) | (VAR_14[2] << 16) | (VAR_14[1] << 8) |
    (VAR_14[0] << 0);
 FUNC_4(VAR_9, FUNC_1(0), VAR_12);
 FUNC_4(VAR_9, FUNC_2(0), VAR_13);


 FUNC_4(VAR_9, VAR_2, VAR_11[1]);
 FUNC_4(VAR_9, VAR_3, VAR_11[0]);


 FUNC_4(VAR_9, VAR_1, VAR_10);
}
