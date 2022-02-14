
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_range {scalar_t__ start; scalar_t__ end; } ;
struct sym_entry {scalar_t__ addr; } ;


 size_t FUNC_0 (struct text_range*) ;
 struct text_range* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sym_entry *VAR_1)
{
 size_t VAR_2;
 struct text_range *VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2) {
  VAR_3 = &VAR_0[VAR_2];

  if (VAR_1->addr >= VAR_3->start && VAR_1->addr <= VAR_3->end)
   return 1;
 }

 return 0;
}
