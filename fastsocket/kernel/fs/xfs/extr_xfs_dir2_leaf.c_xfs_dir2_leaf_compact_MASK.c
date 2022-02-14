
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ stale; scalar_t__ count; } ;
struct TYPE_12__ {TYPE_2__ hdr; TYPE_1__* ents; } ;
typedef TYPE_3__ xfs_dir2_leaf_t ;
struct TYPE_13__ {TYPE_3__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_14__ {int trans; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_10__ {int address; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*,int,int) ;
 int FUNC_5 (int ,TYPE_4__*) ;

void
FUNC_6(
 xfs_da_args_t *VAR_1,
 xfs_dabuf_t *VAR_2)
{
 int VAR_3;
 xfs_dir2_leaf_t *VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->data;
 if (!VAR_4->hdr.stale) {
  return;
 }



 for (VAR_3 = VAR_6 = 0, VAR_5 = -1; VAR_3 < FUNC_2(VAR_4->hdr.count); VAR_3++) {
  if (FUNC_3(VAR_4->ents[VAR_3].address) == VAR_0)
   continue;



  if (VAR_3 > VAR_6) {
   if (VAR_5 == -1)
    VAR_5 = VAR_6;
   VAR_4->ents[VAR_6] = VAR_4->ents[VAR_3];
  }
  VAR_6++;
 }



 FUNC_0(FUNC_2(VAR_4->hdr.stale) == VAR_3 - VAR_6);
 FUNC_1(&VAR_4->hdr.count, -(FUNC_2(VAR_4->hdr.stale)));
 VAR_4->hdr.stale = 0;
 FUNC_5(VAR_1->trans, VAR_2);
 if (VAR_5 != -1)
  FUNC_4(VAR_1->trans, VAR_2, VAR_5, VAR_6 - 1);
}
