
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct tzic_softc {int dev; TYPE_1__* isrcs; } ;
struct intr_pic {int dummy; } ;
struct TYPE_2__ {size_t irq; int isrc; } ;


 int VAR_0 ;
 intptr_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,char*,char const*,size_t) ;
 int FUNC_3 (int ,intptr_t,int ,struct tzic_softc*,int ) ;
 struct intr_pic* FUNC_4 (int ,intptr_t) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(struct tzic_softc *VAR_3)
{
 struct intr_pic *VAR_4;
 const char *VAR_5;
 intptr_t VAR_6;
 int VAR_7;
 u_int VAR_8;

 VAR_5 = FUNC_1(VAR_3->dev);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_3->isrcs[VAR_8].irq = VAR_8;
  VAR_7 = FUNC_2(&VAR_3->isrcs[VAR_8].isrc,
      VAR_3->dev, 0, "%s,%u", VAR_5, VAR_8);
  if (VAR_7 != 0)
   return (VAR_7);
 }

 VAR_6 = FUNC_0(FUNC_5(VAR_3->dev));
 VAR_4 = FUNC_4(VAR_3->dev, VAR_6);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 return (FUNC_3(VAR_3->dev, VAR_6, VAR_2, VAR_3, 0));
}
