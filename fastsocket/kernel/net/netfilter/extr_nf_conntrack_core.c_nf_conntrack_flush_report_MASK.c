
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct __nf_ct_flush_report {int report; int pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ,struct __nf_ct_flush_report*) ;

void FUNC_1(struct net *VAR_1, u32 VAR_2, int VAR_3)
{
 struct __nf_ct_flush_report VAR_4 = {
  .pid = VAR_2,
  .report = VAR_3,
 };
 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
