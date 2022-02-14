
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sequence_number; int rule; } ;
struct TYPE_4__ {TYPE_1__ acl; } ;
typedef TYPE_2__ parsed_acl_t ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
  const parsed_acl_t *const VAR_2 = VAR_0;
  const parsed_acl_t *const VAR_3 = VAR_1;

  int VAR_4 = FUNC_0(&VAR_2->acl.rule, &VAR_3->acl.rule);
  if (VAR_4 == 0)
    VAR_4 = VAR_2->acl.sequence_number - VAR_3->acl.sequence_number;
  return VAR_4;
}
