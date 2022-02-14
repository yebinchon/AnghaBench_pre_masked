
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_header {int dummy; } ;
struct ovs_dp_stats {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static size_t FUNC_2(void)
{
 size_t VAR_1 = FUNC_0(sizeof(struct ovs_header));

 VAR_1 += FUNC_1(VAR_0);
 VAR_1 += FUNC_1(sizeof(struct ovs_dp_stats));

 return VAR_1;
}
