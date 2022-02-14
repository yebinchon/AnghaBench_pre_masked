
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef int ainsn_t ;
struct TYPE_4__ {int min_insn_issue_delay; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_1 (state_t VAR_1, ainsn_t VAR_2)
{
  VAR_0++;
  VAR_1->min_insn_issue_delay = FUNC_0 (VAR_1, VAR_2);
  return VAR_1->min_insn_issue_delay;
}
