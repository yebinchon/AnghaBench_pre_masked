
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct port_stats {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,int,struct port_stats*) ;

void FUNC_1(struct adapter *VAR_0, int VAR_1,
  struct port_stats *VAR_2,
  struct port_stats *VAR_3)
{
 u64 *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, VAR_1, VAR_2);
 for (VAR_6 = 0, VAR_4 = (u64 *)VAR_2, VAR_5 = (u64 *)VAR_3 ;
   VAR_6 < (sizeof(struct port_stats)/sizeof(u64)) ;
   VAR_6++, VAR_4++, VAR_5++)
  *VAR_4 -= *VAR_5;
}
