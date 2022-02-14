
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bt_rfd; int bt_rfp; int bt_msize; int bt_smap; int * bt_pinned; int bt_mp; } ;
struct TYPE_7__ {TYPE_2__* internal; } ;
typedef TYPE_1__ DB ;
typedef TYPE_2__ BTREE ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

int
FUNC_7(DB *VAR_5)
{
 BTREE *VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->internal;


 if (VAR_6->bt_pinned != ((void*)0)) {
  FUNC_5(VAR_6->bt_mp, VAR_6->bt_pinned, 0);
  VAR_6->bt_pinned = ((void*)0);
 }

 if (FUNC_2(VAR_5, 0) == VAR_0)
  return (VAR_0);


 VAR_7 = VAR_1;
 if (FUNC_0(VAR_6, VAR_4) && FUNC_6(VAR_6->bt_smap, VAR_6->bt_msize))
  VAR_7 = VAR_0;

 if (!FUNC_0(VAR_6, VAR_3)) {
  if (FUNC_0(VAR_6, VAR_2)) {
   if (FUNC_4(VAR_6->bt_rfp))
    VAR_7 = VAR_0;
  } else {
   if (FUNC_3(VAR_6->bt_rfd))
    VAR_7 = VAR_0;
  }
 }

 if (FUNC_1(VAR_5) == VAR_0)
  VAR_7 = VAR_0;

 return (VAR_7);
}
