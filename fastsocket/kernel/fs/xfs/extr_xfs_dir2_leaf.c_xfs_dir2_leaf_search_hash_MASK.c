
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int count; } ;
struct TYPE_9__ {TYPE_1__ hdr; TYPE_3__* ents; } ;
typedef TYPE_2__ xfs_dir2_leaf_t ;
struct TYPE_10__ {int hashval; } ;
typedef TYPE_3__ xfs_dir2_leaf_entry_t ;
typedef scalar_t__ xfs_dahash_t ;
struct TYPE_11__ {TYPE_2__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_12__ {scalar_t__ hashval; } ;
typedef TYPE_5__ xfs_da_args_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(
 xfs_da_args_t *VAR_0,
 xfs_dabuf_t *VAR_1)
{
 xfs_dahash_t VAR_2=0;
 xfs_dahash_t VAR_3;
 int VAR_4;
 int VAR_5;
 xfs_dir2_leaf_t *VAR_6;
 xfs_dir2_leaf_entry_t *VAR_7;
 int VAR_8=0;

 VAR_6 = VAR_1->data;

 if (!VAR_6->hdr.count)
  return 0;





 for (VAR_7 = VAR_6->ents, VAR_5 = 0, VAR_4 = FUNC_0(VAR_6->hdr.count) - 1,
  VAR_3 = VAR_0->hashval;
      VAR_5 <= VAR_4; ) {
  VAR_8 = (VAR_5 + VAR_4) >> 1;
  if ((VAR_2 = FUNC_1(VAR_7[VAR_8].hashval)) == VAR_3)
   break;
  if (VAR_2 < VAR_3)
   VAR_5 = VAR_8 + 1;
  else
   VAR_4 = VAR_8 - 1;
 }



 if (VAR_2 == VAR_3) {
  while (VAR_8 > 0 && FUNC_1(VAR_7[VAR_8 - 1].hashval) == VAR_3) {
   VAR_8--;
  }
 }



 else if (VAR_2 < VAR_3)
  VAR_8++;
 return VAR_8;
}
