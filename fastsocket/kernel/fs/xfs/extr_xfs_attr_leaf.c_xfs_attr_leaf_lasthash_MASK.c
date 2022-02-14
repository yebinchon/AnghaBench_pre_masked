
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_dahash_t ;
struct TYPE_10__ {TYPE_5__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_8__ {int magic; } ;
struct TYPE_9__ {int count; TYPE_2__ info; } ;
struct TYPE_11__ {TYPE_3__ hdr; TYPE_1__* entries; } ;
typedef TYPE_5__ xfs_attr_leafblock_t ;
struct TYPE_7__ {int hashval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

xfs_dahash_t
FUNC_3(xfs_dabuf_t *VAR_1, int *VAR_2)
{
 xfs_attr_leafblock_t *VAR_3;

 VAR_3 = VAR_1->data;
 FUNC_0(FUNC_1(VAR_3->hdr.info.magic) == VAR_0);
 if (VAR_2)
  *VAR_2 = FUNC_1(VAR_3->hdr.count);
 if (!VAR_3->hdr.count)
  return(0);
 return FUNC_2(VAR_3->entries[FUNC_1(VAR_3->hdr.count)-1].hashval);
}
