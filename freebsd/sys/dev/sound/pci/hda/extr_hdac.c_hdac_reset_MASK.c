
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hdac_softc {int num_iss; int num_oss; int num_bss; int dev; int mem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct hdac_softc*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct hdac_softc*,int) ;
 int FUNC_3 (struct hdac_softc*,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct hdac_softc *VAR_7, int VAR_8)
{
 uint32_t VAR_9;
 int VAR_10, VAR_11;




 for (VAR_11 = 0; VAR_11 < VAR_7->num_iss; VAR_11++)
  FUNC_6(&VAR_7->mem, FUNC_2(VAR_7, VAR_11), 0x0);
 for (VAR_11 = 0; VAR_11 < VAR_7->num_oss; VAR_11++)
  FUNC_6(&VAR_7->mem, FUNC_3(VAR_7, VAR_11), 0x0);
 for (VAR_11 = 0; VAR_11 < VAR_7->num_bss; VAR_11++)
  FUNC_6(&VAR_7->mem, FUNC_1(VAR_7, VAR_11), 0x0);




 FUNC_5(&VAR_7->mem, VAR_1, 0x0);
 FUNC_5(&VAR_7->mem, VAR_6, 0x0);




 FUNC_6(&VAR_7->mem, VAR_2, 0x0);
 FUNC_6(&VAR_7->mem, VAR_3, 0x0);





 VAR_9 = FUNC_4(&VAR_7->mem, VAR_4);
 FUNC_6(&VAR_7->mem, VAR_4, VAR_9 & ~VAR_5);
 VAR_10 = 10000;
 do {
  VAR_9 = FUNC_4(&VAR_7->mem, VAR_4);
  if (!(VAR_9 & VAR_5))
   break;
  FUNC_0(10);
 } while (--VAR_10);
 if (VAR_9 & VAR_5) {
  FUNC_7(VAR_7->dev, "Unable to put hdac in reset\n");
  return (VAR_0);
 }


 if (!VAR_8)
  return (0);

 FUNC_0(100);
 VAR_9 = FUNC_4(&VAR_7->mem, VAR_4);
 FUNC_6(&VAR_7->mem, VAR_4, VAR_9 | VAR_5);
 VAR_10 = 10000;
 do {
  VAR_9 = FUNC_4(&VAR_7->mem, VAR_4);
  if (VAR_9 & VAR_5)
   break;
  FUNC_0(10);
 } while (--VAR_10);
 if (!(VAR_9 & VAR_5)) {
  FUNC_7(VAR_7->dev, "Device stuck in reset\n");
  return (VAR_0);
 }







 FUNC_0(1000);

 return (0);
}
