
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tp_fcoe_stats {int frames_ddp; int frames_drop; int octets_ddp; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adapter*,int*,int,scalar_t__,int) ;

void FUNC_1(struct adapter *VAR_3, unsigned int VAR_4,
         struct tp_fcoe_stats *VAR_5, bool VAR_6)
{
 u32 VAR_7[2];

 FUNC_0(VAR_3, &VAR_5->frames_ddp, 1, VAR_1 + VAR_4,
         VAR_6);

 FUNC_0(VAR_3, &VAR_5->frames_drop, 1,
         VAR_2 + VAR_4, VAR_6);

 FUNC_0(VAR_3, VAR_7, 2, VAR_0 + 2 * VAR_4,
         VAR_6);

 VAR_5->octets_ddp = ((u64)VAR_7[0] << 32) | VAR_7[1];
}
