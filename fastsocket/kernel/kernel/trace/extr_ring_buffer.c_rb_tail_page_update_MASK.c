
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {struct buffer_page* tail_page; } ;
struct buffer_page {TYPE_1__* page; int entries; int write; } ;
struct TYPE_2__ {int commit; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 struct buffer_page* FUNC_1 (struct buffer_page**,struct buffer_page*,struct buffer_page*) ;
 unsigned long FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long,unsigned long) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct ring_buffer_per_cpu *VAR_2,
          struct buffer_page *VAR_3,
          struct buffer_page *VAR_4)
{
 struct buffer_page *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;
 VAR_7 = FUNC_2(VAR_0, &VAR_4->write);
 VAR_6 = FUNC_2(VAR_0, &VAR_4->entries);





 FUNC_0();






 if (VAR_3 == VAR_2->tail_page) {

  unsigned long VAR_9 = VAR_7 & ~VAR_1;
  unsigned long VAR_10 = VAR_6 & ~VAR_1;
  (void)FUNC_3(&VAR_4->write, VAR_7, VAR_9);
  (void)FUNC_3(&VAR_4->entries, VAR_6, VAR_10);






  FUNC_4(&VAR_4->page->commit, 0);

  VAR_5 = FUNC_1(&VAR_2->tail_page,
       VAR_3, VAR_4);

  if (VAR_5 == VAR_3)
   VAR_8 = 1;
 }

 return VAR_8;
}
