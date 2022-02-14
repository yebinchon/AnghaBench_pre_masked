
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_softc {int dev; } ;
struct mmc_command {int flags; int * data; scalar_t__ arg; int opcode; } ;
typedef int device_t ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct mmc_command*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct mmc_softc *VAR_6)
{
 device_t VAR_7;
 struct mmc_command VAR_8;

 VAR_7 = VAR_6->dev;
 FUNC_3(VAR_7, VAR_5);
 FUNC_4(VAR_7);
 FUNC_1(1);

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.opcode = VAR_2;
 VAR_8.arg = 0;
 VAR_8.flags = VAR_3 | VAR_1;
 VAR_8.data = ((void*)0);
 FUNC_2(VAR_6->dev, VAR_6->dev, &VAR_8, VAR_0);
 FUNC_1(1);

 FUNC_3(VAR_7, VAR_4);
 FUNC_4(VAR_7);
 FUNC_1(1);
}
