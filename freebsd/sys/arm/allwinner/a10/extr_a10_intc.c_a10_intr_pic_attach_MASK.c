
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct intr_pic {int dummy; } ;
struct a10_aintc_softc {int sc_dev; TYPE_1__* isrcs; } ;
struct TYPE_2__ {size_t irq; int isrc; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 intptr_t FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,char*,char const*,size_t) ;
 int FUNC_3 (int ,intptr_t,int ,struct a10_aintc_softc*,int ) ;
 struct intr_pic* FUNC_4 (int ,intptr_t) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct a10_aintc_softc *VAR_3)
{
 struct intr_pic *VAR_4;
 int VAR_5;
 uint32_t VAR_6;
 const char *VAR_7;
 intptr_t VAR_8;

 VAR_7 = FUNC_1(VAR_3->sc_dev);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3->isrcs[VAR_6].irq = VAR_6;

  VAR_5 = FUNC_2(&VAR_3->isrcs[VAR_6].isrc,
      VAR_3->sc_dev, 0, "%s,%u", VAR_7, VAR_6);
  if (VAR_5 != 0)
   return (VAR_5);
 }

 VAR_8 = FUNC_0(FUNC_5(VAR_3->sc_dev));
 VAR_4 = FUNC_4(VAR_3->sc_dev, VAR_8);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 return (FUNC_3(VAR_3->sc_dev, VAR_8, VAR_2, VAR_3, 0));
}
