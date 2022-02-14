
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dfacl_flag; scalar_t__ seen; int state; scalar_t__ hasmask; scalar_t__ acl_mask; scalar_t__ numgroups; scalar_t__ numusers; int other_obj; int group_obj; int user_obj; } ;
typedef TYPE_1__ ace_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(ace_list_t *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->user_obj, 0);
 FUNC_0(&VAR_1->group_obj, 0);
 FUNC_0(&VAR_1->other_obj, 0);
 VAR_1->numusers = 0;
 VAR_1->numgroups = 0;
 VAR_1->acl_mask = 0;
 VAR_1->hasmask = 0;
 VAR_1->state = VAR_0;
 VAR_1->seen = 0;
 VAR_1->dfacl_flag = VAR_2;
}
