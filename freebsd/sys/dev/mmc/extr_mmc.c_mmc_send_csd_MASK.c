
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int arg; int flags; int resp; int * data; int opcode; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,int ,struct mmc_command*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_4, uint16_t VAR_5, uint32_t *VAR_6)
{
 struct mmc_command VAR_7;
 int VAR_8;

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.opcode = VAR_3;
 VAR_7.arg = VAR_5 << 16;
 VAR_7.flags = VAR_2 | VAR_1;
 VAR_7.data = ((void*)0);
 VAR_8 = FUNC_2(VAR_4->dev, VAR_4->dev, &VAR_7, VAR_0);
 FUNC_0(VAR_6, VAR_7.resp, 4 * sizeof(uint32_t));
 return (VAR_8);
}
