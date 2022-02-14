
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ulong_t ;
struct ps_prochandle {int dummy; } ;
struct TYPE_9__ {uintptr_t ftps_pc; size_t ftps_size; int ftps_noffs; int * ftps_offs; int ftps_type; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
struct TYPE_10__ {int dt_ftfd; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ st_size; scalar_t__ st_value; } ;
typedef TYPE_3__ GElf_Sym ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(struct ps_prochandle *VAR_4, dtrace_hdl_t *VAR_5,
    fasttrap_probe_spec_t *VAR_6, const GElf_Sym *VAR_7, ulong_t VAR_8)
{

 if (!FUNC_0(VAR_8, 4))
  return (VAR_1);

 VAR_6->ftps_type = VAR_0;
 VAR_6->ftps_pc = (uintptr_t)VAR_7->st_value;
 VAR_6->ftps_size = (size_t)VAR_7->st_size;
 VAR_6->ftps_noffs = 1;
 VAR_6->ftps_offs[0] = VAR_8;

 if (FUNC_3(VAR_5->dt_ftfd, VAR_2, VAR_6) != 0) {
  FUNC_1("fasttrap probe creation ioctl failed: %s\n",
      FUNC_4(VAR_3));
  return (FUNC_2(VAR_5, VAR_3));
 }

 return (1);
}
