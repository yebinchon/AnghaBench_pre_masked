
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct target_cmd {scalar_t__ cmd_valid; } ;
struct ahc_softc {int features; size_t tqinfifonext; int shared_data_dmamap; int shared_data_dmat; struct target_cmd* targetcmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ahc_softc*,struct target_cmd*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;
 int FUNC_3 (struct ahc_softc*) ;
 int FUNC_4 (struct ahc_softc*,int ) ;
 int FUNC_5 (struct ahc_softc*,size_t) ;
 int FUNC_6 (struct ahc_softc*) ;
 int FUNC_7 (struct ahc_softc*,int ,int ,int ,int,int ) ;

void
FUNC_8(struct ahc_softc *VAR_8, int VAR_9)
{
 struct target_cmd *VAR_10;






 if ((VAR_8->features & VAR_0) != 0)
  VAR_9 = VAR_7;

 FUNC_4(VAR_8, VAR_2);
 while ((VAR_10 = &VAR_8->targetcmds[VAR_8->tqinfifonext])->cmd_valid != 0) {





  if (FUNC_0(VAR_8, VAR_10) != 0)
   break;

  VAR_10->cmd_valid = 0;
  FUNC_7(VAR_8, VAR_8->shared_data_dmat,
    VAR_8->shared_data_dmamap,
    FUNC_5(VAR_8, VAR_8->tqinfifonext),
    sizeof(struct target_cmd),
    VAR_3);
  VAR_8->tqinfifonext++;





  if ((VAR_8->tqinfifonext & (VAR_4 - 1)) == 1) {
   if ((VAR_8->features & VAR_1) != 0) {
    u_int VAR_11;

    VAR_11 = FUNC_1(VAR_8, VAR_5);
    VAR_11 &= ~VAR_4;
    VAR_11 |= VAR_8->tqinfifonext & VAR_4;
    FUNC_2(VAR_8, VAR_5, VAR_11);
   } else {
    if (!VAR_9)
     FUNC_3(VAR_8);
    FUNC_2(VAR_8, VAR_6,
      VAR_8->tqinfifonext & VAR_4);
    if (!VAR_9)
     FUNC_6(VAR_8);
   }
  }
 }
}
