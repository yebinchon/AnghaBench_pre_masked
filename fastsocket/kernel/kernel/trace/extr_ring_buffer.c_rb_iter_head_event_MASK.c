
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_iter {int head; int head_page; } ;
struct ring_buffer_event {int dummy; } ;


 struct ring_buffer_event* FUNC_0 (int ,int ) ;

__attribute__((used)) static inline struct ring_buffer_event *
FUNC_1(struct ring_buffer_iter *VAR_0)
{
 return FUNC_0(VAR_0->head_page, VAR_0->head);
}
