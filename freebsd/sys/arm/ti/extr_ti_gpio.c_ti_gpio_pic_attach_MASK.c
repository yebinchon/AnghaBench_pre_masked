
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ti_gpio_softc {int sc_maxpin; int sc_dev; TYPE_1__* sc_isrcs; } ;
struct TYPE_2__ {size_t tgi_irq; int tgi_isrc; int tgi_mode; int tgi_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,char*,char const*,size_t) ;
 int * FUNC_4 (int ,int ) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ti_gpio_softc *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;
 const char *VAR_8;

 VAR_5->sc_isrcs = FUNC_5(sizeof(*VAR_5->sc_isrcs) * VAR_5->sc_maxpin, VAR_2,
     VAR_3 | VAR_4);

 VAR_8 = FUNC_2(VAR_5->sc_dev);
 for (VAR_7 = 0; VAR_7 < VAR_5->sc_maxpin; VAR_7++) {
  VAR_5->sc_isrcs[VAR_7].tgi_irq = VAR_7;
  VAR_5->sc_isrcs[VAR_7].tgi_mask = FUNC_1(VAR_7);
  VAR_5->sc_isrcs[VAR_7].tgi_mode = VAR_1;

  VAR_6 = FUNC_3(&VAR_5->sc_isrcs[VAR_7].tgi_isrc,
      VAR_5->sc_dev, 0, "%s,%u", VAR_8, VAR_7);
  if (VAR_6 != 0)
   return (VAR_6);
 }
 if (FUNC_4(VAR_5->sc_dev,
     FUNC_0(FUNC_6(VAR_5->sc_dev))) == ((void*)0))
  return (VAR_0);

 return (0);
}
