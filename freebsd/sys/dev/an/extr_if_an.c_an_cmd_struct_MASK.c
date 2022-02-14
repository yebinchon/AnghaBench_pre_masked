
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int mpi350; } ;
struct an_reply {int an_resp0; int an_resp1; int an_resp2; int an_status; } ;
struct an_command {int an_parm0; int an_parm1; int an_parm2; int an_cmd; } ;


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
 int FUNC_11 (struct an_softc*,int ) ;
 int FUNC_12 (struct an_softc*,int ,int) ;
 int FUNC_13 (int) ;
 int VAR_4 ;
 int FUNC_14 (char*) ;

__attribute__((used)) static int
FUNC_15(struct an_softc *VAR_5, struct an_command *VAR_6,
    struct an_reply *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_5);
 for (VAR_8 = 0; VAR_8 != VAR_3; VAR_8++) {
  if (FUNC_11(VAR_5, FUNC_0(VAR_5->mpi350)) & VAR_0) {
   FUNC_13(1000);
  } else
   break;
 }

 if( VAR_8 == VAR_3) {
  FUNC_14("BUSY\n");
  return(VAR_4);
 }

 FUNC_12(VAR_5, FUNC_4(VAR_5->mpi350), VAR_6->an_parm0);
 FUNC_12(VAR_5, FUNC_5(VAR_5->mpi350), VAR_6->an_parm1);
 FUNC_12(VAR_5, FUNC_6(VAR_5->mpi350), VAR_6->an_parm2);
 FUNC_12(VAR_5, FUNC_0(VAR_5->mpi350), VAR_6->an_cmd);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if (FUNC_11(VAR_5, FUNC_2(VAR_5->mpi350)) & VAR_2)
   break;
  FUNC_13(1000);
 }

 VAR_7->an_resp0 = FUNC_11(VAR_5, FUNC_7(VAR_5->mpi350));
 VAR_7->an_resp1 = FUNC_11(VAR_5, FUNC_8(VAR_5->mpi350));
 VAR_7->an_resp2 = FUNC_11(VAR_5, FUNC_9(VAR_5->mpi350));
 VAR_7->an_status = FUNC_11(VAR_5, FUNC_10(VAR_5->mpi350));

 if (FUNC_11(VAR_5, FUNC_0(VAR_5->mpi350)) & VAR_0)
  FUNC_12(VAR_5, FUNC_1(VAR_5->mpi350),
      VAR_1);


 FUNC_12(VAR_5, FUNC_1(VAR_5->mpi350), VAR_2);

 if (VAR_8 == VAR_3)
  return(VAR_4);

 return(0);
}
