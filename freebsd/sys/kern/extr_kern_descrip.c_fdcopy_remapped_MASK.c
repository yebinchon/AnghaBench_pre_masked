
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filedescent {int fde_caps; TYPE_2__* fde_file; } ;
struct filedesc {int fd_lastfile; size_t fd_freefile; int fd_cmask; struct filedescent* fd_ofiles; } ;
struct TYPE_4__ {TYPE_1__* f_ops; } ;
struct TYPE_3__ {int fo_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct filedesc*) ;
 struct filedesc* FUNC_3 (struct filedesc*,int) ;
 int FUNC_4 (struct filedesc*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int *,int) ;

int
FUNC_7(struct filedesc *VAR_4, const int *VAR_5, size_t VAR_6,
    struct filedesc **VAR_7)
{
 struct filedesc *VAR_8;
 struct filedescent *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 FUNC_1(VAR_4 != ((void*)0));

 VAR_8 = FUNC_3(VAR_4, 1);
 if (VAR_6 > VAR_4->fd_lastfile + 1) {

  VAR_11 = VAR_1;
  goto bad;
 }

 VAR_8->fd_freefile = VAR_6;
 for (VAR_12 = 0; VAR_12 < VAR_6; ++VAR_12) {
  if (VAR_5[VAR_12] < 0 || VAR_5[VAR_12] > VAR_4->fd_lastfile) {

   VAR_11 = VAR_2;
   goto bad;
  }
  VAR_10 = &VAR_4->fd_ofiles[VAR_5[VAR_12]];
  if (VAR_10->fde_file == ((void*)0)) {

   VAR_11 = VAR_2;
   goto bad;
  }
  if ((VAR_10->fde_file->f_ops->fo_flags & VAR_0) == 0) {

   VAR_11 = VAR_3;
   goto bad;
  }
  if (!FUNC_5(VAR_9->fde_file)) {
   VAR_11 = VAR_2;
   goto bad;
  }
  VAR_9 = &VAR_8->fd_ofiles[VAR_12];
  *VAR_9 = *VAR_10;
  FUNC_6(&VAR_10->fde_caps, &VAR_9->fde_caps, 1);
  FUNC_4(VAR_8, VAR_12);
  VAR_8->fd_lastfile = VAR_12;
 }
 VAR_8->fd_cmask = VAR_4->fd_cmask;
 FUNC_0(VAR_4);
 *VAR_7 = VAR_8;
 return (0);
bad:
 FUNC_0(VAR_4);
 FUNC_2(VAR_8);
 return (VAR_11);
}
