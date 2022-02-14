
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ hrtime_t ;
struct TYPE_3__ {scalar_t__ dtb_size; int dtb_flags; scalar_t__ dtb_switched; scalar_t__ dtb_offset; scalar_t__ dtb_interval; } ;
typedef TYPE_1__ dtrace_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(dtrace_buffer_t *VAR_2, hrtime_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  dtrace_buffer_t *VAR_5 = &VAR_2[VAR_4];

  if (VAR_5->dtb_size == 0)
   continue;

  if (VAR_5->dtb_flags & VAR_0)
   return (0);

  if (!VAR_5->dtb_switched && VAR_5->dtb_offset != 0)
   return (0);

  if (VAR_5->dtb_switched - VAR_5->dtb_interval < VAR_3)
   return (0);
 }

 return (1);
}
