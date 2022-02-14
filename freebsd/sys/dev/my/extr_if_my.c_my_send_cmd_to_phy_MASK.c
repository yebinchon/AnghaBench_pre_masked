
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct my_softc {int my_phy_addr; } ;


 long FUNC_0 (struct my_softc*,int ) ;
 int FUNC_1 (struct my_softc*,int ,long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct my_softc*) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static long
FUNC_4(struct my_softc * VAR_5, int VAR_6, int VAR_7)
{
 long VAR_8;
 int VAR_9;
 int VAR_10, VAR_11;

 FUNC_3(VAR_5);


 VAR_8 = FUNC_0(VAR_5, VAR_0);
 VAR_8 &= 0xfffffff0;

 VAR_8 |= VAR_3 + VAR_2;


 for (VAR_9 = 0; VAR_9 < 32; VAR_9++) {

  VAR_8 &= ~VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_8);


  VAR_8 |= VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_8);
 }


 VAR_11 = VAR_6 | (VAR_5->my_phy_addr << 7) | (VAR_7 << 2);


 VAR_10 = 0x8000;
 while (VAR_10) {

  VAR_8 &= ~(VAR_1 + VAR_2);
  if (VAR_10 & VAR_11)
   VAR_8 |= VAR_2;

  FUNC_1(VAR_5, VAR_0, VAR_8);

  VAR_8 |= VAR_1;
  FUNC_1(VAR_5, VAR_0, VAR_8);
  FUNC_2(30);


  VAR_10 >>= 1;
  if (VAR_10 == 0x2 && VAR_6 == VAR_4)
   VAR_8 &= ~VAR_3;
 }

 return VAR_8;
}
