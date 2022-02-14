
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tp_usm_stats {int frames; int drops; int octets; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,int*,int,int ,int) ;

void FUNC_1(struct adapter *VAR_1, struct tp_usm_stats *VAR_2,
        bool VAR_3)
{
 u32 VAR_4[4];

 FUNC_0(VAR_1, VAR_4, 4, VAR_0, VAR_3);

 VAR_2->frames = VAR_4[0];
 VAR_2->drops = VAR_4[1];
 VAR_2->octets = ((u64)VAR_4[2] << 32) | VAR_4[3];
}
