
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct puc_softc {struct puc_cfg* sc_cfg; } ;
struct puc_cfg {int rid; } ;
struct puc_bar {int b_res; } ;
typedef enum puc_cfg_cmd { ____Placeholder_puc_cfg_cmd } puc_cfg_cmd ;


 int VAR_0 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 struct puc_bar* FUNC_2 (struct puc_softc*,int ) ;

__attribute__((used)) static int
FUNC_3(struct puc_softc *VAR_1, enum puc_cfg_cmd VAR_2, int VAR_3,
    intptr_t *VAR_4)
{
 static int VAR_5[] = { 0x251, 0x3f0, 0 };
 const struct puc_cfg *VAR_6 = VAR_1->sc_cfg;
 struct puc_bar *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 uint8_t VAR_11;

 switch (VAR_2) {
 case 128:
  VAR_7 = FUNC_2(VAR_1, VAR_6->rid);
  if (VAR_7 == ((void*)0))
   return (VAR_0);


  FUNC_1(VAR_7->b_res, 0x250, 0x89);
  FUNC_1(VAR_7->b_res, 0x3f0, 0x87);
  FUNC_1(VAR_7->b_res, 0x3f0, 0x87);
  VAR_9 = 0;
  while (VAR_5[VAR_9] != 0) {
   VAR_8 = VAR_5[VAR_9];
   FUNC_1(VAR_7->b_res, VAR_8, 0x09);
   VAR_11 = FUNC_0(VAR_7->b_res, VAR_8 + 1);
   if ((VAR_11 & 0x0f) != 0x0c)
    return (VAR_0);
   FUNC_1(VAR_7->b_res, VAR_8, 0x16);
   VAR_11 = FUNC_0(VAR_7->b_res, VAR_8 + 1);
   FUNC_1(VAR_7->b_res, VAR_8, 0x16);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, VAR_11 | 0x04);
   FUNC_1(VAR_7->b_res, VAR_8, 0x16);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, VAR_11 & ~0x04);
   VAR_10 = VAR_5[VAR_9] & 0x300;
   FUNC_1(VAR_7->b_res, VAR_8, 0x23);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, (VAR_10 + 0x78) >> 2);
   FUNC_1(VAR_7->b_res, VAR_8, 0x24);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, (VAR_10 + 0xf8) >> 2);
   FUNC_1(VAR_7->b_res, VAR_8, 0x25);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, (VAR_10 + 0xe8) >> 2);
   FUNC_1(VAR_7->b_res, VAR_8, 0x17);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, 0x03);
   FUNC_1(VAR_7->b_res, VAR_8, 0x28);
   FUNC_1(VAR_7->b_res, VAR_8 + 1, 0x43);
   VAR_9++;
  }
  FUNC_1(VAR_7->b_res, 0x250, 0xaa);
  FUNC_1(VAR_7->b_res, 0x3f0, 0xaa);
  return (0);
 case 129:
  switch (VAR_3) {
  case 0:
   *VAR_4 = 0x2f8;
   return (0);
  case 1:
   *VAR_4 = 0x2e8;
   return (0);
  case 2:
   *VAR_4 = 0x3f8;
   return (0);
  case 3:
   *VAR_4 = 0x3e8;
   return (0);
  case 4:
   *VAR_4 = 0x278;
   return (0);
  }
  break;
 default:
  break;
 }
 return (VAR_0);
}
