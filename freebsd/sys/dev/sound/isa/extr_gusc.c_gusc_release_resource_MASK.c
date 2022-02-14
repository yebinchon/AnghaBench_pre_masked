
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
typedef TYPE_1__* sc_p ;
typedef int device_t ;
struct TYPE_3__ {int* io_alloced; int irq_alloced; int* drq_alloced; } ;





 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
   struct resource *VAR_4)
{
 sc_p VAR_5;
 int *VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_0);
 switch (VAR_2) {
 case 129:
  VAR_6 = VAR_5->io_alloced;
  VAR_7 = 2;
  break;
 case 128:
  VAR_6 = &VAR_5->irq_alloced;
  VAR_7 = 0;
  break;
 case 130:
  VAR_6 = VAR_5->drq_alloced;
  VAR_7 = 1;
  break;
 default:
  return (1);
 }

 if (VAR_3 > VAR_7 || VAR_6[VAR_3] == 0)
  return (1);

 VAR_6[VAR_3]--;
 return (0);
}
