
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int z_os; int * z_ctldir; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_10__ {struct mount* v_mountedhere; } ;
typedef TYPE_2__ vnode_t ;
struct TYPE_11__ {TYPE_1__* vfs_data; } ;
typedef TYPE_3__ vfs_t ;
typedef scalar_t__ uint64_t ;
struct mount {int dummy; } ;
typedef int snapname ;
typedef int sfs_node_t ;
typedef int cred_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,char*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_4 (struct mount*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ,scalar_t__,TYPE_2__**) ;
 int FUNC_8 (struct mount*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

int
FUNC_11(vfs_t *VAR_7, int VAR_8, cred_t *VAR_9)
{
 char VAR_10[VAR_5];
 zfsvfs_t *VAR_11 = VAR_7->vfs_data;
 struct mount *VAR_12;
 vnode_t *VAR_13;
 vnode_t *VAR_14;
 sfs_node_t *VAR_15;
 sfs_node_t *VAR_16;
 uint64_t VAR_17;
 int VAR_18;

 FUNC_0(VAR_11->z_ctldir != ((void*)0));

 VAR_17 = 0;
 for (;;) {
  uint64_t VAR_19;

  FUNC_5(FUNC_2(VAR_11->z_os), VAR_1);
  VAR_18 = FUNC_3(VAR_11->z_os, sizeof(VAR_10),
      VAR_10, &VAR_19, &VAR_17, ((void*)0));
  FUNC_6(FUNC_2(VAR_11->z_os), VAR_1);
  if (VAR_18 != 0) {
   if (VAR_18 == VAR_0)
    VAR_18 = 0;
   break;
  }

  for (;;) {
   VAR_18 = FUNC_7(VAR_7, VAR_2,
       VAR_4, VAR_19, &VAR_14);
   if (VAR_18 != 0 || VAR_14 == ((void*)0))
    break;

   VAR_12 = VAR_14->v_mountedhere;







   if (VAR_12 != ((void*)0))
    break;
   FUNC_9(VAR_14);
  }
  if (VAR_18 != 0)
   break;
  if (VAR_14 == ((void*)0))
   continue;






  FUNC_8(VAR_12);
  VAR_18 = FUNC_4(VAR_12, VAR_8, VAR_6);
  FUNC_1(VAR_18 == 0, FUNC_10(VAR_14) == 1,
      ("extra references after unmount"));
  FUNC_9(VAR_14);
  if (VAR_18 != 0)
   break;
 }
 FUNC_1((VAR_8 & VAR_3) != 0, VAR_18 == 0,
     ("force unmounting failed"));
 return (VAR_18);
}
