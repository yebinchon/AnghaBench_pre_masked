
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct mmcsd_part {int dummy; } ;
struct mmc_ioc_multi_cmd {int num_of_cmds; scalar_t__ cmds; } ;
struct mmc_ioc_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void const*,struct mmc_ioc_cmd*,int) ;
 int FUNC_1 (struct mmc_ioc_cmd*,int ) ;
 struct mmc_ioc_cmd* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct mmcsd_part*,struct mmc_ioc_cmd*,int) ;
 int FUNC_4 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_5(struct mmcsd_part *VAR_8, u_long VAR_9, void *VAR_10, int VAR_11,
    struct thread *VAR_12)
{
 struct mmc_ioc_cmd *VAR_13;
 struct mmc_ioc_multi_cmd *VAR_14;
 int VAR_15, VAR_16;
 u_long VAR_17, VAR_18;

 if ((VAR_11 & VAR_3) == 0)
  return (VAR_0);

 VAR_16 = FUNC_4(VAR_12, VAR_7);
 if (VAR_16 != 0)
  return (VAR_16);

 VAR_16 = 0;
 switch (VAR_9) {
 case 129:
  VAR_13 = VAR_10;
  VAR_16 = FUNC_3(VAR_8, VAR_13, VAR_11);
  break;
 case 128:
  VAR_14 = VAR_10;
  if (VAR_14->num_of_cmds == 0)
   break;
  if (VAR_14->num_of_cmds > VAR_4)
   return (VAR_1);
  VAR_17 = VAR_14->num_of_cmds;
  VAR_18 = sizeof(*VAR_13) * VAR_17;
  VAR_13 = FUNC_2(VAR_18, VAR_5, VAR_6);
  VAR_16 = FUNC_0((const void *)VAR_14->cmds, VAR_13, VAR_18);
  if (VAR_16 == 0) {
   for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
    VAR_16 = FUNC_3(VAR_8, &VAR_13[VAR_15], VAR_11);
    if (VAR_16 != 0)
     break;
   }
  }
  FUNC_1(VAR_13, VAR_5);
  break;
 default:
  return (VAR_2);
 }
 return (VAR_16);
}
