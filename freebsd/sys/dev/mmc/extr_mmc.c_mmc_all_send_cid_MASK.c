
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int flags; int resp; int * data; scalar_t__ arg; int opcode; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct mmc_command*,int ,int) ;
 int FUNC_2 (int ,int ,struct mmc_command*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_4, uint32_t *VAR_5)
{
 struct mmc_command VAR_6;
 int VAR_7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.opcode = VAR_1;
 VAR_6.arg = 0;
 VAR_6.flags = VAR_3 | VAR_2;
 VAR_6.data = ((void*)0);
 VAR_7 = FUNC_2(VAR_4->dev, VAR_4->dev, &VAR_6, VAR_0);
 FUNC_0(VAR_5, VAR_6.resp, 4 * sizeof(uint32_t));
 return (VAR_7);
}
