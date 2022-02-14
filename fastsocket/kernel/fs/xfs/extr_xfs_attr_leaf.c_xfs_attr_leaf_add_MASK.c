
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {TYPE_6__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
struct TYPE_20__ {scalar_t__ index; TYPE_9__* trans; int valuelen; int namelen; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_16__ {int magic; } ;
struct TYPE_23__ {TYPE_7__* freemap; int holes; int firstused; int count; TYPE_1__ info; } ;
struct TYPE_21__ {TYPE_8__ hdr; } ;
typedef TYPE_6__ xfs_attr_leafblock_t ;
struct TYPE_22__ {int size; int base; } ;
typedef TYPE_7__ xfs_attr_leaf_map_t ;
typedef TYPE_8__ xfs_attr_leaf_hdr_t ;
typedef int xfs_attr_leaf_entry_t ;
struct TYPE_24__ {TYPE_3__* t_mountp; } ;
struct TYPE_17__ {int sb_blocksize; } ;
struct TYPE_18__ {TYPE_2__ m_sb; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int) ;
 int FUNC_5 (TYPE_9__*,TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ,int *) ;

int
FUNC_7(xfs_dabuf_t *VAR_3, xfs_da_args_t *VAR_4)
{
 xfs_attr_leafblock_t *VAR_5;
 xfs_attr_leaf_hdr_t *VAR_6;
 xfs_attr_leaf_map_t *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

 FUNC_3(VAR_4);

 VAR_5 = VAR_3->data;
 FUNC_0(FUNC_2(VAR_5->hdr.info.magic) == VAR_1);
 FUNC_0((VAR_4->index >= 0)
  && (VAR_4->index <= FUNC_2(VAR_5->hdr.count)));
 VAR_6 = &VAR_5->hdr;
 VAR_9 = FUNC_6(VAR_4->namelen, VAR_4->valuelen,
      VAR_4->trans->t_mountp->m_sb.sb_blocksize, ((void*)0));





 VAR_8 = (FUNC_2(VAR_6->count) + 1)
     * sizeof(xfs_attr_leaf_entry_t)
     + sizeof(xfs_attr_leaf_hdr_t);
 VAR_7 = &VAR_6->freemap[VAR_2-1];
 for (VAR_10 = 0, VAR_12 = VAR_2-1; VAR_12 >= 0; VAR_7--, VAR_12--) {
  if (VAR_8 > FUNC_2(VAR_6->firstused)) {
   VAR_10 += FUNC_2(VAR_7->size);
   continue;
  }
  if (!VAR_7->size)
   continue;
  VAR_11 = VAR_9;
  if (FUNC_2(VAR_7->base) < FUNC_2(VAR_6->firstused))
   VAR_11 += sizeof(xfs_attr_leaf_entry_t);
  if (FUNC_2(VAR_7->size) >= VAR_11) {
   VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_12);
   return(VAR_11);
  }
  VAR_10 += FUNC_2(VAR_7->size);
 }






 if (!VAR_6->holes && (VAR_10 < VAR_9))
  return(FUNC_1(VAR_0));





 FUNC_5(VAR_4->trans, VAR_3);





 if (FUNC_2(VAR_6->freemap[0].size)
    < (VAR_9 + sizeof(xfs_attr_leaf_entry_t)))
  return(FUNC_1(VAR_0));

 return(FUNC_4(VAR_3, VAR_4, 0));
}
