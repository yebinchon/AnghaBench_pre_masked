
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recent_table {int lru_list; } ;
struct recent_entry {int lru_list; int index; int nstamps; int * stamps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct recent_table *VAR_2, struct recent_entry *VAR_3)
{
 VAR_3->index %= VAR_0;
 VAR_3->stamps[VAR_3->index++] = VAR_1;
 if (VAR_3->index > VAR_3->nstamps)
  VAR_3->nstamps = VAR_3->index;
 FUNC_0(&VAR_3->lru_list, &VAR_2->lru_list);
}
