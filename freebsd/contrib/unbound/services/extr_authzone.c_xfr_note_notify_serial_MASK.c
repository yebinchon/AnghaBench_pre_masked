
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct auth_xfer {int notify_received; int notify_has_serial; void* notify_serial; } ;


 scalar_t__ FUNC_0 (void*,void*) ;

__attribute__((used)) static void
FUNC_1(struct auth_xfer* VAR_0, int VAR_1, uint32_t VAR_2)
{
 if(VAR_0->notify_received && VAR_0->notify_has_serial && VAR_1) {

  if(FUNC_0(VAR_0->notify_serial, VAR_2) < 0)
   VAR_0->notify_serial = VAR_2;
 } else if(VAR_0->notify_received && VAR_0->notify_has_serial &&
  !VAR_1) {

  VAR_0->notify_has_serial = 0;
  VAR_0->notify_serial = 0;
 } else if(VAR_0->notify_received && !VAR_0->notify_has_serial) {



 } else {
  VAR_0->notify_received = 1;
  VAR_0->notify_has_serial = VAR_1;
  VAR_0->notify_serial = VAR_2;
 }
}
