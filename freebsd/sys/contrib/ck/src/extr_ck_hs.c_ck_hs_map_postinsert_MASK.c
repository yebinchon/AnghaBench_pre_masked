
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_hs_map {int n_entries; int capacity; } ;
struct ck_hs {int dummy; } ;


 int FUNC_0 (struct ck_hs*,int) ;

__attribute__((used)) static void
FUNC_1(struct ck_hs *VAR_0, struct ck_hs_map *VAR_1)
{

 VAR_1->n_entries++;
 if ((VAR_1->n_entries << 1) > VAR_1->capacity)
  FUNC_0(VAR_0, VAR_1->capacity << 1);

 return;
}
