
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dev; void* enable_hwlro; } ;
typedef TYPE_1__* POCE_SOFTC ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int VAR_1 ;
 void* FUNC_3 (char*,int *,int) ;

__attribute__((used)) static void
FUNC_4( POCE_SOFTC VAR_2 )
{
 char *VAR_3 = ((void*)0);
 int VAR_4 = 0;



        if(VAR_3 && FUNC_0(VAR_2)) {
                VAR_2->enable_hwlro = FUNC_3(VAR_3, ((void*)0), 10);
                if(VAR_2->enable_hwlro) {
                        VAR_4 = FUNC_2(VAR_2, ((void*)0), ((void*)0));
                        if(VAR_4) {
                                FUNC_1(VAR_2->dev, "no hardware lro support\n");
                  FUNC_1(VAR_2->dev, "software lro enabled\n");
                                VAR_2->enable_hwlro = 0;
                        }else {
                                FUNC_1(VAR_2->dev, "hardware lro enabled\n");
    VAR_0 = 32;
                        }
                }else {
                        FUNC_1(VAR_2->dev, "software lro enabled\n");
                }
        }else {
                VAR_2->enable_hwlro = 0;
        }



        if(VAR_3 && FUNC_0(VAR_2)) {
                VAR_1 = FUNC_3(VAR_3, ((void*)0), 10);
                switch(VAR_1) {
                case 2048:
                case 4096:
                case 9216:
                case 16384:
                        break;

                default:
                        FUNC_1(VAR_2->dev, " Supported oce_rq_buf_size values are 2K, 4K, 9K, 16K \n");
                        VAR_1 = 2048;
                }
        }

 return;
}
