
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rchan_buf {unsigned int page_count; size_t cpu; struct rchan_buf* padding; int * page_array; int start; struct rchan* chan; } ;
struct rchan {int kref; int ** buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rchan_buf*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct rchan_buf *VAR_1)
{
 struct rchan *VAR_2 = VAR_1->chan;
 unsigned int VAR_3;

 if (FUNC_3(VAR_1->start)) {
  FUNC_5(VAR_1->start);
  for (VAR_3 = 0; VAR_3 < VAR_1->page_count; VAR_3++)
   FUNC_0(VAR_1->page_array[VAR_3]);
  FUNC_4(VAR_1->page_array);
 }
 VAR_2->buf[VAR_1->cpu] = ((void*)0);
 FUNC_1(VAR_1->padding);
 FUNC_1(VAR_1);
 FUNC_2(&VAR_2->kref, VAR_0);
}
