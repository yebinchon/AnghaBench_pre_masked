
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ has_children; } ;
struct hist_entry {int nr_rows; int sorted_chain; TYPE_1__ ms; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct hist_entry *VAR_0, bool VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->ms, VAR_1);

 if (VAR_0->ms.has_children) {
  int VAR_2 = FUNC_0(&VAR_0->sorted_chain, VAR_1);
  VAR_0->nr_rows = VAR_1 ? VAR_2 : 0;
 } else
  VAR_0->nr_rows = 0;
}
