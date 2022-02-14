
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int (* config_function ) (struct puc_softc*,int,int,intptr_t*) ;intptr_t clock; int const ports; int d_ofs; intptr_t rid; int d_rid; int * desc; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 intptr_t VAR_2 ;
 intptr_t VAR_3 ;
 intptr_t VAR_4 ;
 int FUNC_0 (struct puc_softc*,int,int,intptr_t*) ;

int
FUNC_1(struct puc_softc *VAR_5, enum puc_cfg_cmd VAR_6, int VAR_7, intptr_t *VAR_8)
{
 const struct puc_cfg *VAR_9 = VAR_5->sc_cfg;
 int VAR_10;

 if (VAR_9->config_function != ((void*)0)) {
  VAR_10 = VAR_9->config_function(VAR_5, VAR_6, VAR_7, VAR_8);
  if (!VAR_10)
   return (0);
 } else
  VAR_10 = VAR_0;

 switch (VAR_6) {
 case 151:
  if (VAR_9->clock < 0)
   return (VAR_10);
  *VAR_8 = VAR_9->clock;
  return (0);
 case 150:
  if (VAR_9->desc == ((void*)0))
   return (VAR_10);
  *VAR_8 = (intptr_t)VAR_9->desc;
  return (0);
 case 149:
  *VAR_8 = VAR_2;
  return (0);
 case 148:

  *VAR_8 = 8;
  return (0);
 case 147:

  switch (VAR_9->ports) {
  case 128:
   return (VAR_10);
  case 140:
  case 139:
   *VAR_8 = 1;
   return (0);
  case 138:
  case 136:
  case 135:
   *VAR_8 = 2;
   return (0);
  case 137:
  case 134:
  case 133:
   *VAR_8 = 3;
   return (0);
  case 132:
   *VAR_8 = 4;
   return (0);
  case 131:
   *VAR_8 = 5;
   return (0);
  case 130:
   *VAR_8 = 6;
   return (0);
  case 129:
   *VAR_8 = 8;
   return (0);
  case 142:
   *VAR_8 = 12;
   return (0);
  case 141:
   *VAR_8 = 16;
   return (0);
  }
  break;
 case 146:

  if (VAR_9->d_ofs < 0)
   return (VAR_10);
  *VAR_8 = VAR_7 * VAR_9->d_ofs;
  return (0);
 case 145:

  if (VAR_7 == 0) {
   if (VAR_9->rid < 0)
    return (VAR_10);
   *VAR_8 = VAR_9->rid;
   return (0);
  }
  if (VAR_9->d_rid < 0)
   return (VAR_10);
  if (VAR_9->rid < 0) {
   VAR_10 = FUNC_1(VAR_5, 145, 0, VAR_8);
   if (VAR_10)
    return (VAR_10);
  } else
   *VAR_8 = VAR_9->rid;
  *VAR_8 += VAR_7 * VAR_9->d_rid;
  return (0);
 case 144:

  if (VAR_9->ports == 128)
   return (VAR_10);
  switch (VAR_7) {
  case 0:
   if (VAR_9->ports == 140 ||
       VAR_9->ports == 136)
    *VAR_8 = VAR_3;
   else
    *VAR_8 = VAR_4;
   return (0);
  case 1:
   if (VAR_9->ports == 138 ||
       VAR_9->ports == 137 ||
       VAR_9->ports == 136)
    *VAR_8 = VAR_3;
   else
    *VAR_8 = VAR_4;
   return (0);
  case 2:
   if (VAR_9->ports == 137 ||
       VAR_9->ports == 134)
    *VAR_8 = VAR_3;
   else
    *VAR_8 = VAR_4;
   return (0);
  case 4:
   if (VAR_9->ports == 131)
    *VAR_8 = VAR_3;
   else
    *VAR_8 = VAR_4;
   return (0);
  }
  *VAR_8 = VAR_4;
  return (0);
 case 143:
  *VAR_8 = VAR_1;
  return (0);
 }

 return (VAR_1);
}
