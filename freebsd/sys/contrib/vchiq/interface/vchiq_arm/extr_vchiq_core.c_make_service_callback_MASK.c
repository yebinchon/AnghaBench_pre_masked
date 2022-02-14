
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_5__ {scalar_t__ (* callback ) (size_t,int *,int ,void*) ;} ;
struct TYPE_7__ {int handle; TYPE_2__* state; TYPE_1__ base; int localport; } ;
typedef TYPE_3__ VCHIQ_SERVICE_T ;
typedef size_t VCHIQ_REASON_T ;
typedef int VCHIQ_HEADER_T ;
struct TYPE_6__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (size_t,int *,int ,void*) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static inline VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_T *VAR_4, VCHIQ_REASON_T VAR_5,
 VCHIQ_HEADER_T *VAR_6, void *VAR_7)
{
 VCHIQ_STATUS_T VAR_8;
 FUNC_1(VAR_3, "%d: callback:%d (%s, %x, %x)",
  VAR_4->state->id, VAR_4->localport, VAR_2[VAR_5],
  (unsigned int)VAR_6, (unsigned int)VAR_7);
 VAR_8 = VAR_4->base.callback(VAR_5, VAR_6, VAR_4->handle,
  VAR_7);
 if (VAR_8 == VAR_0) {
  FUNC_2(VAR_3,
   "%d: ignoring ERROR from callback to service %x",
   VAR_4->state->id, VAR_4->handle);
  VAR_8 = VAR_1;
 }
 return VAR_8;
}
