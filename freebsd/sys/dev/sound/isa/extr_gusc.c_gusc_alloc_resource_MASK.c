
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct resource {int dummy; } ;
typedef TYPE_1__* sc_p ;
typedef int rman_res_t ;
typedef int device_t ;
struct TYPE_3__ {int* io_alloced; int irq_alloced; int* drq_alloced; struct resource** drq; struct resource* irq; struct resource** io; } ;





 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static struct resource *
FUNC_1(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
      rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 sc_p VAR_8;
 int *VAR_9, VAR_10, VAR_11;
 struct resource **VAR_12;

 VAR_8 = FUNC_0(VAR_0);
 switch (VAR_2) {
 case 129:
  VAR_9 = VAR_8->io_alloced;
  VAR_12 = VAR_8->io;
  VAR_10 = 2;
  VAR_11 = 2;
  break;
 case 128:
  VAR_9 = &VAR_8->irq_alloced;
  VAR_12 = &VAR_8->irq;
  VAR_10 = 0;
  VAR_11 = 2;
  break;
 case 130:
  VAR_9 = VAR_8->drq_alloced;
  VAR_12 = VAR_8->drq;
  VAR_10 = 1;
  VAR_11 = 1;
  break;
 default:
  return (((void*)0));
 }

 if (*VAR_3 > VAR_10 || VAR_9[*VAR_3] == VAR_11)
  return (((void*)0));

 VAR_9[*VAR_3]++;
 return (VAR_12[*VAR_3]);
}
