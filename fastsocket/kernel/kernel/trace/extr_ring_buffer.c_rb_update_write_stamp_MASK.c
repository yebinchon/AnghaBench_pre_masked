
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int write_stamp; } ;
struct ring_buffer_event {scalar_t__ time_delta; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;

__attribute__((used)) static void
FUNC_1(struct ring_buffer_per_cpu *VAR_0,
        struct ring_buffer_event *VAR_1)
{




 if (FUNC_0(VAR_0, VAR_1))
  VAR_0->write_stamp += VAR_1->time_delta;
}
