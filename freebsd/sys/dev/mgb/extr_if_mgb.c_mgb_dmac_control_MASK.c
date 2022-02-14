
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;
typedef enum mgb_dmac_cmd { ____Placeholder_mgb_dmac_cmd } mgb_dmac_cmd ;


 int FUNC_0 (struct mgb_softc*,int ,int ) ;



 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct mgb_softc*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct mgb_softc *VAR_1, int VAR_2, int VAR_3,
    enum mgb_dmac_cmd VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 130:
  FUNC_0(VAR_1, VAR_0,
      FUNC_1(VAR_2, VAR_3));
  VAR_5 = FUNC_4(VAR_1, VAR_0, 0,
      FUNC_1(VAR_2, VAR_3));
  break;

 case 129:




  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, 128);
  if (VAR_5 != 0)
   return VAR_5;
  FUNC_0(VAR_1, VAR_0,
      FUNC_2(VAR_2, VAR_3));
  break;

 case 128:
  FUNC_0(VAR_1, VAR_0,
      FUNC_3(VAR_2, VAR_3));
  VAR_5 = FUNC_4(VAR_1, VAR_0,
      FUNC_3(VAR_2, VAR_3),
      FUNC_2(VAR_2, VAR_3));
  break;
 }
 return VAR_5;
}
