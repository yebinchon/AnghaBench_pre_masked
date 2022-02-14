
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhndb_resources {int dwa_freelist; } ;
struct bhndb_dw_alloc {int rnid; int refs; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline bool
FUNC_3(struct bhndb_resources *VAR_0, struct bhndb_dw_alloc *VAR_1)
{
 bool VAR_2 = FUNC_1(&VAR_1->refs);

 FUNC_0(VAR_2 == !FUNC_2(VAR_0->dwa_freelist, VAR_1->rnid),
     ("refs out of sync with free list"));

 return (VAR_2);
}
