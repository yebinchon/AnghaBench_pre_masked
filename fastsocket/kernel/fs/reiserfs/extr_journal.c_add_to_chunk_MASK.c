
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct buffer_chunk {scalar_t__ nr; struct buffer_head** bh; } ;
typedef int spinlock_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct buffer_chunk *VAR_1, struct buffer_head *VAR_2,
   spinlock_t * VAR_3, void (VAR_4) (struct buffer_chunk *))
{
 int VAR_5 = 0;
 FUNC_0(VAR_1->nr >= VAR_0);
 VAR_1->bh[VAR_1->nr++] = VAR_2;
 if (VAR_1->nr >= VAR_0) {
  VAR_5 = 1;
  if (VAR_3)
   FUNC_2(VAR_3);
  VAR_4(VAR_1);
  if (VAR_3)
   FUNC_1(VAR_3);
 }
 return VAR_5;
}
