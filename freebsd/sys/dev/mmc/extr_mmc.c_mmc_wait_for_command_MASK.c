
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int opcode; int arg; int flags; int* resp; int * data; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,int ,struct mmc_command*,int) ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3, uint32_t VAR_4, uint32_t *VAR_5, int VAR_6)
{
 struct mmc_command VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.opcode = VAR_2;
 VAR_7.arg = VAR_3;
 VAR_7.flags = VAR_4;
 VAR_7.data = ((void*)0);
 VAR_8 = FUNC_2(VAR_1->dev, VAR_1->dev, &VAR_7, VAR_6);
 if (VAR_8)
  return (VAR_8);
 if (VAR_5) {
  if (VAR_4 & VAR_0)
   FUNC_0(VAR_5, VAR_7.resp, 4 * sizeof(uint32_t));
  else
   *VAR_5 = VAR_7.resp[0];
 }
 return (0);
}
