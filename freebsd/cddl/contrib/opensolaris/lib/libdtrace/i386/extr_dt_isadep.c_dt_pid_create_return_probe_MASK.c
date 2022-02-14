
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int ulong_t ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint16_t ;
struct ps_prochandle {int dummy; } ;
typedef int pid_t ;
typedef scalar_t__ int8_t ;
typedef scalar_t__ int32_t ;
struct TYPE_15__ {uintptr_t ftps_pc; size_t ftps_size; scalar_t__ ftps_noffs; int* ftps_offs; int ftps_type; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
struct TYPE_16__ {int dt_ftfd; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_17__ {int st_size; scalar_t__ st_value; } ;
struct TYPE_14__ {char pr_dmodel; int pr_pid; } ;
typedef TYPE_3__ GElf_Sym ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ps_prochandle*,scalar_t__*,int,scalar_t__) ;
 TYPE_13__* FUNC_3 (struct ps_prochandle*) ;
 scalar_t__* FUNC_4 (int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (scalar_t__*,TYPE_2__*,int ,scalar_t__,char) ;
 scalar_t__ FUNC_7 (struct ps_prochandle*,TYPE_2__*,scalar_t__*,TYPE_1__*,TYPE_3__ const*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int VAR_11 ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (int ,int ,TYPE_1__*) ;
 char FUNC_11 (struct ps_prochandle*) ;
 int FUNC_12 (struct ps_prochandle*) ;
 int FUNC_13 (int ) ;

int
FUNC_14(struct ps_prochandle *VAR_12, dtrace_hdl_t *VAR_13,
    fasttrap_probe_spec_t *VAR_14, const GElf_Sym *VAR_15, uint64_t *VAR_16)
{
 uint8_t *VAR_17;
 ulong_t VAR_18, VAR_19;
 int VAR_20;




 pid_t VAR_21 = FUNC_12(VAR_12);
 char VAR_22 = FUNC_11(VAR_12);






 if ((VAR_17 = FUNC_4(1, VAR_15->st_size + 4)) == ((void*)0)) {
  FUNC_5("mr sparkle: malloc() failed\n");
  return (VAR_6);
 }

 if (FUNC_2(VAR_12, VAR_17, VAR_15->st_size, VAR_15->st_value) != VAR_15->st_size) {
  FUNC_5("mr sparkle: Pread() failed\n");
  FUNC_9(VAR_17);
  return (VAR_6);
 }

 VAR_14->ftps_type = VAR_0;
 VAR_14->ftps_pc = (uintptr_t)VAR_15->st_value;
 VAR_14->ftps_size = (size_t)VAR_15->st_size;
 VAR_14->ftps_noffs = 0;
 if (FUNC_7(VAR_12, VAR_13, VAR_17, VAR_14, VAR_15)) {
  for (VAR_18 = 0, VAR_19 = VAR_14->ftps_size; VAR_18 < VAR_19; VAR_18 += VAR_20) {
   VAR_20 = FUNC_6(&VAR_17[VAR_18], VAR_13, VAR_21,
       VAR_15->st_value + VAR_18, VAR_22);


   if (VAR_20 <= 0)
    break;

   if (VAR_17[VAR_18] == VAR_3 && VAR_17[VAR_18 + 1] == VAR_8) {
    FUNC_5("leave/ret at %lx\n", VAR_18 + 1);
    VAR_14->ftps_offs[VAR_14->ftps_noffs++] = VAR_18 + 1;
    VAR_20 = 2;
   } else if (VAR_17[VAR_18] == VAR_3 &&
       VAR_17[VAR_18 + 1] == VAR_7 && VAR_17[VAR_18 + 2] == VAR_8) {
    FUNC_5("leave/rep ret at %lx\n", VAR_18 + 1);
    VAR_14->ftps_offs[VAR_14->ftps_noffs++] = VAR_18 + 1;
    VAR_20 = 3;
   } else if (*(uint16_t *)&VAR_17[VAR_18] == VAR_4 &&
       VAR_17[VAR_18 + 2] == VAR_5 &&
       VAR_17[VAR_18 + 3] == VAR_8) {
    FUNC_5("movl/popl/ret at %lx\n", VAR_18 + 3);
    VAR_14->ftps_offs[VAR_14->ftps_noffs++] = VAR_18 + 3;
    VAR_20 = 4;
   } else if (*(uint16_t *)&VAR_17[VAR_18] == VAR_4 &&
       VAR_17[VAR_18 + 2] == VAR_5 &&
       VAR_17[VAR_18 + 3] == VAR_7 &&
       VAR_17[VAR_18 + 4] == VAR_8) {
    FUNC_5("movl/popl/rep ret at %lx\n", VAR_18 + 3);
    VAR_14->ftps_offs[VAR_14->ftps_noffs++] = VAR_18 + 3;
    VAR_20 = 5;
   }
  }
 } else {
  for (VAR_18 = 0, VAR_19 = VAR_14->ftps_size; VAR_18 < VAR_19; VAR_18 += VAR_20) {
   VAR_20 = FUNC_6(&VAR_17[VAR_18], VAR_13, VAR_21,
       VAR_15->st_value + VAR_18, VAR_22);


   if (VAR_20 <= 0)
    break;


   if (VAR_20 == 1 && VAR_17[VAR_18] == VAR_8)
    goto is_ret;


   if (VAR_20 == 2 && VAR_17[VAR_18] == VAR_7 &&
       VAR_17[VAR_18 + 1] == VAR_8)
    goto is_ret;


   if (VAR_20 == 3 && VAR_17[VAR_18] == VAR_9)
    goto is_ret;


   if (VAR_20 == 4 && VAR_17[VAR_18] == VAR_7 &&
       VAR_17[VAR_18 + 1] == VAR_9)
    goto is_ret;


   if (VAR_20 == 5 && VAR_17[VAR_18] == VAR_1 && VAR_15->st_size <=
       (uintptr_t)(VAR_18 + VAR_20 + *(int32_t *)&VAR_17[VAR_18 + 1]))
    goto is_ret;


   if (VAR_20 == 2 && VAR_17[VAR_18] == VAR_2 && VAR_15->st_size <=
       (uintptr_t)(VAR_18 + VAR_20 + *(int8_t *)&VAR_17[VAR_18 + 1]))
    goto is_ret;


   if (VAR_20 == 6 && FUNC_0(*(uint16_t *)&VAR_17[VAR_18]) &&
       VAR_15->st_size <=
       (uintptr_t)(VAR_18 + VAR_20 + *(int32_t *)&VAR_17[VAR_18 + 2]))
    goto is_ret;


   if (VAR_20 == 2 && FUNC_1(VAR_17[VAR_18]) && VAR_15->st_size <=
       (uintptr_t)(VAR_18 + VAR_20 + *(int8_t *)&VAR_17[VAR_18 + 1]))
    goto is_ret;

   continue;
is_ret:
   FUNC_5("return at offset %lx\n", VAR_18);
   VAR_14->ftps_offs[VAR_14->ftps_noffs++] = VAR_18;
  }
 }

 FUNC_9(VAR_17);
 if (VAR_14->ftps_noffs > 0) {
  if (FUNC_10(VAR_13->dt_ftfd, VAR_10, VAR_14) != 0) {
   FUNC_5("fasttrap probe creation ioctl failed: %s\n",
       FUNC_13(VAR_11));
   return (FUNC_8(VAR_13, VAR_11));
  }
 }

 return (VAR_14->ftps_noffs);
}
