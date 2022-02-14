
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zilog_t ;
typedef int zbookmark_phys_t ;
typedef int spa_t ;
struct TYPE_3__ {scalar_t__ pd_bytes_fetched; int pd_mtx; int pd_cv; scalar_t__ pd_cancel; } ;
typedef TYPE_1__ prefetch_data_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;
typedef int arc_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int const*,int *,int *,int ,int,int*,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_9(spa_t *VAR_8, zilog_t *VAR_9, const blkptr_t *VAR_10,
    const zbookmark_phys_t *VAR_11, const dnode_phys_t *VAR_12, void *VAR_13)
{
 prefetch_data_t *VAR_14 = VAR_13;
 arc_flags_t VAR_15 = VAR_0 | VAR_1 |
     VAR_2;

 FUNC_0(VAR_14->pd_bytes_fetched >= 0);
 if (VAR_10 == ((void*)0))
  return (0);
 if (VAR_14->pd_cancel)
  return (FUNC_2(VAR_3));

 if (!FUNC_8(VAR_14, VAR_10))
  return (0);

 FUNC_6(&VAR_14->pd_mtx);
 while (!VAR_14->pd_cancel && VAR_14->pd_bytes_fetched >= VAR_7)
  FUNC_5(&VAR_14->pd_cv, &VAR_14->pd_mtx);
 VAR_14->pd_bytes_fetched += FUNC_1(VAR_10);
 FUNC_4(&VAR_14->pd_cv);
 FUNC_7(&VAR_14->pd_mtx);

 (void) FUNC_3(((void*)0), VAR_8, VAR_10, ((void*)0), ((void*)0), VAR_6,
     VAR_4 | VAR_5, &VAR_15, VAR_11);

 return (0);
}
