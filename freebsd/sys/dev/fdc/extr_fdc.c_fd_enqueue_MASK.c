
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_data {int fdc_mtx; int head; } ;
struct fd_data {int flags; int fd_bq; int toffhandle; int fd_iocount; struct fdc_data* fdc; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct bio*) ;
 int FUNC_1 (int *,struct bio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fd_data*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct fd_data *VAR_2, struct bio *VAR_3)
{
 struct fdc_data *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_4 = VAR_2->fdc;
 FUNC_4(&VAR_4->fdc_mtx);

 if (VAR_2->fd_iocount++ == 0)
  FUNC_2(&VAR_2->toffhandle);
 if (VAR_2->flags & VAR_0) {

  FUNC_0(&VAR_4->head, VAR_3);
  FUNC_6(&VAR_4->head);
 } else {

  FUNC_1(&VAR_2->fd_bq, VAR_3);
  if (!(VAR_2->flags & VAR_1))
   FUNC_3(VAR_2, 1);
 }
 FUNC_5(&VAR_4->fdc_mtx);
}
