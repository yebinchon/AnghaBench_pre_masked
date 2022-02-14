
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_iscache_lru_entry {int section; struct pt_iscache_lru_entry* next; } ;


 int FUNC_0 (struct pt_iscache_lru_entry*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pt_iscache_lru_entry *VAR_0)
{
 while (VAR_0) {
  struct pt_iscache_lru_entry *VAR_1;
  int VAR_2;

  VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;

  VAR_2 = FUNC_1(VAR_1->section);
  if (VAR_2 < 0)
   return VAR_2;

  FUNC_0(VAR_1);
 }

 return 0;
}
