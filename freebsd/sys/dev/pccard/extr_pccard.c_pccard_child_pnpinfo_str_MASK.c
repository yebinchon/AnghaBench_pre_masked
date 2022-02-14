
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct TYPE_2__ {int * cis1_info; int product; int manufacturer; } ;
struct pccard_softc {TYPE_1__ card; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int function; } ;
typedef int device_t ;


 struct pccard_ivar* FUNC_0 (int ) ;
 struct pccard_softc* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sbuf*,int ) ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 int FUNC_5 (struct sbuf*,char*,size_t,int) ;
 int FUNC_6 (struct sbuf*,char*,...) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_2, device_t VAR_3, char *VAR_4,
    size_t VAR_5)
{
 struct pccard_ivar *VAR_6 = FUNC_0(VAR_3);
 struct pccard_function *VAR_7 = VAR_6->pf;
 struct pccard_softc *VAR_8 = FUNC_1(VAR_2);
 struct sbuf VAR_9;

 FUNC_5(&VAR_9, VAR_4, VAR_5, VAR_0 | VAR_1);
 FUNC_6(&VAR_9, "manufacturer=0x%04x product=0x%04x "
     "cisvendor=\"", VAR_8->card.manufacturer, VAR_8->card.product);
 FUNC_2(&VAR_9, VAR_8->card.cis1_info[0]);
 FUNC_6(&VAR_9, "\" cisproduct=\"");
 FUNC_2(&VAR_9, VAR_8->card.cis1_info[1]);
 FUNC_6(&VAR_9, "\" function_type=%d", VAR_7->function);
 FUNC_4(&VAR_9);
 FUNC_3(&VAR_9);

 return (0);
}
