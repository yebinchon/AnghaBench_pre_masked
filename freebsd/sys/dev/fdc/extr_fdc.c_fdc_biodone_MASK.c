
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fdc_data {int fdc_mtx; struct fd_data* fd; struct bio* bp; } ;
struct fd_data {scalar_t__ fd_iocount; TYPE_1__* fdc; int toffhandle; } ;
struct bio {int bio_error; int bio_flags; int * bio_to; } ;
struct TYPE_2__ {scalar_t__ retry; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,struct fd_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bio*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (struct bio*) ;

__attribute__((used)) static int
FUNC_6(struct fdc_data *VAR_4, int VAR_5)
{
 struct fd_data *VAR_6;
 struct bio *VAR_7;

 VAR_6 = VAR_4->fd;
 VAR_7 = VAR_4->bp;

 FUNC_2(&VAR_4->fdc_mtx);
 if (--VAR_6->fd_iocount == 0)
  FUNC_0(&VAR_6->toffhandle, 4 * VAR_3, VAR_2, VAR_6);
 VAR_4->bp = ((void*)0);
 VAR_4->fd = ((void*)0);
 FUNC_3(&VAR_4->fdc_mtx);
 if (VAR_7->bio_to != ((void*)0)) {
  if ((VAR_1 & 2) && VAR_6->fdc->retry > 0)
   FUNC_4("retries: %d\n", VAR_6->fdc->retry);
  FUNC_1(VAR_7, VAR_5);
  return (0);
 }
 VAR_7->bio_error = VAR_5;
 VAR_7->bio_flags |= VAR_0;
 FUNC_5(VAR_7);
 return (0);
}
