
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* recorded_revision; void* recorded_peg_revision; int repos_id; void* changed_rev; void* revision; } ;
typedef TYPE_1__ insert_external_baton_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_1(insert_external_baton_t *VAR_2)
{
  FUNC_0(VAR_2, 0, sizeof(*VAR_2));
  VAR_2->revision = VAR_1;
  VAR_2->changed_rev = VAR_1;
  VAR_2->repos_id = VAR_0;

  VAR_2->recorded_peg_revision = VAR_1;
  VAR_2->recorded_revision = VAR_1;
}
