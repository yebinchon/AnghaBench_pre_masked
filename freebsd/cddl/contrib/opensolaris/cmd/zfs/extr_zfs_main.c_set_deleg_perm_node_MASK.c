
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zfs_deleg_who_type_t ;
typedef int uu_avl_t ;
typedef int uu_avl_index_t ;
struct TYPE_8__ {void* dp_descend; void* dp_local; } ;
typedef TYPE_1__ deleg_perm_t ;
struct TYPE_9__ {TYPE_1__ dpn_perm; } ;
typedef TYPE_2__ deleg_perm_node_t ;


 int VAR_0 ;
 void* VAR_1 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char const*) ;
 TYPE_2__* FUNC_2 (int *,TYPE_2__*,int *,int *) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4(uu_avl_t *VAR_2, deleg_perm_node_t *VAR_3,
    zfs_deleg_who_type_t VAR_4, const char *VAR_5, char VAR_6)
{
 uu_avl_index_t VAR_7 = 0;

 deleg_perm_node_t *VAR_8 = ((void*)0);
 deleg_perm_t *VAR_9 = &VAR_3->dpn_perm;

 FUNC_1(VAR_9, VAR_4, VAR_5);

 if ((VAR_8 = FUNC_2(VAR_2, VAR_3, ((void*)0), &VAR_7))
     == ((void*)0))
  FUNC_3(VAR_2, VAR_3, VAR_7);
 else {
  VAR_3 = VAR_8;
  VAR_9 = &VAR_3->dpn_perm;
 }


 switch (VAR_6) {
 case 129:
  VAR_9->dp_local = VAR_1;
  break;
 case 130:
  VAR_9->dp_descend = VAR_1;
  break;
 case 128:
  break;
 default:
  FUNC_0(VAR_0);
 }
}
