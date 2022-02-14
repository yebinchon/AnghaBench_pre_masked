
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int repos_id; int depth; void* changed_rev; void* revision; } ;
typedef TYPE_1__ insert_base_baton_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(insert_base_baton_t *VAR_3)
{
  FUNC_0(VAR_3, 0, sizeof(*VAR_3));
  VAR_3->revision = VAR_1;
  VAR_3->changed_rev = VAR_1;
  VAR_3->depth = VAR_2;
  VAR_3->repos_id = VAR_0;
}
