
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct TYPE_3__ {int qf_flags; int qf_type; } ;
struct TYPE_4__ {struct xfs_mount* li_mountp; } ;
struct xfs_qoff_logitem {struct xfs_qoff_logitem* qql_start_lip; TYPE_1__ qql_format; TYPE_2__ qql_item; } ;
struct xfs_mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfs_qoff_logitem* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfs_mount*,TYPE_2__*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

struct xfs_qoff_logitem *
FUNC_2(
 struct xfs_mount *VAR_4,
 struct xfs_qoff_logitem *VAR_5,
 uint VAR_6)
{
 struct xfs_qoff_logitem *VAR_7;

 VAR_7 = FUNC_0(sizeof(struct xfs_qoff_logitem), VAR_0);

 FUNC_1(VAR_4, &VAR_7->qql_item, VAR_1, VAR_5 ?
   &VAR_3 : &VAR_2);
 VAR_7->qql_item.li_mountp = VAR_4;
 VAR_7->qql_format.qf_type = VAR_1;
 VAR_7->qql_format.qf_flags = VAR_6;
 VAR_7->qql_start_lip = VAR_5;
 return VAR_7;
}
