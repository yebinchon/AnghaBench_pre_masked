
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* v_data; } ;
typedef TYPE_1__ vnode_t ;
struct TYPE_9__ {int va_nlink; int va_nodeid; scalar_t__ va_flags; int va_atime; int va_type; int va_mode; scalar_t__ va_seq; scalar_t__ va_nblocks; scalar_t__ va_blksize; scalar_t__ va_rdev; scalar_t__ va_gid; scalar_t__ va_uid; } ;
typedef TYPE_2__ vattr_t ;
typedef int timestruc_t ;
struct TYPE_10__ {int sn_id; } ;
typedef TYPE_3__ sfs_node_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(vnode_t *VAR_2, vattr_t *VAR_3)
{
 timestruc_t VAR_4;
 sfs_node_t *VAR_5;

 VAR_5 = VAR_2->v_data;

 VAR_3->va_uid = 0;
 VAR_3->va_gid = 0;
 VAR_3->va_rdev = 0;




 VAR_3->va_blksize = 0;
 VAR_3->va_nblocks = 0;
 VAR_3->va_seq = 0;
 FUNC_1(VAR_2, VAR_3);
 VAR_3->va_mode = VAR_1;
 VAR_3->va_type = VAR_0;



 FUNC_0(&VAR_4);
 VAR_3->va_atime = VAR_4;

 VAR_3->va_flags = 0;

 VAR_3->va_nodeid = VAR_5->sn_id;


 VAR_3->va_nlink = 2;
}
