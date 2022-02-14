
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ di_id; int di_name; } ;
typedef TYPE_1__ dt_ident_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const dt_ident_t *VAR_2 = *((const dt_ident_t **)VAR_0);
 const dt_ident_t *VAR_3 = *((const dt_ident_t **)VAR_1);

 if (VAR_2->di_id != VAR_3->di_id)
  return ((int)(VAR_2->di_id - VAR_3->di_id));
 else
  return (FUNC_0(VAR_2->di_name, VAR_3->di_name));
}
