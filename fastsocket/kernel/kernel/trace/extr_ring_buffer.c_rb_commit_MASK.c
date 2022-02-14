
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int entries; } ;
struct ring_buffer_event {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ring_buffer_per_cpu*) ;
 int FUNC_2 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;

__attribute__((used)) static void FUNC_3(struct ring_buffer_per_cpu *VAR_0,
        struct ring_buffer_event *VAR_1)
{
 FUNC_0(&VAR_0->entries);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
}
