
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fd_data {TYPE_1__* fdc; int fd_bq; int flags; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int head; int fdc_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct bio*) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct fd_data *VAR_4;
 struct bio *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3;
 FUNC_2(&VAR_4->fdc->fdc_mtx, VAR_2);
 VAR_4->flags &= ~VAR_1;
 VAR_4->flags |= VAR_0;
 VAR_6 = 0;
 for (;;) {
  VAR_5 = FUNC_1(&VAR_4->fd_bq);
  if (VAR_5 == ((void*)0))
   break;
  FUNC_0(&VAR_4->fdc->head, VAR_5);
  VAR_6 = 1;
 }
 if (VAR_6)
  FUNC_3(&VAR_4->fdc->head);
}
