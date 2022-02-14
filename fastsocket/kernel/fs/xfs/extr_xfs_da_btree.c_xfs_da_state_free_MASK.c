
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ bp; } ;
struct TYPE_10__ {int active; TYPE_2__* blk; } ;
struct TYPE_11__ {TYPE_1__ extrablk; scalar_t__ extravalid; TYPE_3__ path; } ;
typedef TYPE_4__ xfs_da_state_t ;
struct TYPE_9__ {scalar_t__ bp; } ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_0 ;

void
FUNC_4(xfs_da_state_t *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1->path.active; VAR_2++) {
  if (VAR_1->path.blk[VAR_2].bp)
   FUNC_2(VAR_1->path.blk[VAR_2].bp);
 }
 if (VAR_1->extravalid && VAR_1->extrablk.bp)
  FUNC_2(VAR_1->extrablk.bp);



 FUNC_0(VAR_0, VAR_1);
}
