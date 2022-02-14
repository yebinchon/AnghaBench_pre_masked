
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_3__ {int dm_nctflibs; int const** dm_libctfp; } ;
typedef TYPE_1__ dt_module_t ;
typedef int ctf_file_t ;



int
FUNC_0(dtrace_hdl_t *VAR_0, dt_module_t *VAR_1, const ctf_file_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->dm_nctflibs; VAR_3++) {
  if (VAR_1->dm_libctfp[VAR_3] == VAR_2)
   return (VAR_3);
 }

 return (-1);
}
