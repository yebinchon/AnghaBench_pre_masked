
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mps_softc {int buffer_dmat; } ;
struct mps_command {int cm_flags; scalar_t__ cm_length; int * cm_sge; int * cm_data; int cm_dmamap; int cm_uio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,scalar_t__,int ,struct mps_command*,int ) ;
 int FUNC_1 (int ,int ,int *,int ,struct mps_command*,int ) ;
 int FUNC_2 (int ,int ,int *,int ,struct mps_command*,int ) ;
 int FUNC_3 (struct mps_command*,int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct mps_softc*,struct mps_command*) ;

int
FUNC_5(struct mps_softc *VAR_4, struct mps_command *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->cm_flags & VAR_1) {
  VAR_6 = FUNC_2(VAR_4->buffer_dmat, VAR_5->cm_dmamap,
      &VAR_5->cm_uio, VAR_3, VAR_5, 0);
 } else if (VAR_5->cm_flags & VAR_0) {
  VAR_6 = FUNC_1(VAR_4->buffer_dmat, VAR_5->cm_dmamap,
      VAR_5->cm_data, VAR_2, VAR_5, 0);
 } else if ((VAR_5->cm_data != ((void*)0)) && (VAR_5->cm_length != 0)) {
  VAR_6 = FUNC_0(VAR_4->buffer_dmat, VAR_5->cm_dmamap,
      VAR_5->cm_data, VAR_5->cm_length, VAR_2, VAR_5, 0);
 } else {

  if (VAR_5->cm_sge != ((void*)0))
   FUNC_3(VAR_5, 0, 0, 0, 1);
  FUNC_4(VAR_4, VAR_5);
 }

 return (VAR_6);
}
