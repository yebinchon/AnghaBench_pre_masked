
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct puc_softc {int sc_nports; int sc_cfg_data; TYPE_1__* sc_bar; int sc_dev; struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int rid; } ;
struct puc_bar {int b_res; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;
struct TYPE_2__ {int b_rid; } ;


 int VAR_0 ;





 int VAR_1 ;
 intptr_t VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 struct puc_bar* FUNC_3 (struct puc_softc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct puc_softc *VAR_3, enum puc_cfg_cmd VAR_4, int VAR_5,
    intptr_t *VAR_6)
{
 const struct puc_cfg *VAR_7 = VAR_3->sc_cfg;
 int VAR_8;
 struct puc_bar *VAR_9;
 uint8_t VAR_10;

 switch (VAR_4) {
 case 128:
  FUNC_2(VAR_3->sc_dev, "%d UARTs detected\n",
   VAR_3->sc_nports);


  VAR_9 = FUNC_3(VAR_3, VAR_7->rid);
  if (VAR_9 == ((void*)0))
   return (VAR_0);
  for (VAR_8 = 0; VAR_8 < VAR_3->sc_nports; VAR_8++) {
   VAR_10 = FUNC_0(VAR_9->b_res, 0x1000 + (VAR_8 << 9) +
       0x92);
   FUNC_1(VAR_9->b_res, 0x1000 + (VAR_8 << 9) + 0x92,
       VAR_10 | 0x10);
  }
  return (0);
 case 132:
  *VAR_6 = 0x200;
  return (0);
 case 131:
  VAR_8 = 0;
  do {
   if (VAR_3->sc_bar[VAR_8++].b_rid != -1) {
    VAR_3->sc_cfg_data = 16;
    *VAR_6 = VAR_3->sc_cfg_data;
    return (0);
   }
  } while (VAR_8 < VAR_1);

  VAR_9 = FUNC_3(VAR_3, VAR_7->rid);
  if (VAR_9 == ((void*)0))
   return (VAR_0);

  VAR_10 = FUNC_0(VAR_9->b_res, 0x04);
  if (VAR_10 == 0)
   return (VAR_0);

  VAR_3->sc_cfg_data = VAR_10;
  *VAR_6 = VAR_3->sc_cfg_data;
  return (0);
 case 130:
  *VAR_6 = 0x1000 + (VAR_5 << 9);
  return (0);
 case 129:
  *VAR_6 = VAR_2;
  return (0);
 default:
  break;
 }
 return (VAR_0);
}
