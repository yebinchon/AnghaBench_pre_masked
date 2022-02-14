
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,int) ;
 int FUNC_3 (struct bxe_softc*,int,int) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;

__attribute__((used)) static void FUNC_5(struct bxe_softc *VAR_5, uint32_t VAR_6,
          uint32_t VAR_7)
{
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10;



 VAR_9 = FUNC_2(VAR_5, VAR_7 + VAR_4);

 if (FUNC_4(VAR_5))
  VAR_10 = 74L << VAR_3;
 else
  VAR_10 = 49L << VAR_3;

 if (((VAR_9 & VAR_2) == VAR_10) &&
     (VAR_9 & (VAR_1)))
  return;

 VAR_8 = VAR_9 &
  ~(VAR_0 | VAR_2);
 VAR_8 |= VAR_10;
 VAR_8 |= (VAR_1);

 FUNC_1(VAR_5, "Changing emac_mode from 0x%x to 0x%x\n",
    VAR_9, VAR_8);
 FUNC_3(VAR_5, VAR_7 + VAR_4, VAR_8);
 FUNC_0(40);
}
