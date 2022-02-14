
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tws_softc {int io_lock; int data_tag; } ;
struct tws_request {scalar_t__ type; int flags; int length; int * data; int dma_map; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct tws_softc*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ,int ,struct tws_request*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ,struct tws_request*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (struct tws_softc*,struct tws_request*) ;
 scalar_t__ FUNC_6 (struct tws_softc*,struct tws_request*) ;

int32_t
FUNC_7(struct tws_softc *VAR_6, struct tws_request *VAR_7)
{
    int32_t VAR_8 = 0;



    if (VAR_7->data != ((void*)0)) {
        int VAR_9 = ((VAR_7->type == VAR_4) ? VAR_1 : VAR_0);




        FUNC_3(&VAR_6->io_lock);
 if (VAR_7->flags & VAR_3)
  VAR_8 = FUNC_2(VAR_6->data_tag, VAR_7->dma_map,
         VAR_7->data,
         VAR_5, VAR_7,
         VAR_9);
 else
  VAR_8 = FUNC_1(VAR_6->data_tag, VAR_7->dma_map,
     VAR_7->data, VAR_7->length,
     VAR_5, VAR_7,
     VAR_9);
        FUNC_4(&VAR_6->io_lock);

        if (VAR_8 == VAR_2) {
            FUNC_0(VAR_6, "in progress", 0, VAR_8);
            FUNC_5(VAR_6, VAR_7);
            VAR_8 = 0;
        }
    } else {
        VAR_8 = FUNC_6(VAR_6, VAR_7);
    }
    return(VAR_8);
}
