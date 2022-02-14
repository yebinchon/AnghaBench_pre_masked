
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int magic; } ;
struct TYPE_10__ {int count; TYPE_1__ info; } ;
struct TYPE_11__ {TYPE_3__ hdr; TYPE_2__* ents; } ;
typedef TYPE_4__ xfs_dir2_leaf_t ;
struct TYPE_12__ {TYPE_4__* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
struct TYPE_9__ {int hashval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(
 xfs_dabuf_t *VAR_1,
 xfs_dabuf_t *VAR_2)
{
 xfs_dir2_leaf_t *VAR_3;
 xfs_dir2_leaf_t *VAR_4;

 VAR_3 = VAR_1->data;
 VAR_4 = VAR_2->data;
 FUNC_0(FUNC_1(VAR_3->hdr.info.magic) == VAR_0);
 FUNC_0(FUNC_1(VAR_4->hdr.info.magic) == VAR_0);
 if (FUNC_1(VAR_3->hdr.count) > 0 &&
     FUNC_1(VAR_4->hdr.count) > 0 &&
     (FUNC_2(VAR_4->ents[0].hashval) < FUNC_2(VAR_3->ents[0].hashval) ||
      FUNC_2(VAR_4->ents[FUNC_1(VAR_4->hdr.count) - 1].hashval) <
      FUNC_2(VAR_3->ents[FUNC_1(VAR_3->hdr.count) - 1].hashval)))
  return 1;
 return 0;
}
