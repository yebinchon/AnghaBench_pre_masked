
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int prodext; char** cis1_info; int product; int manufacturer; } ;
struct pccard_softc {TYPE_1__ card; } ;
struct pccard_ivar {struct pccard_function* pf; } ;
struct pccard_function {int pf_funce_disk_interface; int pf_funce_disk_power; int number; int function; int pf_funce_lan_nid; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pccard_ivar* FUNC_0 (int ) ;
 struct pccard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,uintptr_t*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t *VAR_5)
{
 struct pccard_ivar *VAR_6 = FUNC_0(VAR_3);
 struct pccard_function *VAR_7 = VAR_6->pf;
 struct pccard_softc *VAR_8 = FUNC_1(VAR_2);

 if (!VAR_7)
  FUNC_3("No pccard function pointer");
 switch (VAR_4) {
 default:
  return (VAR_0);
 case 135:
  *(uint16_t *)VAR_5 = VAR_7->pf_funce_disk_interface |
      (VAR_7->pf_funce_disk_power << 8);
  break;
 case 136:
  FUNC_2(VAR_7->pf_funce_lan_nid, VAR_5, VAR_1);
  break;
 case 129:
  *(uint32_t *)VAR_5 = VAR_8->card.manufacturer;
  break;
 case 131:
  *(uint32_t *)VAR_5 = VAR_8->card.product;
  break;
 case 132:
  *(uint16_t *)VAR_5 = VAR_8->card.prodext;
  break;
 case 134:
  *(uint32_t *)VAR_5 = VAR_7->function;
  break;
 case 133:
  *(uint32_t *)VAR_5 = VAR_7->number;
  break;
 case 128:
  *(const char **)VAR_5 = VAR_8->card.cis1_info[0];
  break;
 case 130:
  *(const char **)VAR_5 = VAR_8->card.cis1_info[1];
  break;
 case 138:
  *(const char **)VAR_5 = VAR_8->card.cis1_info[2];
  break;
 case 137:
  *(const char **)VAR_5 = VAR_8->card.cis1_info[3];
  break;
 }
 return (0);
}
