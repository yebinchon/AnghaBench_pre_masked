
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sw_flow_key {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(const struct sw_flow_key *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_1((u32 *)((u8 *)VAR_0 + VAR_1),
        FUNC_0(VAR_2 - VAR_1, sizeof(u32)), 0);
}
