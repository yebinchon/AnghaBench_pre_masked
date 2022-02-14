
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct bhndb_resources {int dwa_freelist; } ;
struct bhndb_dw_rentry {int dummy; } ;
struct bhndb_dw_alloc {int rnid; int refs; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bhndb_dw_rentry*,int ) ;
 int VAR_0 ;
 struct bhndb_dw_rentry* FUNC_3 (struct bhndb_dw_alloc*,struct resource*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (struct bhndb_dw_rentry*,int ) ;

void
FUNC_6(struct bhndb_resources *VAR_2, struct bhndb_dw_alloc *VAR_3,
    struct resource *VAR_4)
{
 struct bhndb_dw_rentry *VAR_5;


 VAR_5 = FUNC_3(VAR_3, VAR_4);
 FUNC_0(VAR_5 != ((void*)0), ("over release of resource entry"));

 FUNC_2(VAR_5, VAR_1);
 FUNC_5(VAR_5, VAR_0);


 if (FUNC_1(&VAR_3->refs))
  FUNC_4(VAR_2->dwa_freelist, VAR_3->rnid);
}
