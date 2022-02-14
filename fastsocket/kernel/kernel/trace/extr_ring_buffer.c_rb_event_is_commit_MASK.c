
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_1__* commit_page; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {void* page; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (struct ring_buffer_per_cpu*) ;
 unsigned long FUNC_1 (struct ring_buffer_event*) ;

__attribute__((used)) static inline int
FUNC_2(struct ring_buffer_per_cpu *VAR_1,
     struct ring_buffer_event *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_2);
 VAR_3 &= VAR_0;

 return VAR_1->commit_page->page == (void *)VAR_3 &&
  FUNC_0(VAR_1) == VAR_4;
}
