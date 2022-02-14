
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_14__ {TYPE_1__** io_request_table; } ;
struct TYPE_13__ {scalar_t__ started_request_count; } ;
struct TYPE_12__ {scalar_t__ started_request_count; TYPE_3__* owning_port; } ;
struct TYPE_11__ {TYPE_2__* target_device; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_3__ SCIC_SDS_PORT_T ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_1(
        SCIC_SDS_CONTROLLER_T * VAR_2,
        SCIC_SDS_REMOTE_DEVICE_T * VAR_3,
        SCIC_SDS_PORT_T * VAR_4
)
{
    SCI_STATUS VAR_5 = VAR_1;
    SCI_STATUS VAR_6 = VAR_1;
    SCIC_SDS_REQUEST_T *VAR_7;
    U32 VAR_8;
    U32 VAR_9;

    if (VAR_3 != ((void*)0))
        VAR_9 = VAR_3->started_request_count;
    else if (VAR_4 != ((void*)0))
        VAR_9 = VAR_4->started_request_count;
    else
        VAR_9 = VAR_0;


    for (VAR_8 = 0;
         (VAR_8 < VAR_0) && (VAR_9 > 0);
         VAR_8++)
    {
       VAR_7 = VAR_2->io_request_table[VAR_8];

       if (VAR_7 != ((void*)0))
       {
           if (VAR_7->target_device == VAR_3
                   || VAR_7->target_device->owning_port == VAR_4
                   || (VAR_3 == ((void*)0) && VAR_4 == ((void*)0)))
           {
               VAR_6 = FUNC_0(
                                     VAR_2,
                                     VAR_7->target_device,
                                     VAR_7
                                  );

               if (VAR_6 != VAR_1)
                  VAR_5 = VAR_6;

               VAR_9--;
           }
       }
    }

    return VAR_5;
}
