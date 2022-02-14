
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ di_format; } ;
struct TYPE_19__ {TYPE_4__ i_d; TYPE_3__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_20__ {TYPE_7__* data; } ;
typedef TYPE_6__ xfs_dabuf_t ;
struct TYPE_15__ {int magic; } ;
struct TYPE_16__ {int count; TYPE_1__ info; } ;
struct TYPE_21__ {TYPE_2__ hdr; TYPE_9__* entries; } ;
typedef TYPE_7__ xfs_attr_leafblock_t ;
struct TYPE_22__ {int namelen; int valuelen; } ;
typedef TYPE_8__ xfs_attr_leaf_name_local_t ;
struct TYPE_23__ {int flags; } ;
typedef TYPE_9__ xfs_attr_leaf_entry_t ;
struct xfs_attr_sf_hdr {int dummy; } ;
struct xfs_attr_sf_entry {int dummy; } ;
struct TYPE_17__ {int m_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_8__* FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_5__*,int) ;

int
FUNC_4(xfs_dabuf_t *VAR_6, xfs_inode_t *VAR_7)
{
 xfs_attr_leafblock_t *VAR_8;
 xfs_attr_leaf_entry_t *VAR_9;
 xfs_attr_leaf_name_local_t *VAR_10;
 int VAR_11, VAR_12;

 VAR_8 = VAR_6->data;
 FUNC_0(FUNC_1(VAR_8->hdr.info.magic) == VAR_1);

 VAR_9 = &VAR_8->entries[0];
 VAR_11 = sizeof(struct xfs_attr_sf_hdr);
 for (VAR_12 = 0; VAR_12 < FUNC_1(VAR_8->hdr.count); VAR_9++, VAR_12++) {
  if (VAR_9->flags & VAR_0)
   continue;
  if (!(VAR_9->flags & VAR_2))
   return(0);
  VAR_10 = FUNC_2(VAR_8, VAR_12);
  if (VAR_10->namelen >= VAR_3)
   return(0);
  if (FUNC_1(VAR_10->valuelen) >= VAR_3)
   return(0);
  VAR_11 += sizeof(struct xfs_attr_sf_entry)-1
    + VAR_10->namelen
    + FUNC_1(VAR_10->valuelen);
 }
 if ((VAR_7->i_mount->m_flags & VAR_5) &&
     (VAR_7->i_d.di_format != VAR_4) &&
     (VAR_11 == sizeof(struct xfs_attr_sf_hdr)))
  return(-1);
 return(FUNC_3(VAR_7, VAR_11));
}
