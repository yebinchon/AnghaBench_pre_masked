
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct mps_softc {int dummy; } ;
struct TYPE_4__ {int Low; scalar_t__ High; } ;
struct TYPE_5__ {TYPE_1__ WWID; } ;
typedef TYPE_2__ Mpi2RaidVolPage1_t ;
typedef int Mpi2ConfigReply_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mps_softc*,int *,TYPE_2__*,int ,int ) ;

int
FUNC_2(struct mps_softc *VAR_1, u16 VAR_2, u64 *VAR_3)
{
 Mpi2ConfigReply_t VAR_4;
 Mpi2RaidVolPage1_t VAR_5;

 *VAR_3 = 0;
 if (!(FUNC_1(VAR_1, &VAR_4, &VAR_5,
     VAR_0, VAR_2))) {
  *VAR_3 = FUNC_0((u64)VAR_5 << 32 |
      VAR_5);
  return 0;
 } else
  return -1;
}
