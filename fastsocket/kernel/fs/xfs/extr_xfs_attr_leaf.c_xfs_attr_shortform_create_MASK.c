
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ di_aformat; } ;
struct TYPE_13__ {TYPE_1__ i_d; TYPE_4__* i_afp; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_12__ {scalar_t__ if_data; } ;
struct TYPE_14__ {scalar_t__ if_bytes; int if_flags; TYPE_2__ if_u1; } ;
typedef TYPE_4__ xfs_ifork_t ;
struct TYPE_15__ {int trans; TYPE_3__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_16__ {int totsize; scalar_t__ count; } ;
typedef TYPE_6__ xfs_attr_sf_hdr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int) ;

void
FUNC_5(xfs_da_args_t *VAR_7)
{
 xfs_attr_sf_hdr_t *VAR_8;
 xfs_inode_t *VAR_9;
 xfs_ifork_t *VAR_10;

 FUNC_2(VAR_7);

 VAR_9 = VAR_7->dp;
 FUNC_0(VAR_9 != ((void*)0));
 VAR_10 = VAR_9->i_afp;
 FUNC_0(VAR_10 != ((void*)0));
 FUNC_0(VAR_10->if_bytes == 0);
 if (VAR_9->i_d.di_aformat == VAR_1) {
  VAR_10->if_flags &= ~VAR_3;
  VAR_9->i_d.di_aformat = VAR_2;
  VAR_10->if_flags |= VAR_4;
 } else {
  FUNC_0(VAR_10->if_flags & VAR_4);
 }
 FUNC_3(VAR_9, sizeof(*VAR_8), VAR_0);
 VAR_8 = (xfs_attr_sf_hdr_t *)VAR_10->if_u1.if_data;
 VAR_8->count = 0;
 VAR_8->totsize = FUNC_1(sizeof(*VAR_8));
 FUNC_4(VAR_7->trans, VAR_9, VAR_6 | VAR_5);
}
