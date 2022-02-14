
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {TYPE_2__* sym; } ;
struct hist_entry {TYPE_1__ ms; scalar_t__ level; } ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int start; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int64_t
FUNC_2(struct hist_entry *VAR_0, struct hist_entry *VAR_1)
{
 u64 VAR_2, VAR_3;

 if (!VAR_0->ms.sym && !VAR_1->ms.sym)
  return VAR_1->level - VAR_0->level;

 if (!VAR_0->ms.sym || !VAR_1->ms.sym)
  return FUNC_1(VAR_0->ms.sym, VAR_1->ms.sym);

 if (VAR_0->ms.sym == VAR_1->ms.sym)
  return 0;

 VAR_2 = VAR_0->ms.sym->start;
 VAR_3 = VAR_1->ms.sym->start;

 return FUNC_0(VAR_0->ms.sym, VAR_1->ms.sym, VAR_2, VAR_3);
}
