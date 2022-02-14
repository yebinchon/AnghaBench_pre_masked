
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pad_softc {TYPE_1__* gpio_map; } ;
struct TYPE_4__ {int enabled; void (* ih ) (void*) ;void* ih_user; } ;
struct TYPE_3__ {int ngpio; scalar_t__ pend; int port; } ;


 int FUNC_0 (struct pad_softc*,int ,scalar_t__) ;
 int FUNC_1 (struct pad_softc*,int ,scalar_t__,int) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct pad_softc *VAR_2;
 void (*VAR_3) (void *);
 void *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8,VAR_9;
 int VAR_10,VAR_11;

 VAR_2 = VAR_1;

 VAR_10 = 0;
 for (VAR_8 = 0; VAR_2->gpio_map[VAR_8].ngpio != -1; VAR_8++) {
  VAR_6 = 0;
  VAR_5 = VAR_2->gpio_map[VAR_8].ngpio;

  if (VAR_2->gpio_map[VAR_8].pend == 0) {
   VAR_10 += VAR_5;
   continue;
  }

  VAR_7 = FUNC_0(VAR_2, VAR_2->gpio_map[VAR_8].port, VAR_2->gpio_map[VAR_8].pend);

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
   if (VAR_7 & (1 << VAR_9)) {
    VAR_6 = 1;

    VAR_11 = (VAR_10 + VAR_9);
    if (VAR_0[VAR_11].enabled == 1) {
     VAR_3 = VAR_0[VAR_11].ih;
     VAR_4 = VAR_0[VAR_11].ih_user;
     VAR_3(VAR_4);
    }
   }
  }

  if (VAR_6) {

   FUNC_1(VAR_2, VAR_2->gpio_map[VAR_8].port, VAR_2->gpio_map[VAR_8].pend, VAR_7);
  }

  VAR_10 += VAR_5;
 }
}
