
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ti_aintc_softc {int sc_dev; TYPE_1__* aintc_isrcs; } ;
struct intr_pic {int dummy; } ;
struct TYPE_2__ {size_t tai_irq; int tai_isrc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 intptr_t FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,char*,char const*,size_t) ;
 int FUNC_3 (int ,intptr_t,int ,struct ti_aintc_softc*,int ) ;
 struct intr_pic* FUNC_4 (int ,intptr_t) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct ti_aintc_softc *VAR_3)
{
 struct intr_pic *VAR_4;
 int VAR_5;
 uint32_t VAR_6;
 const char *VAR_7;
 intptr_t VAR_8;

 VAR_7 = FUNC_1(VAR_3->sc_dev);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3->aintc_isrcs[VAR_6].tai_irq = VAR_6;

  VAR_5 = FUNC_2(&VAR_3->aintc_isrcs[VAR_6].tai_isrc,
      VAR_3->sc_dev, 0, "%s,%u", VAR_7, VAR_6);
  if (VAR_5 != 0)
   return (VAR_5);
 }

 VAR_8 = FUNC_0(FUNC_5(VAR_3->sc_dev));
 VAR_4 = FUNC_4(VAR_3->sc_dev, VAR_8);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 return (FUNC_3(VAR_3->sc_dev, VAR_8, VAR_2, VAR_3, 0));
}
