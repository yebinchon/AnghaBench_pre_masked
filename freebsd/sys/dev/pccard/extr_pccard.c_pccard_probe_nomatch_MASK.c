
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int manufacturer; int product; int ** cis1_info; } ;
struct pccard_softc {TYPE_1__ card; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int function; int number; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;
 struct pccard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct pccard_ivar *VAR_2 = FUNC_0(VAR_1);
 struct pccard_function *VAR_3 = VAR_2->pf;
 struct pccard_softc *VAR_4 = FUNC_1(VAR_0);
 int VAR_5;

 FUNC_2(VAR_0, "<unknown card>");
 FUNC_3(" (manufacturer=0x%04x, product=0x%04x, function_type=%d) "
     "at function %d\n", VAR_4->card.manufacturer, VAR_4->card.product,
     VAR_3->function, VAR_3->number);
 FUNC_2(VAR_0, "   CIS info: ");
 for (VAR_5 = 0; VAR_4->card.cis1_info[VAR_5] != ((void*)0) && VAR_5 < 4; VAR_5++)
  FUNC_3("%s%s", VAR_5 > 0 ? ", " : "", VAR_4->card.cis1_info[VAR_5]);
 FUNC_3("\n");
 return;
}
