
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct fdc_data {int * ioff; int * ioh; int iot; TYPE_1__* fd; struct bio* bp; } ;
struct bio {scalar_t__ bio_cmd; } ;
struct TYPE_2__ {int fd_iosize; int * fd_ioptr; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct fdc_data*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct fdc_data *VAR_2)
{
 u_char *VAR_3;
 struct bio *VAR_4;
 u_int VAR_5;

 VAR_4 = VAR_2->bp;
 VAR_3 = VAR_2->fd->fd_ioptr;
 VAR_5 = VAR_2->fd->fd_iosize;

 if (VAR_4->bio_cmd == VAR_0) {
  FUNC_2(VAR_2, 0, VAR_5);
  FUNC_0(VAR_2->iot, VAR_2->ioh[VAR_1],
      VAR_2->ioff[VAR_1], VAR_3, VAR_5);
 } else {
  FUNC_1(VAR_2->iot, VAR_2->ioh[VAR_1],
      VAR_2->ioff[VAR_1], VAR_3, VAR_5);
  FUNC_2(VAR_2, 0, VAR_5);
 }
}
