
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; int len; struct mmc_data* data; scalar_t__ arg; int opcode; } ;
typedef struct mmc_data uint32_t ;
typedef int uint16_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int flags; int len; struct mmc_command* data; scalar_t__ arg; int opcode; } ;
typedef int data ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mmc_data FUNC_0 (struct mmc_data) ;
 int FUNC_1 (struct mmc_data*,int ,int) ;
 int FUNC_2 (int ,int ,int ,struct mmc_data*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_5, uint16_t VAR_6, uint32_t *VAR_7)
{
 int VAR_8;
 struct mmc_command VAR_9;
 struct mmc_data VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_1(&VAR_10, 0, sizeof(VAR_10));

 FUNC_1(VAR_7, 0, 8);
 VAR_9.opcode = VAR_0;
 VAR_9.flags = VAR_4 | VAR_2;
 VAR_9.arg = 0;
 VAR_9.data = &VAR_10;

 VAR_10.data = VAR_7;
 VAR_10.len = 8;
 VAR_10.flags = VAR_3;

 VAR_8 = FUNC_2(VAR_5->dev, VAR_5->dev, VAR_6, &VAR_9, VAR_1);
 VAR_7[0] = FUNC_0(VAR_7[0]);
 VAR_7[1] = FUNC_0(VAR_7[1]);
 return (VAR_8);
}
