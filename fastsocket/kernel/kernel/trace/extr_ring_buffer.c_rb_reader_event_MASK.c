
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_1__* reader_page; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {int read; } ;


 struct ring_buffer_event* FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static inline struct ring_buffer_event *
FUNC_1(struct ring_buffer_per_cpu *VAR_0)
{
 return FUNC_0(VAR_0->reader_page,
          VAR_0->reader_page->read);
}
