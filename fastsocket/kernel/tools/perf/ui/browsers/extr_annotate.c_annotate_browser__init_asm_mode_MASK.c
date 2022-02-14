
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_entries; } ;
struct annotate_browser {int nr_asm_entries; TYPE_1__ b; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct annotate_browser *VAR_0)
{
 FUNC_0(&VAR_0->b);
 VAR_0->b.nr_entries = VAR_0->nr_asm_entries;
}
