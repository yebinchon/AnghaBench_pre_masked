
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {struct buffer_page* commit_page; } ;
struct ring_buffer_event {int dummy; } ;
struct buffer_page {void* page; int entries; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ring_buffer_per_cpu*,struct buffer_page**) ;

__attribute__((used)) static inline void
FUNC_4(struct ring_buffer_per_cpu *VAR_1,
     struct ring_buffer_event *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_2;
 struct buffer_page *VAR_4 = VAR_1->commit_page;
 struct buffer_page *VAR_5;

 VAR_3 &= VAR_0;


 if (FUNC_1(VAR_4->page == (void *)VAR_3)) {
  FUNC_2(&VAR_4->entries);
  return;
 }





 FUNC_3(VAR_1, &VAR_4);
 VAR_5 = VAR_4;
 do {
  if (VAR_4->page == (void *)VAR_3) {
   FUNC_2(&VAR_4->entries);
   return;
  }
  FUNC_3(VAR_1, &VAR_4);
 } while (VAR_4 != VAR_5);


 FUNC_0(VAR_1, 1);
}
