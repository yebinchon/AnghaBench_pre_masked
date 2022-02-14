
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int func_count; struct func_list* funclist; struct func_map* func_map; } ;
struct func_map {int * mod; scalar_t__ addr; int * func; } ;
struct func_list {struct func_list* next; int * mod; scalar_t__ addr; int * func; } ;


 int FUNC_0 (struct func_list*) ;
 int VAR_0 ;
 struct func_map* FUNC_1 (int) ;
 int FUNC_2 (struct func_map*,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct pevent *VAR_1)
{
 struct func_list *VAR_2;
 struct func_list *VAR_3;
 struct func_map *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(sizeof(*VAR_4) * (VAR_1->func_count + 1));
 if (!VAR_4)
  return -1;

 VAR_2 = VAR_1->funclist;

 VAR_5 = 0;
 while (VAR_2) {
  VAR_4[VAR_5].func = VAR_2->func;
  VAR_4[VAR_5].addr = VAR_2->addr;
  VAR_4[VAR_5].mod = VAR_2->mod;
  VAR_5++;
  VAR_3 = VAR_2;
  VAR_2 = VAR_2->next;
  FUNC_0(VAR_3);
 }

 FUNC_2(VAR_4, VAR_1->func_count, sizeof(*VAR_4), VAR_0);




 VAR_4[VAR_1->func_count].func = ((void*)0);
 VAR_4[VAR_1->func_count].addr = 0;
 VAR_4[VAR_1->func_count].mod = ((void*)0);

 VAR_1->func_map = VAR_4;
 VAR_1->funclist = ((void*)0);

 return 0;
}
