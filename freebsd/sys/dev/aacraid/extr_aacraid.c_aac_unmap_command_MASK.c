
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_softc {int aac_buffer_dmat; } ;
struct aac_command {int cm_flags; scalar_t__ cm_datalen; scalar_t__ cm_passthr_dmat; int cm_datamap; struct aac_softc* cm_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct aac_command *VAR_6)
{
 struct aac_softc *VAR_7;

 VAR_7 = VAR_6->cm_sc;
 FUNC_2(VAR_7, VAR_5, "");

 if (!(VAR_6->cm_flags & VAR_2))
  return;

 if (VAR_6->cm_datalen != 0 && VAR_6->cm_passthr_dmat == 0) {
  if (VAR_6->cm_flags & VAR_0)
   FUNC_0(VAR_7->aac_buffer_dmat, VAR_6->cm_datamap,
     VAR_3);
  if (VAR_6->cm_flags & VAR_1)
   FUNC_0(VAR_7->aac_buffer_dmat, VAR_6->cm_datamap,
     VAR_4);

  FUNC_1(VAR_7->aac_buffer_dmat, VAR_6->cm_datamap);
 }
 VAR_6->cm_flags &= ~VAR_2;
}
