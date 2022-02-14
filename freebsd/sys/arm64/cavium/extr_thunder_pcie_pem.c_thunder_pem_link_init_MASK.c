
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct thunder_pem_softc {int id; int dev; int reg_bsh; int reg_bst; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct thunder_pem_softc*,int ) ;

__attribute__((used)) static int
FUNC_5(struct thunder_pem_softc *VAR_9)
{
 uint64_t VAR_10;


 VAR_10 = FUNC_1(VAR_9->reg_bst, VAR_9->reg_bsh, VAR_8);
 if ((VAR_10 & VAR_2) != VAR_3) {
  FUNC_3(VAR_9->dev, "PEM%d is not ON\n", VAR_9->id);
  return (VAR_0);
 }

 VAR_10 = FUNC_1(VAR_9->reg_bst, VAR_9->reg_bsh, VAR_4);
 VAR_10 |= VAR_6;
 FUNC_2(VAR_9->reg_bst, VAR_9->reg_bsh, VAR_4, VAR_10);


 FUNC_0(1000);

 VAR_10 = FUNC_4(VAR_9, VAR_1);

 if (((VAR_10 & VAR_5) == 0) || ((VAR_10 & VAR_7) != 0)) {
  FUNC_3(VAR_9->dev, "PCIe RC: Port %d Link Timeout\n",
      VAR_9->id);
  return (VAR_0);
 }

 return (0);
}
