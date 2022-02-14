
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {struct bhndb_dw_alloc* dw_alloc; int dwa_count; int dwa_freelist; } ;
struct bhndb_dw_alloc {int refs; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static inline struct bhndb_dw_alloc *
FUNC_3(struct bhndb_resources *VAR_0)
{
 struct bhndb_dw_alloc *VAR_1;
 int VAR_2;

 FUNC_2(VAR_0->dwa_freelist, VAR_0->dwa_count, &VAR_2);
 if (VAR_2 == -1)
  return (((void*)0));

 VAR_1 = &VAR_0->dw_alloc[VAR_2];

 FUNC_0(FUNC_1(&VAR_1->refs),
     ("free list out of sync with refs"));

 return (VAR_1);
}
