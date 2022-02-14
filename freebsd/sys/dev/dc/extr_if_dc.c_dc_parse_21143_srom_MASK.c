
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int* dc_srom; } ;
struct dc_leaf_hdr {int dc_mcnt; } ;
struct dc_eblock_sym {int dummy; } ;
struct dc_eblock_sia {int dummy; } ;
struct dc_eblock_mii {int dummy; } ;
struct dc_eblock_hdr {int dc_type; int dc_len; } ;





 int FUNC_0 (struct dc_softc*,struct dc_eblock_mii*) ;
 int FUNC_1 (struct dc_softc*,struct dc_eblock_sia*) ;
 int FUNC_2 (struct dc_softc*,struct dc_eblock_sym*) ;

__attribute__((used)) static int
FUNC_3(struct dc_softc *VAR_0)
{
 struct dc_leaf_hdr *VAR_1;
 struct dc_eblock_hdr *VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;
 char *VAR_7;

 VAR_4 = 0;
 VAR_6 = VAR_0->dc_srom[27];
 VAR_1 = (struct dc_leaf_hdr *)&(VAR_0->dc_srom[VAR_6]);

 VAR_7 = (char *)VAR_1;
 VAR_7 += sizeof(struct dc_leaf_hdr) - 1;



 for (VAR_5 = 0; VAR_5 < VAR_1->dc_mcnt; VAR_5++) {
  VAR_2 = (struct dc_eblock_hdr *)VAR_7;
  if (VAR_2->dc_type == 130)
      VAR_4++;

  VAR_7 += (VAR_2->dc_len & 0x7F);
  VAR_7++;
 }





 VAR_7 = (char *)VAR_1;
 VAR_7 += sizeof(struct dc_leaf_hdr) - 1;
 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_1->dc_mcnt; VAR_5++) {
  VAR_2 = (struct dc_eblock_hdr *)VAR_7;
  switch (VAR_2->dc_type) {
  case 130:
   VAR_3 = FUNC_0(VAR_0, (struct dc_eblock_mii *)VAR_2);
   break;
  case 129:
   if (! VAR_4)
    VAR_3 = FUNC_1(VAR_0,
        (struct dc_eblock_sia *)VAR_2);
   break;
  case 128:
   if (! VAR_4)
    VAR_3 = FUNC_2(VAR_0,
        (struct dc_eblock_sym *)VAR_2);
   break;
  default:

   break;
  }
  VAR_7 += (VAR_2->dc_len & 0x7F);
  VAR_7++;
 }
 return (VAR_3);
}
