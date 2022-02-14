
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahc_softc {int chip; char channel; int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_7, uint8_t VAR_8)
{
 uint8_t VAR_9;

 if ((VAR_7->chip & VAR_1) == VAR_0) {
  VAR_9 = VAR_5;
   if (VAR_7->channel == 'B')
   VAR_9 |= VAR_3;
 } else if ((VAR_7->features & VAR_2) != 0) {
  VAR_9 = 0;
 } else {
  VAR_9 = VAR_5|VAR_3;
 }
 FUNC_1(VAR_7, VAR_4, VAR_9);
 FUNC_0(VAR_7);
 VAR_9 |= VAR_8;
 FUNC_1(VAR_7, VAR_4, VAR_9);
 FUNC_0(VAR_7);
 if ((VAR_7->features & VAR_2) != 0)
  VAR_9 |= VAR_6;
 else
  VAR_9 &= ~VAR_5;
 FUNC_1(VAR_7, VAR_4, VAR_9);
 FUNC_0(VAR_7);
 if ((VAR_7->features & VAR_2) != 0)
  VAR_9 = 0;
 else
  VAR_9 &= ~VAR_3;
 FUNC_1(VAR_7, VAR_4, VAR_9);
}
