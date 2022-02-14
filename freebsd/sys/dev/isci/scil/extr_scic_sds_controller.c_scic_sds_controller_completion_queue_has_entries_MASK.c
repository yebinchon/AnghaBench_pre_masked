
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_3__ {size_t completion_queue_get; int * completion_queue; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
BOOL FUNC_2(
   SCIC_SDS_CONTROLLER_T *VAR_3
)
{
   U32 VAR_4 = VAR_3->completion_queue_get;
   U32 VAR_5 = VAR_4 & VAR_1;
   if (
           FUNC_1(VAR_4)
        == FUNC_0(VAR_3->completion_queue[VAR_5])
      )
   {
      return VAR_2;
   }

   return VAR_0;
}
