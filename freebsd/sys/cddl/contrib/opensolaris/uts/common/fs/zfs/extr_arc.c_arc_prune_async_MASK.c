
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int p_pfunc; int p_refcnt; int p_adjust; } ;
typedef TYPE_1__ arc_prune_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static void
FUNC_9(int64_t VAR_7)
{
 arc_prune_t *VAR_8;

 FUNC_3(&VAR_3);
 for (VAR_8 = FUNC_1(&VAR_2); VAR_8 != ((void*)0);
     VAR_8 = FUNC_2(&VAR_2, VAR_8)) {

  if (FUNC_7(&VAR_8->p_refcnt) >= 2)
   continue;

  FUNC_6(&VAR_8->p_refcnt, VAR_8->p_pfunc);
  VAR_8->p_adjust = VAR_7;
  if (FUNC_5(VAR_5, VAR_4,
      VAR_8, VAR_1) == VAR_0) {
   FUNC_8(&VAR_8->p_refcnt, VAR_8->p_pfunc);
   continue;
  }
  FUNC_0(VAR_6);
 }
 FUNC_4(&VAR_3);
}
