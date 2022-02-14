
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sbc_softc {int* io_alloced; int* drq_alloced; int* irq_alloced; struct resource** irq; struct resource** drq; struct resource** io; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 struct sbc_softc* FUNC_0 (int ) ;

__attribute__((used)) static struct resource *
FUNC_1(device_t VAR_4, device_t VAR_5, int VAR_6, int *VAR_7,
     rman_res_t VAR_8, rman_res_t VAR_9, rman_res_t VAR_10, u_int VAR_11)
{
 struct sbc_softc *VAR_12;
 int *VAR_13, VAR_14, VAR_15;
 struct resource **VAR_16;

 VAR_12 = FUNC_0(VAR_4);
 switch (VAR_6) {
 case 129:
  VAR_13 = VAR_12->io_alloced;
  VAR_16 = VAR_12->io;
  VAR_14 = VAR_2 - 1;
  VAR_15 = 1;
  break;
 case 130:
  VAR_13 = VAR_12->drq_alloced;
  VAR_16 = VAR_12->drq;
  VAR_14 = VAR_0 - 1;
  VAR_15 = 1;
  break;
 case 128:
  VAR_13 = VAR_12->irq_alloced;
  VAR_16 = VAR_12->irq;
  VAR_14 = VAR_3 - 1;
  VAR_15 = VAR_1;
  break;
 default:
  return (((void*)0));
 }

 if (*VAR_7 > VAR_14 || VAR_13[*VAR_7] == VAR_15)
  return (((void*)0));

 VAR_13[*VAR_7]++;
 return (VAR_16[*VAR_7]);
}
