
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgb_softc {int dummy; } ;
typedef enum mgb_fct_cmd { ____Placeholder_mgb_fct_cmd } mgb_fct_cmd ;


 int FUNC_0 (struct mgb_softc*,int,int ) ;



 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mgb_softc*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct mgb_softc *VAR_0, int VAR_1, int VAR_2,
    enum mgb_fct_cmd VAR_3)
{

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_0, VAR_1, FUNC_3(VAR_2));
  return FUNC_4(VAR_0, VAR_1, 0, FUNC_3(VAR_2));
 case 129:
  FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_2));
  return (0);
 case 130:
  FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_2));
  return FUNC_4(VAR_0, VAR_1, 0, FUNC_2(VAR_2));
 }
}
