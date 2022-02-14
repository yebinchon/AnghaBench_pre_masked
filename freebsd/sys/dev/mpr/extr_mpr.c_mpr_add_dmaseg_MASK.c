
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef size_t u_int ;
struct mpr_command {int cm_flags; } ;
struct TYPE_6__ {int Flags; size_t Length; int Address; } ;
struct TYPE_5__ {size_t FlagsLength; int Address; } ;
typedef TYPE_1__ MPI2_SGE_SIMPLE64 ;
typedef TYPE_2__ MPI2_IEEE_SGE_SIMPLE64 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct mpr_command*,TYPE_2__*,int) ;
 int FUNC_2 (struct mpr_command*,TYPE_1__*,int,int) ;

int
FUNC_3(struct mpr_command *VAR_6, vm_paddr_t VAR_7, size_t VAR_8, u_int VAR_9,
    int VAR_10)
{
 MPI2_SGE_SIMPLE64 VAR_11;
 MPI2_IEEE_SGE_SIMPLE64 VAR_12;

 if (!(VAR_6->cm_flags & VAR_5)) {
  VAR_12.Flags = (VAR_0 |
      VAR_1);
  VAR_12.Length = VAR_8;
  FUNC_0(VAR_7, &VAR_12.Address);

  return (FUNC_1(VAR_6, &VAR_12, VAR_10));
 } else {




  VAR_9 |= VAR_4 |
      VAR_2;

  VAR_11.FlagsLength = VAR_8 | (VAR_9 << VAR_3);
  FUNC_0(VAR_7, &VAR_11.Address);

  return (FUNC_2(VAR_6, &VAR_11, sizeof VAR_11, VAR_10));
 }
}
