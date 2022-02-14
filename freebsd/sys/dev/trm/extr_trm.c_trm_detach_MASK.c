
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_4__ {int psim; int ppath; int irq; int ih; int buffer_dmat; int sense_dmat; int sense_dmamap; int sense_buffers; int srb_dmat; int srb_dmamap; int pFreeSRB; int sg_dmat; int iores; } ;
typedef TYPE_1__* PACB ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_4)
{
 PACB VAR_5 = FUNC_8(VAR_4);

 FUNC_4(VAR_4, VAR_1, FUNC_0(0), VAR_5->iores);
 FUNC_9(VAR_5);
 FUNC_1(VAR_5->sg_dmat);
 FUNC_2(VAR_5->srb_dmat, VAR_5->srb_dmamap);
 FUNC_3(VAR_5->srb_dmat, VAR_5->pFreeSRB,
     VAR_5->srb_dmamap);
 FUNC_1(VAR_5->srb_dmat);
 FUNC_2(VAR_5->sense_dmat, VAR_5->sense_dmamap);
 FUNC_3(VAR_5->sense_dmat, VAR_5->sense_buffers,
     VAR_5->sense_dmamap);
 FUNC_1(VAR_5->sense_dmat);
 FUNC_1(VAR_5->buffer_dmat);
 FUNC_5(VAR_4, VAR_5->irq, VAR_5->ih);
 FUNC_4(VAR_4, VAR_2, 0, VAR_5->irq);
 FUNC_10(VAR_0, VAR_5->ppath, ((void*)0));
 FUNC_12(VAR_5->ppath);
 FUNC_11(FUNC_7(VAR_5->psim));
 FUNC_6(VAR_5->psim, VAR_3);
 return (0);
}
