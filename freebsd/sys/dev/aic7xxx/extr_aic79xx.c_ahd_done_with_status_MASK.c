
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scb {int dummy; } ;
struct ahd_softc {int dummy; } ;
typedef scalar_t__ cam_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ahd_softc*,struct scb*) ;
 int FUNC_1 (struct scb*) ;
 scalar_t__ FUNC_2 (struct scb*) ;
 int FUNC_3 (struct scb*,int ) ;

void
FUNC_4(struct ahd_softc *VAR_2, struct scb *VAR_3, uint32_t VAR_4)
{
 cam_status VAR_5;
 cam_status VAR_6;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == VAR_1)
  FUNC_3(VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 != VAR_0)
  FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_3);
}
