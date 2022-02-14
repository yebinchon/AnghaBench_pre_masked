
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int ioc_pg8; } ;
typedef int Mpi2ConfigReply_t ;


 scalar_t__ FUNC_0 (struct mps_softc*,int *,int *) ;

void
FUNC_1(struct mps_softc *VAR_0)
{
 Mpi2ConfigReply_t VAR_1;
 int VAR_2;

 VAR_2 = 0;
 while (FUNC_0(VAR_0, &VAR_1, &VAR_0->ioc_pg8)) {
  VAR_2++;
  if (VAR_2 > 5) {


   break;
  }
 }
}
