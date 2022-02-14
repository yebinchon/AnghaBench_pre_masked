
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint8_t ;
typedef size_t uint64_t ;
struct notify_data {int action; size_t index; int notify_evtchn_handle; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct notify_data *VAR_3, vm_page_t VAR_4)
{
 if (VAR_3->action & VAR_1) {
  uint8_t *VAR_5;
  uint64_t VAR_6;

  VAR_6 = VAR_3->index & VAR_0;
  VAR_5 = (uint8_t *)FUNC_0(VAR_4);
  VAR_5[VAR_6] = 0;
  FUNC_1((vm_offset_t)VAR_5);
 }
 if (VAR_3->action & VAR_2) {
  FUNC_2(VAR_3->notify_evtchn_handle);
  FUNC_3(&VAR_3->notify_evtchn_handle);
 }
 VAR_3->action = 0;
}
