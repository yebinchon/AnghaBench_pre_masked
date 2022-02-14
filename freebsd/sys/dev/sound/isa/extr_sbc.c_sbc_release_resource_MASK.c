
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbc_softc {int* io_alloced; int* drq_alloced; int* irq_alloced; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 struct sbc_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, device_t VAR_4, int VAR_5, int VAR_6,
   struct resource *VAR_7)
{
 struct sbc_softc *VAR_8;
 int *VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_3);
 switch (VAR_5) {
 case 129:
  VAR_9 = VAR_8->io_alloced;
  VAR_10 = VAR_1 - 1;
  break;
 case 130:
  VAR_9 = VAR_8->drq_alloced;
  VAR_10 = VAR_0 - 1;
  break;
 case 128:
  VAR_9 = VAR_8->irq_alloced;
  VAR_10 = VAR_2 - 1;
  break;
 default:
  return (1);
 }

 if (VAR_6 > VAR_10 || VAR_9[VAR_6] == 0)
  return (1);

 VAR_9[VAR_6]--;
 return (0);
}
