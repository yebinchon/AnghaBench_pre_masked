
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; } ;
struct snd_queue {int idx; int snd_taskq; int snd_task; TYPE_2__* snd_buff; int snd_buff_dmat; struct nicvf* nic; int thresh; int free_cnt; scalar_t__ tail; scalar_t__ head; TYPE_1__ dmem; int desc; int * br; int mtx; int mtx_name; } ;
struct nicvf {int dev; } ;
struct TYPE_4__ {int dmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_queue*) ;
 int FUNC_1 (struct snd_queue*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *,int ,int ,struct snd_queue*) ;
 int FUNC_3 (int *,int) ;
 int * FUNC_4 (int,int ,int,int *) ;
 int FUNC_5 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 TYPE_2__* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int FUNC_12 (struct nicvf*,TYPE_1__*,int,int ,int ) ;
 int VAR_16 ;
 int FUNC_13 (int ,int,char*,char*,int) ;
 int FUNC_14 (char*,int ,int ,int *) ;
 int FUNC_15 (int *,int,int ,char*,char*,int) ;
 int VAR_17 ;

__attribute__((used)) static int
FUNC_16(struct nicvf *VAR_18, struct snd_queue *VAR_19, int VAR_20,
    int VAR_21)
{
 size_t VAR_22;
 int VAR_23;


 FUNC_13(VAR_19->mtx_name, sizeof(VAR_19->mtx_name), "%s: SQ(%d) lock",
     FUNC_8(VAR_18->dev), VAR_21);
 FUNC_11(&VAR_19->mtx, VAR_19->mtx_name, ((void*)0), VAR_4);

 FUNC_0(VAR_19);

 VAR_19->br = FUNC_4(VAR_20 / VAR_3, VAR_5,
     VAR_7, &VAR_19->mtx);
 if (VAR_19->br == ((void*)0)) {
  FUNC_9(VAR_18->dev,
      "ERROR: Could not set up buf ring for SQ(%d)\n", VAR_21);
  VAR_23 = VAR_1;
  goto error;
 }


 VAR_23 = FUNC_12(VAR_18, &VAR_19->dmem, VAR_20, VAR_14,
         VAR_10);
 if (VAR_23 != 0) {
  FUNC_9(VAR_18->dev,
      "Could not allocate DMA memory for SQ\n");
  goto error;
 }

 VAR_19->desc = VAR_19->dmem.base;
 VAR_19->head = VAR_19->tail = 0;
 FUNC_3(&VAR_19->free_cnt, VAR_20 - 1);
 VAR_19->thresh = VAR_15;
 VAR_19->idx = VAR_21;
 VAR_19->nic = VAR_18;






 VAR_23 = FUNC_5(
     FUNC_7(VAR_18->dev),
     1,
     0,
     VAR_0,
     VAR_0,
     ((void*)0), ((void*)0),
     VAR_11,
     VAR_12,
     VAR_2,
     0,
     ((void*)0), ((void*)0),
     &VAR_19->snd_buff_dmat);

 if (VAR_23 != 0) {
  FUNC_9(VAR_18->dev,
      "Failed to create busdma tag for Tx buffers\n");
  goto error;
 }


 VAR_19->snd_buff = FUNC_10(sizeof(*VAR_19->snd_buff) * VAR_20, VAR_6,
     (VAR_7 | VAR_9));
 if (VAR_19->snd_buff == ((void*)0)) {
  FUNC_9(VAR_18->dev,
      "Could not allocate memory for Tx buffers array\n");
  VAR_23 = VAR_1;
  goto error;
 }


 for (VAR_22 = 0; VAR_22 < VAR_20; VAR_22++) {
  VAR_23 = FUNC_6(VAR_19->snd_buff_dmat, 0,
      &VAR_19->snd_buff[VAR_22].dmap);
  if (VAR_23 != 0) {
   FUNC_9(VAR_18->dev,
       "Failed to create DMA maps for Tx buffers\n");
   goto error;
  }
 }
 FUNC_1(VAR_19);


 FUNC_2(&VAR_19->snd_task, 0, VAR_16, VAR_19);
 VAR_19->snd_taskq = FUNC_14("nicvf_snd_taskq", VAR_8,
     VAR_17, &VAR_19->snd_taskq);
 FUNC_15(&VAR_19->snd_taskq, 1, VAR_13, "%s: snd_taskq(%d)",
     FUNC_8(VAR_18->dev), VAR_21);

 return (0);
error:
 FUNC_1(VAR_19);
 return (VAR_23);
}
