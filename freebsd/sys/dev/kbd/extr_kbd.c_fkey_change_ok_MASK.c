
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_5__ {scalar_t__ len; int str; } ;
typedef TYPE_1__ fkeytab_t ;
struct TYPE_6__ {scalar_t__ flen; int keydef; } ;
typedef TYPE_2__ fkeyarg_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_2(fkeytab_t *VAR_2, fkeyarg_t *VAR_3, struct thread *VAR_4)
{
 if (VAR_1 <= 3)
  return (0);

 if (VAR_2->len != VAR_3->flen ||
     FUNC_0(VAR_2->str, VAR_3->keydef, VAR_2->len) != 0)
  return FUNC_1(VAR_4, VAR_0);

 return (0);
}
