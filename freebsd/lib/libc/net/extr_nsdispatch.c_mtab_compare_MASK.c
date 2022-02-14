
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int database; int name; } ;
typedef TYPE_1__ ns_mtab ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
      int VAR_2;

      VAR_2 = FUNC_0(((const ns_mtab *)VAR_0)->name, ((const ns_mtab *)VAR_1)->name);
      if (VAR_2 != 0)
       return (VAR_2);
      else
       return (FUNC_0(((const ns_mtab *)VAR_0)->database,
    ((const ns_mtab *)VAR_1)->database));
}
