
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int ulong_t ;
typedef int uint8_t ;
struct ps_prochandle {int dummy; } ;
typedef int pid_t ;
typedef int name ;
typedef int i ;
struct TYPE_15__ {uintptr_t ftps_pc; size_t ftps_size; scalar_t__ ftps_noffs; int* ftps_offs; int ftps_type; } ;
typedef TYPE_1__ fasttrap_probe_spec_t ;
struct TYPE_16__ {int dt_ftfd; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_17__ {int st_size; int st_value; } ;
struct TYPE_14__ {char pr_dmodel; int pr_pid; } ;
typedef TYPE_3__ GElf_Sym ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ps_prochandle*,int *,int,int) ;
 TYPE_13__* FUNC_1 (struct ps_prochandle*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,TYPE_2__*,int ,int,char) ;
 scalar_t__ FUNC_4 (struct ps_prochandle*,TYPE_2__*,int *,TYPE_1__*,TYPE_3__ const*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_1__*) ;
 int * FUNC_9 (int) ;
 char FUNC_10 (struct ps_prochandle*) ;
 int FUNC_11 (struct ps_prochandle*) ;
 int FUNC_12 (char*,int,char*,int) ;
 scalar_t__ FUNC_13 (char*,char const*) ;
 int FUNC_14 (int ) ;

int
FUNC_15(struct ps_prochandle *VAR_4, dtrace_hdl_t *VAR_5,
    fasttrap_probe_spec_t *VAR_6, const GElf_Sym *VAR_7, const char *VAR_8)
{
 uint8_t *VAR_9;
 int VAR_10;
 ulong_t VAR_11, VAR_12 = VAR_7->st_size;




 pid_t VAR_13 = FUNC_11(VAR_4);
 char VAR_14 = FUNC_10(VAR_4);


 VAR_6->ftps_type = VAR_0;
 VAR_6->ftps_pc = (uintptr_t)VAR_7->st_value;
 VAR_6->ftps_size = (size_t)VAR_7->st_size;
 VAR_6->ftps_noffs = 0;

 if ((VAR_9 = FUNC_9(VAR_7->st_size)) == ((void*)0)) {
  FUNC_2("mr sparkle: malloc() failed\n");
  return (VAR_1);
 }

 if (FUNC_0(VAR_4, VAR_9, VAR_7->st_size, VAR_7->st_value) != VAR_7->st_size) {
  FUNC_2("mr sparkle: Pread() failed\n");
  FUNC_6(VAR_9);
  return (VAR_1);
 }





 if (FUNC_4(VAR_4, VAR_5, VAR_9, VAR_6, VAR_7)) {
  FUNC_6(VAR_9);
  return (0);
 }

 if (FUNC_13("*", VAR_8) == 0) {
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += VAR_10) {
   VAR_6->ftps_offs[VAR_6->ftps_noffs++] = VAR_11;

   VAR_10 = FUNC_3(&VAR_9[VAR_11], VAR_5, VAR_13,
       VAR_7->st_value + VAR_11, VAR_14);


   if (VAR_10 <= 0)
    break;
  }
 } else {
  char VAR_15[sizeof (VAR_11) * 2 + 1];

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += VAR_10) {
   (void) FUNC_12(VAR_15, sizeof (VAR_15), "%lx", VAR_11);
   if (FUNC_7(VAR_15, VAR_8))
    VAR_6->ftps_offs[VAR_6->ftps_noffs++] = VAR_11;

   VAR_10 = FUNC_3(&VAR_9[VAR_11], VAR_5, VAR_13,
       VAR_7->st_value + VAR_11, VAR_14);


   if (VAR_10 <= 0)
    break;
  }
 }

 FUNC_6(VAR_9);
 if (VAR_6->ftps_noffs > 0) {
  if (FUNC_8(VAR_5->dt_ftfd, VAR_2, VAR_6) != 0) {
   FUNC_2("fasttrap probe creation ioctl failed: %s\n",
       FUNC_14(VAR_3));
   return (FUNC_5(VAR_5, VAR_3));
  }
 }

 return (VAR_6->ftps_noffs);
}
