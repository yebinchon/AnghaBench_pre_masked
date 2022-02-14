
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* U8 ;
struct TYPE_4__ {void* request_length; void* allocated_response_length; void* function; int smp_frame_type; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
typedef TYPE_2__ SMP_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static
void FUNC_1(
   SMP_REQUEST_T * VAR_1,
   U8 VAR_2,
   U8 VAR_3,
   U8 VAR_4
)
{
   FUNC_0((char*)VAR_1, 0, sizeof(SMP_REQUEST_T));

   VAR_1->header.smp_frame_type = VAR_0;
   VAR_1->header.function = VAR_2;
   VAR_1->header.allocated_response_length = VAR_3;
   VAR_1->header.request_length = VAR_4;
}
