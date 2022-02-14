
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct module_env {int fwds; TYPE_1__* hints; } ;
struct iter_hints_stub {struct delegpt* dp; } ;
struct delegpt {scalar_t__ has_parent_side_NS; } ;
struct TYPE_2__ {int tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct delegpt* FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct module_env* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 uint16_t VAR_3, struct delegpt** VAR_4)
{
 struct delegpt* VAR_5;
 struct iter_hints_stub* VAR_6;
 int VAR_7 = FUNC_0(VAR_1);



 if(!FUNC_1(VAR_1) && (VAR_6 = (struct iter_hints_stub*)
  FUNC_3(&VAR_0->hints->tree, VAR_1, VAR_2, VAR_7, VAR_3)) &&


  VAR_6->dp->has_parent_side_NS) {
  if(VAR_4) *VAR_4 = VAR_6->dp;
  return 0;
 }
 if((VAR_5 = FUNC_2(VAR_0->fwds, VAR_1, VAR_3)) &&


  VAR_5->has_parent_side_NS) {
  if(VAR_4) *VAR_4 = VAR_5;
  return 0;
 }
 return 1;
}
