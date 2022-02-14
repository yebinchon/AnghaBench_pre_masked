
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_sense_data {int dummy; } ;
struct scb_data {scalar_t__ maxhscbs; scalar_t__ numscbs; struct scb* hscbs; int init_level; int sg_dmat; int sense_busaddr; struct scb* sense; int sense_dmamap; int sense_dmat; int hscb_busaddr; int hscb_dmamap; int hscb_dmat; struct scb* scbarray; int sg_maps; int free_scbs; } ;
struct scb {int dummy; } ;
struct hardware_scb {int dummy; } ;
struct ahc_softc {int next_queued_scb; int parent_dmat; struct scb_data* scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ahc_softc*) ;
 int VAR_11 ;
 int FUNC_2 (struct ahc_softc*) ;
 char* FUNC_3 (struct ahc_softc*) ;
 scalar_t__ FUNC_4 (struct ahc_softc*) ;
 scalar_t__ FUNC_5 (struct ahc_softc*,int ,int,scalar_t__,scalar_t__,int ,int *,int *,int,int,int ,int ,int *) ;
 int FUNC_6 (struct ahc_softc*,int ,int ,struct scb*,int,int ,int *,int ) ;
 scalar_t__ FUNC_7 (struct ahc_softc*,int ,void**,int,int *) ;
 scalar_t__ FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct scb*,int ,int) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static int
FUNC_11(struct ahc_softc *VAR_12)
{
 struct scb_data *VAR_13;

 VAR_13 = VAR_12->scb_data;
 FUNC_0(&VAR_13->free_scbs);
 FUNC_0(&VAR_13->sg_maps);


 VAR_13->scbarray =
     (struct scb *)FUNC_8(sizeof(struct scb) * VAR_0,
     VAR_8, VAR_9);
 if (VAR_13->scbarray == ((void*)0))
  return (VAR_6);
 FUNC_9(VAR_13->scbarray, 0, sizeof(struct scb) * VAR_0);



 VAR_13->maxhscbs = FUNC_4(VAR_12);
 if (VAR_12->scb_data->maxhscbs == 0) {
  FUNC_10("%s: No SCB space found\n", FUNC_3(VAR_12));
  return (VAR_7);
 }
 if (FUNC_5(VAR_12, VAR_12->parent_dmat, 1,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          VAR_0 * sizeof(struct hardware_scb),
                       1,
                      VAR_5,
                   0, &VAR_13->hscb_dmat) != 0) {
  goto error_exit;
 }

 VAR_13->init_level++;


 if (FUNC_7(VAR_12, VAR_13->hscb_dmat,
        (void **)&VAR_13->hscbs,
        VAR_2 | VAR_1,
        &VAR_13->hscb_dmamap) != 0) {
  goto error_exit;
 }

 VAR_13->init_level++;


 FUNC_6(VAR_12, VAR_13->hscb_dmat, VAR_13->hscb_dmamap,
   VAR_13->hscbs,
   VAR_0 * sizeof(struct hardware_scb),
   VAR_11, &VAR_13->hscb_busaddr, 0);

 VAR_13->init_level++;


 if (FUNC_5(VAR_12, VAR_12->parent_dmat, 1,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          VAR_0 * sizeof(struct scsi_sense_data),
                       1,
                      VAR_5,
                   0, &VAR_13->sense_dmat) != 0) {
  goto error_exit;
 }

 VAR_13->init_level++;


 if (FUNC_7(VAR_12, VAR_13->sense_dmat,
        (void **)&VAR_13->sense,
        VAR_2, &VAR_13->sense_dmamap) != 0) {
  goto error_exit;
 }

 VAR_13->init_level++;


 FUNC_6(VAR_12, VAR_13->sense_dmat, VAR_13->sense_dmamap,
   VAR_13->sense,
   VAR_0 * sizeof(struct scsi_sense_data),
   VAR_11, &VAR_13->sense_busaddr, 0);

 VAR_13->init_level++;


 if (FUNC_5(VAR_12, VAR_12->parent_dmat, 8,
                      VAR_4 + 1,
                     VAR_4,
                      VAR_3,
                    ((void*)0), ((void*)0),
          VAR_10, 1,
                      VAR_5,
                   0, &VAR_13->sg_dmat) != 0) {
  goto error_exit;
 }

 VAR_13->init_level++;


 FUNC_9(VAR_13->hscbs, 0,
        VAR_0 * sizeof(struct hardware_scb));
 while (FUNC_1(VAR_12) != 0)
  ;

 if (VAR_13->numscbs == 0) {
  FUNC_10("%s: ahc_init_scbdata - "
         "Unable to allocate initial scbs\n",
         FUNC_3(VAR_12));
  goto error_exit;
 }




 VAR_12->next_queued_scb = FUNC_2(VAR_12);




 return (0);

error_exit:

 return (VAR_6);
}
