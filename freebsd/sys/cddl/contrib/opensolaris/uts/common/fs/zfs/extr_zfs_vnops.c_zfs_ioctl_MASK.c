
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int z_id; TYPE_2__* z_zfsvfs; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_10__ {int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int vnode_t ;
typedef int u_long ;
typedef int offset_t ;
typedef int off ;
typedef int ndata ;
struct TYPE_11__ {int doi_fill_count; } ;
typedef TYPE_3__ dmu_object_info_t ;
typedef int cred_t ;
typedef int caller_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;






 int FUNC_5 (void*,int *,int,int) ;
 int FUNC_6 (int *,void*,int,int) ;
 int FUNC_7 (int ,int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,int,int *) ;

__attribute__((used)) static int
FUNC_10(vnode_t *VAR_2, u_long VAR_3, intptr_t VAR_4, int VAR_5, cred_t *VAR_6,
    int *VAR_7, caller_context_t *VAR_8)
{
 offset_t VAR_9;
 offset_t VAR_10;
 dmu_object_info_t VAR_11;
 int VAR_12;
 zfsvfs_t *VAR_13;
 znode_t *VAR_14;

 switch (VAR_3) {
 case 133:
 {
  return (0);





 }
 case 132:
 case 131:
 {
  return (0);
 }

 case 129:
 case 128:
 {




  VAR_9 = *(offset_t *)VAR_4;

  VAR_14 = FUNC_1(VAR_2);
  VAR_13 = VAR_14->z_zfsvfs;
  FUNC_2(VAR_13);
  FUNC_4(VAR_14);


  VAR_12 = FUNC_9(VAR_2, VAR_3, &VAR_9);
  FUNC_3(VAR_13);
  if (VAR_12)
   return (VAR_12);




  *(offset_t *)VAR_4 = VAR_9;

  return (0);
 }
 }
 return (FUNC_0(VAR_1));
}
