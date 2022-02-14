
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_3__ {char* name; } ;
typedef TYPE_1__ linker_symval_t ;
typedef int caddr_t ;
typedef int c_linker_sym_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,long*) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(vm_offset_t VAR_1, const char **VAR_2, long *VAR_3)
{
 linker_symval_t VAR_4;
 c_linker_sym_t VAR_5;

 if (FUNC_0((caddr_t)VAR_1, &VAR_5, VAR_3) != 0)
  goto out;
 if (FUNC_1(VAR_5, &VAR_4) != 0)
  goto out;
 if (VAR_4.name != ((void*)0)) {
  *VAR_2 = VAR_4.name;
  return (0);
 }
 out:
 *VAR_3 = 0;
 *VAR_2 = "??";
 return (VAR_0);
}
