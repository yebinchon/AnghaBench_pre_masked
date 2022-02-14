
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_resources {int dwa_freelist; } ;
struct bhndb_dw_rentry {struct resource* dw_res; } ;
struct bhndb_dw_alloc {int rnid; int refs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct bhndb_dw_rentry*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (struct bhndb_dw_alloc*,struct resource*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 struct bhndb_dw_rentry* FUNC_4 (int,int ,int ) ;

int
FUNC_5(struct bhndb_resources *VAR_4, struct bhndb_dw_alloc *VAR_5,
    struct resource *VAR_6)
{
 struct bhndb_dw_rentry *VAR_7;

 FUNC_0(FUNC_2(VAR_5, VAR_6) == ((void*)0),
     ("double-retain of dynamic window for same resource"));



 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1, VAR_2);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_7->dw_res = VAR_6;
 FUNC_1(&VAR_5->refs, VAR_7, VAR_3);


 FUNC_3(VAR_4->dwa_freelist, VAR_5->rnid);

 return (0);
}
