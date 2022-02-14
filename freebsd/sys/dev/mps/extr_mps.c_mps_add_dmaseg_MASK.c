
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef size_t u_int ;
struct mps_command {int dummy; } ;
typedef int sge ;
struct TYPE_4__ {int Address; int FlagsLength; } ;
typedef TYPE_1__ MPI2_SGE_SIMPLE64 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mps_command*,TYPE_1__*,int,int) ;

int
FUNC_4(struct mps_command *VAR_3, vm_paddr_t VAR_4, size_t VAR_5, u_int VAR_6,
    int VAR_7)
{
 MPI2_SGE_SIMPLE64 VAR_8;




 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_6 |= VAR_2 |
     VAR_0;
 VAR_8.FlagsLength = FUNC_1(VAR_5 | (VAR_6 << VAR_1));
 FUNC_2(VAR_4, &VAR_8.Address);

 return (FUNC_3(VAR_3, &VAR_8, sizeof VAR_8, VAR_7));
}
