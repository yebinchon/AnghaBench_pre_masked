
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int mpi350; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct an_softc*,int ) ;
 int FUNC_12 (struct an_softc*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_13(struct an_softc *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0;

 FUNC_3(VAR_6);
 FUNC_12(VAR_6, FUNC_4(VAR_6->mpi350), VAR_8);
 FUNC_12(VAR_6, FUNC_5(VAR_6->mpi350), 0);
 FUNC_12(VAR_6, FUNC_6(VAR_6->mpi350), 0);
 FUNC_12(VAR_6, FUNC_0(VAR_6->mpi350), VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  if (FUNC_11(VAR_6, FUNC_2(VAR_6->mpi350)) & VAR_2)
   break;
  else {
   if (FUNC_11(VAR_6, FUNC_0(VAR_6->mpi350)) == VAR_7)
    FUNC_12(VAR_6, FUNC_0(VAR_6->mpi350), VAR_7);
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_11(VAR_6, FUNC_7(VAR_6->mpi350));
  FUNC_11(VAR_6, FUNC_8(VAR_6->mpi350));
  FUNC_11(VAR_6, FUNC_9(VAR_6->mpi350));
  VAR_10 = FUNC_11(VAR_6, FUNC_10(VAR_6->mpi350));
  if ((VAR_10 & VAR_3) == (VAR_7 & VAR_3))
   break;
 }


 FUNC_12(VAR_6, FUNC_1(VAR_6->mpi350), VAR_2);

 if (FUNC_11(VAR_6, FUNC_0(VAR_6->mpi350)) & VAR_0)
  FUNC_12(VAR_6, FUNC_1(VAR_6->mpi350), VAR_1);

 if (VAR_9 == VAR_4)
  return(VAR_5);

 return(0);
}
