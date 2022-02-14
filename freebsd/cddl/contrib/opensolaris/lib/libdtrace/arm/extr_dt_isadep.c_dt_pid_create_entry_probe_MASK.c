
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ps_prochandle {int dummy; } ;
struct TYPE_9__ {uintptr_t ftps_pc; size_t ftps_size; int ftps_noffs; scalar_t__* ftps_offs; int ftps_type; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
struct TYPE_10__ {int dt_ftfd; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_11__ {scalar_t__ st_size; scalar_t__ st_value; } ;
typedef TYPE_3__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct ps_prochandle *VAR_3, dtrace_hdl_t *VAR_4,
    fasttrap_probe_spec_t *VAR_5, const GElf_Sym *VAR_6)
{
 VAR_5->ftps_type = VAR_0;
 VAR_5->ftps_pc = (uintptr_t)VAR_6->st_value;
 VAR_5->ftps_size = (size_t)VAR_6->st_size;
 VAR_5->ftps_noffs = 1;
 VAR_5->ftps_offs[0] = 0;

 if (FUNC_2(VAR_4->dt_ftfd, VAR_1, VAR_5) != 0) {
  FUNC_0("fasttrap probe creation ioctl failed: %s\n",
      FUNC_3(VAR_2));
  return (FUNC_1(VAR_4, VAR_2));
 }

 return (1);
}
