
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ entry_capture_size; int driver_flags; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
typedef TYPE_2__ ql_minidump_entry_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(ql_minidump_entry_t *VAR_1, uint32_t VAR_2)
{
 if (VAR_2 != VAR_1->hdr.entry_capture_size) {
  VAR_1->hdr.entry_capture_size = VAR_2;
  VAR_1->hdr.driver_flags |= VAR_0;
 }
 return;
}
