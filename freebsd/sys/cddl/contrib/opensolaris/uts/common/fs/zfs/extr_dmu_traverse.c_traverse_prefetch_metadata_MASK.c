
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_9__ {int td_flags; scalar_t__ td_min_txg; int td_spa; int * td_resume; } ;
typedef TYPE_1__ traverse_data_t ;
struct TYPE_10__ {scalar_t__ blk_birth; } ;
typedef TYPE_2__ blkptr_t ;
typedef int arc_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,TYPE_2__ const*,int *,int *,int ,int ,int*,int const*) ;

__attribute__((used)) static void
FUNC_5(traverse_data_t *VAR_6,
    const blkptr_t *VAR_7, const zbookmark_phys_t *VAR_8)
{
 arc_flags_t VAR_9 = VAR_0 | VAR_1;

 if (!(VAR_6->td_flags & VAR_3))
  return;





 if (VAR_6->td_resume != ((void*)0) && !FUNC_3(VAR_6->td_resume))
  return;
 if (FUNC_2(VAR_7) || VAR_7->blk_birth <= VAR_6->td_min_txg)
  return;
 if (FUNC_0(VAR_7) == 0 && FUNC_1(VAR_7) != VAR_2)
  return;

 (void) FUNC_4(((void*)0), VAR_6->td_spa, VAR_7, ((void*)0), ((void*)0),
     VAR_5, VAR_4, &VAR_9, VAR_8);
}
