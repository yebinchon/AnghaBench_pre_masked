
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_softc {int dev; } ;
struct mmc_command {int arg; int flags; int* resp; int * data; int opcode; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mmc_command*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct mmc_command*,int ) ;

__attribute__((used)) static int
FUNC_3(struct mmc_softc *VAR_8, uint32_t VAR_9, uint32_t *VAR_10)
{
 struct mmc_command VAR_11;
 int VAR_12 = VAR_2, VAR_13;

 FUNC_0(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.opcode = VAR_7;
 VAR_11.arg = VAR_9;
 VAR_11.flags = VAR_6 | VAR_1;
 VAR_11.data = ((void*)0);

 for (VAR_13 = 0; VAR_13 < 1000; VAR_13++) {
  VAR_12 = FUNC_2(VAR_8->dev, VAR_8->dev, &VAR_11, VAR_0);
  if (VAR_12 != VAR_2)
   break;
  if ((VAR_11.resp[0] & VAR_4) ||
      (VAR_9 & VAR_5) == 0)
   break;
  VAR_12 = VAR_3;
  FUNC_1(10);
 }
 if (VAR_10 && VAR_12 == VAR_2)
  *VAR_10 = VAR_11.resp[0];
 return (VAR_12);
}
