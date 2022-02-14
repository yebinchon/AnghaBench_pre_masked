
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ecore_eth_stats {int dummy; } ;
struct ecore_dev {scalar_t__ reset_stats; } ;


 int FUNC_0 (struct ecore_eth_stats*,int ,int) ;
 int FUNC_1 (struct ecore_dev*,struct ecore_eth_stats*) ;

void FUNC_2(struct ecore_dev *VAR_0,
      struct ecore_eth_stats *VAR_1)
{
 u32 VAR_2;

 if (!VAR_0) {
  FUNC_0(VAR_1, 0, sizeof(*VAR_1));
  return;
 }

 FUNC_1(VAR_0, VAR_1);

 if (!VAR_0->reset_stats)
  return;


 for (VAR_2 = 0; VAR_2 < sizeof(struct ecore_eth_stats) / sizeof(u64); VAR_2++)
  ((u64 *)VAR_1)[VAR_2] -= ((u64 *)VAR_0->reset_stats)[VAR_2];
}
