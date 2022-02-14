
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
struct cgem_softc {int net_ctl_shadow; scalar_t__ txring_physaddr; scalar_t__ rxring_physaddr; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_5 (struct cgem_softc*,int ,int) ;
 int FUNC_6 (int ) ;
 int* FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct cgem_softc *VAR_30)
{
 if_t VAR_31 = VAR_30->ifp;
 uint32_t VAR_32;
 uint32_t VAR_33;
 u_char *VAR_34 = FUNC_7(VAR_31);

 FUNC_0(VAR_30);


 VAR_32 = VAR_14 |
  VAR_18 |
  VAR_15 |
  FUNC_2(VAR_26) |
  VAR_17 |
  VAR_13 |
  VAR_16 |
  VAR_20;


 if ((FUNC_6(VAR_31) & VAR_27) != 0)
  VAR_32 |= VAR_19;

 FUNC_5(VAR_30, VAR_12, VAR_32);


 VAR_33 = FUNC_1(VAR_29) |
  VAR_4 |
  VAR_5 |
  VAR_1 |
  VAR_3;


 if ((FUNC_6(VAR_31) & VAR_28) != 0)
  VAR_33 |= VAR_2;

 FUNC_5(VAR_30, VAR_0, VAR_33);


 FUNC_5(VAR_30, VAR_24, (uint32_t) VAR_30->rxring_physaddr);
 FUNC_5(VAR_30, VAR_25, (uint32_t) VAR_30->txring_physaddr);


 VAR_30->net_ctl_shadow |= (VAR_23 | VAR_22);
 FUNC_5(VAR_30, VAR_21, VAR_30->net_ctl_shadow);


 FUNC_5(VAR_30, FUNC_4(0), (VAR_34[3] << 24) |
     (VAR_34[2] << 16) | (VAR_34[1] << 8) | VAR_34[0]);
 FUNC_5(VAR_30, FUNC_3(0), (VAR_34[5] << 8) | VAR_34[4]);


 FUNC_5(VAR_30, VAR_6,
     VAR_8 | VAR_9 |
     VAR_11 | VAR_10 |
     VAR_7);
}
