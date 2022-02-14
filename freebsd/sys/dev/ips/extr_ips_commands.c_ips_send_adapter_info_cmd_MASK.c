
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int adapter_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
struct TYPE_8__ {int data_dmatag; int data_dmamap; int data_buffer; int callback; TYPE_1__* sc; } ;
typedef TYPE_2__ ips_command_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(ips_command_t *VAR_7)
{
 int VAR_8 = 0;
 ips_softc_t *VAR_9 = VAR_7->sc;

 if (FUNC_0( VAR_9->adapter_dmatag,
                    1,
                    0,
                    VAR_2,
                    VAR_1,
                    ((void*)0),
                    ((void*)0),
                    VAR_4,
                    1,
                    VAR_4,
                    0,
                    ((void*)0),
                    ((void*)0),
    &VAR_7->data_dmatag) != 0) {
                FUNC_7("ips: can't alloc dma tag for adapter status\n");
  VAR_8 = VAR_3;
  goto exit;
        }
 if(FUNC_4(VAR_7->data_dmatag, &VAR_7->data_buffer,
    VAR_0, &VAR_7->data_dmamap)){
  VAR_8 = VAR_3;
  goto exit;
 }
 VAR_7->callback = VAR_6;
 VAR_8 = FUNC_2(VAR_7->data_dmatag, VAR_7->data_dmamap,
    VAR_7->data_buffer,VAR_4,
    VAR_5, VAR_7,
    VAR_0);

 if (VAR_8 == 0)
  FUNC_3(VAR_7->data_dmatag, VAR_7->data_dmamap);

exit:

 FUNC_5(VAR_7->data_dmatag, VAR_7->data_buffer,
   VAR_7->data_dmamap);
 FUNC_1(VAR_7->data_dmatag);
 FUNC_6(VAR_9, VAR_7);
 return VAR_8;
}
