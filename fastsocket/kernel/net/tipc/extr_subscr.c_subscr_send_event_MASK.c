
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_event {int dummy; } ;
struct TYPE_3__ {void* node; void* ref; } ;
struct TYPE_4__ {TYPE_1__ port; void* found_upper; void* found_lower; void* event; } ;
struct subscription {int server_ref; int swap; TYPE_2__ evt; } ;
struct iovec {int iov_len; void* iov_base; } ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int,struct iovec*) ;

__attribute__((used)) static void FUNC_2(struct subscription *VAR_0,
         u32 VAR_1,
         u32 VAR_2,
         u32 VAR_3,
         u32 VAR_4,
         u32 VAR_5)
{
 struct iovec VAR_6;

 VAR_6.iov_base = (void *)&VAR_0->evt;
 VAR_6.iov_len = sizeof(struct tipc_event);

 VAR_0->evt.event = FUNC_0(VAR_3, VAR_0->swap);
 VAR_0->evt.found_lower = FUNC_0(VAR_1, VAR_0->swap);
 VAR_0->evt.found_upper = FUNC_0(VAR_2, VAR_0->swap);
 VAR_0->evt.port.ref = FUNC_0(VAR_4, VAR_0->swap);
 VAR_0->evt.port.node = FUNC_0(VAR_5, VAR_0->swap);
 FUNC_1(VAR_0->server_ref, 1, &VAR_6);
}
