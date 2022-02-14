
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct nct_softc {struct gpio_pin* pins; } ;
struct gpio_pin {size_t gp_caps; size_t gp_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct nct_softc*) ;
 int FUNC_1 (struct nct_softc*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (struct nct_softc*) ;
 int FUNC_3 (size_t) ;
 struct nct_softc* FUNC_4 (int ) ;
 int FUNC_5 (struct nct_softc*,size_t,int) ;
 int FUNC_6 (struct nct_softc*,size_t,int) ;
 int FUNC_7 (struct nct_softc*,size_t) ;
 int FUNC_8 (struct nct_softc*,size_t) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7, uint32_t VAR_8, uint32_t VAR_9)
{
 struct nct_softc *VAR_10;
 struct gpio_pin *VAR_11;

 if (!FUNC_3(VAR_8))
  return (VAR_0);

 VAR_10 = FUNC_4(VAR_7);
 VAR_11 = &VAR_10->pins[VAR_8];
 if ((VAR_9 & VAR_11->gp_caps) != VAR_9)
  return (VAR_0);

 if ((VAR_9 & (VAR_1 | VAR_5)) ==
  (VAR_1 | VAR_5)) {
   return (VAR_0);
 }
 if ((VAR_9 & (VAR_4 | VAR_6)) ==
  (VAR_4 | VAR_6)) {
   return (VAR_0);
 }
 if ((VAR_9 & (VAR_2 | VAR_3)) ==
  (VAR_2 | VAR_3)) {
   return (VAR_0);
 }

 FUNC_0(VAR_10);
 FUNC_1(VAR_10);
 if ((VAR_9 & (VAR_1 | VAR_5)) != 0) {
  FUNC_5(VAR_10, VAR_8, (VAR_9 & VAR_1) != 0);
  VAR_11->gp_flags &= ~(VAR_1 | VAR_5);
  VAR_11->gp_flags |= VAR_9 & (VAR_1 | VAR_5);
 }
 if ((VAR_9 & (VAR_2 | VAR_3)) != 0) {
  FUNC_6(VAR_10, VAR_8,
      (VAR_9 & VAR_2) != 0);
  VAR_11->gp_flags &= ~(VAR_2 | VAR_3);
  VAR_11->gp_flags |= VAR_9 & (VAR_2 | VAR_3);
 }
 if ((VAR_9 & (VAR_4 | VAR_6)) != 0) {
  if (VAR_9 & VAR_4)
   FUNC_7(VAR_10, VAR_8);
  else
   FUNC_8(VAR_10, VAR_8);
  VAR_11->gp_flags &= ~(VAR_4 | VAR_6);
  VAR_11->gp_flags |=
      VAR_9 & (VAR_4 | VAR_6);
 }
 FUNC_2(VAR_10);

 return (0);
}
