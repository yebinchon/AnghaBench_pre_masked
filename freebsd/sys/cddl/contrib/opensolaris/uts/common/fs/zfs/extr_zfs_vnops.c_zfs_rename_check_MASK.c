
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ z_id; int z_sa_hdl; int z_unlinked; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_11__ {scalar_t__ z_root; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
typedef int parent ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,scalar_t__*,int) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_10(znode_t *VAR_2, znode_t *VAR_3, znode_t *VAR_4)
{
 zfsvfs_t *VAR_5;
 znode_t *VAR_6, *VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_5 = VAR_4->z_zfsvfs;
 if (VAR_4 == VAR_2)
  return (FUNC_2(VAR_0));
 if (VAR_4 == VAR_3)
  return (0);
 if (VAR_4->z_id == VAR_5->z_root)
  return (0);
 VAR_6 = VAR_4;
 for (;;) {
  FUNC_0(!VAR_6->z_unlinked);
  if ((VAR_9 = FUNC_8(VAR_6->z_sa_hdl,
      FUNC_1(VAR_5), &VAR_8, sizeof (VAR_8))) != 0)
   break;

  if (VAR_8 == VAR_2->z_id) {
   VAR_9 = FUNC_2(VAR_0);
   break;
  }
  if (VAR_8 == VAR_5->z_root)
   break;
  if (VAR_8 == VAR_3->z_id)
   break;

  VAR_9 = FUNC_9(VAR_5, VAR_8, &VAR_7);
  if (VAR_9 != 0)
   break;

  if (VAR_6 != VAR_4)
   FUNC_3(FUNC_4(VAR_6),
       FUNC_6(FUNC_5(VAR_5->z_os)));
  VAR_6 = VAR_7;
 }

 if (VAR_9 == VAR_1)
  FUNC_7("checkpath: .. not a directory\n");
 if (VAR_6 != VAR_4)
  FUNC_3(FUNC_4(VAR_6),
      FUNC_6(FUNC_5(VAR_5->z_os)));
 return (VAR_9);
}
