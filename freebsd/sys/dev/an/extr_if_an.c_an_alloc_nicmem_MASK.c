
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int mpi350; int an_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct an_softc*,int ) ;
 int FUNC_3 (struct an_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct an_softc*,int ,int) ;
 scalar_t__ FUNC_5 (struct an_softc*,int,int ,int ) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(struct an_softc *VAR_9, int VAR_10, int *VAR_11)
{
 int VAR_12;

 if (FUNC_4(VAR_9, VAR_2, VAR_10)) {
  FUNC_6(VAR_9->an_ifp, "failed to allocate %d bytes on NIC\n",
      VAR_10);
  return(VAR_7);
 }

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (FUNC_2(VAR_9, FUNC_1(VAR_9->mpi350)) & VAR_4)
   break;
 }

 if (VAR_12 == VAR_5)
  return(VAR_8);

 FUNC_3(VAR_9, FUNC_0(VAR_9->mpi350), VAR_4);
 *VAR_11 = FUNC_2(VAR_9, VAR_0);

 if (FUNC_5(VAR_9, *VAR_11, 0, VAR_1))
  return(VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_10 / 2; VAR_12++)
  FUNC_3(VAR_9, VAR_3, 0);

 return(0);
}
