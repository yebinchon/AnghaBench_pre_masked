
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct buf {int dummy; } ;
struct TYPE_5__ {int bq_queue; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct buf* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,struct buf*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int
FUNC_4(void *VAR_1, void **VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct buf *VAR_6;
 int VAR_7;

 FUNC_0(&VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_2(&VAR_0.bq_queue);
  if (VAR_6 == ((void*)0))
   break;
  FUNC_3(&VAR_0, VAR_6);
  VAR_2[VAR_7] = VAR_6;
 }
 FUNC_1(&VAR_0);

 return (VAR_7);
}
