
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct TYPE_2__ {struct ring_buffer* buffer; } ;


 TYPE_1__ VAR_0 ;
 struct ring_buffer_event* FUNC_0 (struct ring_buffer*,int,unsigned long,unsigned long,int) ;

struct ring_buffer_event *
FUNC_1(struct ring_buffer **VAR_1,
      int VAR_2, unsigned long VAR_3,
      unsigned long VAR_4, int VAR_5)
{
 *VAR_1 = VAR_0.buffer;
 return FUNC_0(*VAR_1,
      VAR_2, VAR_3, VAR_4, VAR_5);
}
