
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_pem_softc {int reg_bst; int dev; } ;
typedef scalar_t__ bus_space_handle_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct thunder_pem_softc *VAR_3,
    int VAR_4, int VAR_5)
{
 uint64_t VAR_6;
 bus_space_handle_t VAR_7 = 0;

 FUNC_0(VAR_5 >= 0 && VAR_5 <= VAR_0, ("Invalid SLI index"));

 if (VAR_4 == 0)
  VAR_7 = VAR_1;
 else if (VAR_4 == 1)
  VAR_7 = VAR_2;
 else
  FUNC_4(VAR_3->dev, "SLI group is not correct\n");

 if (VAR_7) {

  VAR_6 = FUNC_2(VAR_3->reg_bst, VAR_7,
      FUNC_1(VAR_5));
  VAR_6 &= ~(0xFFFFFFFFUL);
  FUNC_3(VAR_3->reg_bst, VAR_7,
      FUNC_1(VAR_5), VAR_6);
 }
}
