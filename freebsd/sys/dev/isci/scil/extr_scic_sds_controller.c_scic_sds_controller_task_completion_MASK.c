
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_7__ {scalar_t__* io_request_sequence; TYPE_1__** io_request_table; } ;
struct TYPE_6__ {scalar_t__ io_tag; } ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_2,
   U32 VAR_3
)
{
   U32 VAR_4;
   SCIC_SDS_REQUEST_T *VAR_5;

   VAR_4 = FUNC_0(VAR_3);
   VAR_5 = VAR_2->io_request_table[VAR_4];


   if (
           (VAR_5 != VAR_1)
        && (VAR_5->io_tag != VAR_0)
        && (
                FUNC_2(VAR_5->io_tag)
             == VAR_2->io_request_sequence[VAR_4]
           )
      )
   {

      FUNC_1(VAR_5, VAR_3);
   }
}
