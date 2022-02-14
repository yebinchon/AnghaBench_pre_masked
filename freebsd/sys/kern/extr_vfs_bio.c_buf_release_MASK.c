
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {int bq_index; int bq_len; int bq_queue; } ;
struct buf {int b_flags; int b_qindex; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct bufqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct buf*,int ) ;
 int VAR_2 ;
 struct bufqueue VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4, void **VAR_5, int VAR_6)
{
 struct bufqueue *VAR_7;
 struct buf *VAR_8;
        int VAR_9;

 VAR_7 = &VAR_3;
 FUNC_0(VAR_7);
        for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_8 = VAR_5[VAR_9];

  FUNC_2(&VAR_7->bq_queue, VAR_8, VAR_2);
  VAR_8->b_flags &= ~(VAR_0 | VAR_1);
  VAR_7->bq_len++;
  VAR_8->b_qindex = VAR_7->bq_index;
 }
 FUNC_1(VAR_7);
}
