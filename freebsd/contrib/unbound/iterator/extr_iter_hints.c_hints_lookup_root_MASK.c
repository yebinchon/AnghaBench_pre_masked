
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iter_hints_stub {struct delegpt* dp; } ;
struct iter_hints {int tree; } ;
struct delegpt {int dummy; } ;


 scalar_t__ FUNC_0 (int *,int *,int,int,int ) ;

struct delegpt*
FUNC_1(struct iter_hints* VAR_0, uint16_t VAR_1)
{
 uint8_t VAR_2 = 0;
 struct iter_hints_stub *VAR_3;
 VAR_3 = (struct iter_hints_stub*)FUNC_0(&VAR_0->tree,
  &VAR_2, 1, 1, VAR_1);
 if(!VAR_3)
  return ((void*)0);
 return VAR_3->dp;
}
