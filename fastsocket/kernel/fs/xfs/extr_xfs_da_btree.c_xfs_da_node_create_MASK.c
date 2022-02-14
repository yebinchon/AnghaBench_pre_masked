
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef int xfs_trans_t ;
struct TYPE_14__ {TYPE_3__* data; } ;
typedef TYPE_2__ xfs_dabuf_t ;
typedef int xfs_dablk_t ;
struct TYPE_13__ {scalar_t__ pad; void* magic; scalar_t__ back; scalar_t__ forw; } ;
struct TYPE_12__ {void* level; scalar_t__ count; TYPE_1__ info; } ;
struct TYPE_15__ {TYPE_11__ hdr; } ;
typedef TYPE_3__ xfs_da_intnode_t ;
struct TYPE_16__ {int dp; int * trans; } ;
typedef TYPE_4__ xfs_da_args_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_11__*,int) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,int ,int ,int,TYPE_2__**,int) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;

int
FUNC_6(xfs_da_args_t *VAR_1, xfs_dablk_t VAR_2, int VAR_3,
     xfs_dabuf_t **VAR_4, int VAR_5)
{
 xfs_da_intnode_t *VAR_6;
 xfs_dabuf_t *VAR_7;
 int VAR_8;
 xfs_trans_t *VAR_9;

 FUNC_3(VAR_1);

 VAR_9 = VAR_1->trans;
 VAR_8 = FUNC_4(VAR_9, VAR_1->dp, VAR_2, -1, &VAR_7, VAR_5);
 if (VAR_8)
  return(VAR_8);
 FUNC_0(VAR_7 != ((void*)0));
 VAR_6 = VAR_7->data;
 VAR_6->hdr.info.forw = 0;
 VAR_6->hdr.info.back = 0;
 VAR_6->hdr.info.magic = FUNC_2(VAR_0);
 VAR_6->hdr.info.pad = 0;
 VAR_6->hdr.count = 0;
 VAR_6->hdr.level = FUNC_2(VAR_3);

 FUNC_5(VAR_9, VAR_7,
  FUNC_1(VAR_6, &VAR_6->hdr, sizeof(VAR_6->hdr)));

 *VAR_4 = VAR_7;
 return(0);
}
