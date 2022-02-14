
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_malloc {int (* free ) (struct ck_ht_map*,int ,int) ;} ;
struct ck_ht_map {int size; } ;


 int FUNC_0 (struct ck_ht_map*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ck_malloc *VAR_0, struct ck_ht_map *VAR_1, bool VAR_2)
{

 VAR_0->free(VAR_1, VAR_1->size, VAR_2);
 return;
}
