
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdac_softc {int mem; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int,char*) ;
 struct hdac_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct hdac_softc*,int,int) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_2, device_t VAR_3, int VAR_4, int VAR_5)
{
 struct hdac_softc *VAR_6 = FUNC_4(VAR_2);
 int VAR_7 = 1000;
 int VAR_8 = VAR_7;
 int VAR_9, VAR_10;
 uint32_t VAR_11;

 VAR_9 = FUNC_6(VAR_6, VAR_4, VAR_5);
 FUNC_3(VAR_9 >= 0,
     ("Reset for not allocated stream (%d/%d)\n", VAR_4, VAR_5));

 VAR_10 = VAR_9 << 5;
 VAR_11 = FUNC_1(&VAR_6->mem, VAR_10 + VAR_0);
 VAR_11 |= VAR_1;
 FUNC_2(&VAR_6->mem, VAR_10 + VAR_0, VAR_11);
 do {
  VAR_11 = FUNC_1(&VAR_6->mem, VAR_10 + VAR_0);
  if (VAR_11 & VAR_1)
   break;
  FUNC_0(10);
 } while (--VAR_8);
 if (!(VAR_11 & VAR_1))
  FUNC_5(VAR_2, "Reset setting timeout\n");
 VAR_11 &= ~VAR_1;
 FUNC_2(&VAR_6->mem, VAR_10 + VAR_0, VAR_11);
 VAR_8 = VAR_7;
 do {
  VAR_11 = FUNC_1(&VAR_6->mem, VAR_10 + VAR_0);
  if (!(VAR_11 & VAR_1))
   break;
  FUNC_0(10);
 } while (--VAR_8);
 if (VAR_11 & VAR_1)
  FUNC_5(VAR_2, "Reset timeout!\n");
}
