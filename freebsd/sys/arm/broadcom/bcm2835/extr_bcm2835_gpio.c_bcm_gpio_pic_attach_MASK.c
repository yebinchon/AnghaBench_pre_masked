
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct bcm_gpio_softc {int sc_dev; TYPE_1__* sc_isrcs; } ;
struct TYPE_2__ {size_t bgi_irq; int bgi_isrc; int bgi_mode; int bgi_mask; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,char*,char const*,size_t) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct bcm_gpio_softc *VAR_3)
{
 int VAR_4;
 uint32_t VAR_5;
 const char *VAR_6;

 VAR_6 = FUNC_2(VAR_3->sc_dev);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->sc_isrcs[VAR_5].bgi_irq = VAR_5;
  VAR_3->sc_isrcs[VAR_5].bgi_mask = FUNC_0(VAR_5);
  VAR_3->sc_isrcs[VAR_5].bgi_mode = VAR_2;

  VAR_4 = FUNC_3(&VAR_3->sc_isrcs[VAR_5].bgi_isrc,
      VAR_3->sc_dev, 0, "%s,%u", VAR_6, VAR_5);
  if (VAR_4 != 0)
   return (VAR_4);
 }
 if (FUNC_4(VAR_3->sc_dev,
     FUNC_1(FUNC_5(VAR_3->sc_dev))) == ((void*)0))
  return (VAR_1);

 return (0);
}
