
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u16 ;
struct mps_softc {int dummy; } ;
struct TYPE_2__ {int IOCLogInfo; int IOCStatus; } ;
typedef TYPE_1__ MPI2DefaultReply_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mps_softc*,int ) ;

__attribute__((used)) static void
FUNC_3(struct mps_softc *VAR_1, uint8_t *VAR_2)
{
 MPI2DefaultReply_t *VAR_3;
 u16 VAR_4;

 VAR_3 = (MPI2DefaultReply_t*)VAR_2;
 VAR_4 = FUNC_0(VAR_3->IOCStatus);
 if (VAR_4 & VAR_0)
  FUNC_2(VAR_1, FUNC_1(VAR_3->IOCLogInfo));
}
