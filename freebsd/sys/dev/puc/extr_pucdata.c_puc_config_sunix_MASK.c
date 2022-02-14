
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct puc_softc {int dummy; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;


 int VAR_1 ;
 intptr_t VAR_2 ;
 int FUNC_0 (struct puc_softc*,int ,int,intptr_t*) ;

__attribute__((used)) static int
FUNC_1(struct puc_softc *VAR_3, enum puc_cfg_cmd VAR_4, int VAR_5,
    intptr_t *VAR_6)
{
 int VAR_7;

 switch (VAR_4) {
 case 129:
  VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_5, VAR_6);
  if (VAR_7 != 0)
   return (VAR_7);
  *VAR_6 = (*VAR_6 == VAR_2) ? (VAR_5 & 3) * 8 : 0;
  return (0);
 case 128:
  VAR_7 = FUNC_0(VAR_3, VAR_1, VAR_5, VAR_6);
  if (VAR_7 != 0)
   return (VAR_7);
  *VAR_6 = (*VAR_6 == VAR_2 && VAR_5 <= 3) ? 0x10 : 0x14;
  return (0);
 default:
  break;
 }
 return (VAR_0);
}
