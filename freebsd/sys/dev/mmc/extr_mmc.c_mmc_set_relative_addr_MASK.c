
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int arg; int flags; int * data; int opcode; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int ,int ,struct mmc_command*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mmc_softc *VAR_4, uint16_t VAR_5)
{
 struct mmc_command VAR_6;
 int VAR_7;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.opcode = VAR_3;
 VAR_6.arg = VAR_5 << 16;
 VAR_6.flags = VAR_2 | VAR_1;
 VAR_6.data = ((void*)0);
 VAR_7 = FUNC_1(VAR_4->dev, VAR_4->dev, &VAR_6, VAR_0);
 return (VAR_7);
}
