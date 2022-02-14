
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct atse_softc {struct ifnet* atse_ifp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atse_softc*,scalar_t__) ;
 int FUNC_1 (struct atse_softc*,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ifnet*,int ,int*) ;

__attribute__((used)) static int
FUNC_3(struct atse_softc *VAR_8)
{
 struct ifnet *VAR_9;
 uint32_t VAR_10;
 int VAR_11;


 VAR_10 = FUNC_0(VAR_8, VAR_0);

 if ((VAR_10 & VAR_1) != 0)
  VAR_10 &= ~VAR_1;

 VAR_9 = VAR_8->atse_ifp;
 if (VAR_9->if_flags & VAR_4) {
  VAR_10 |= VAR_2;
 } else {
  VAR_10 &= ~VAR_2;
 }

 FUNC_1(VAR_8, VAR_0, VAR_10);

 if (VAR_9->if_flags & VAR_3) {

  for (VAR_11 = 0; VAR_11 <= VAR_5; VAR_11++)
   FUNC_1(VAR_8, VAR_6 + VAR_11, 0x1);
 } else {




  uint64_t VAR_12;






  VAR_12 = 0;
  (void)FUNC_2(VAR_9, VAR_7, &VAR_12);
  for (VAR_11 = 0; VAR_11 <= VAR_5; VAR_11++) {
   FUNC_1(VAR_8, VAR_6 + VAR_11,
       (VAR_12 & (1 << VAR_11)) ? 0x01 : 0x00);
  }
 }

 return (0);
}
