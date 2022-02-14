
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct filedescent {int fde_caps; TYPE_2__* fde_file; } ;
struct filedesc {int fd_freefile; int fd_lastfile; int fd_cmask; struct filedescent* fd_ofiles; } ;
struct TYPE_4__ {TYPE_1__* f_ops; } ;
struct TYPE_3__ {int fo_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (int ) ;
 struct filedesc* FUNC_2 (struct filedesc*,int) ;
 int FUNC_3 (struct filedesc*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *,int) ;

struct filedesc *
FUNC_6(struct filedesc *VAR_1)
{
 struct filedesc *VAR_2;
 struct filedescent *VAR_3, *VAR_4;
 int VAR_5;

 FUNC_1(VAR_1 != ((void*)0));

 VAR_2 = FUNC_2(VAR_1, 1);

 VAR_2->fd_freefile = -1;
 for (VAR_5 = 0; VAR_5 <= VAR_1->fd_lastfile; ++VAR_5) {
  VAR_4 = &VAR_1->fd_ofiles[VAR_5];
  if (VAR_4->fde_file == ((void*)0) ||
      (VAR_4->fde_file->f_ops->fo_flags & VAR_0) == 0 ||
      !FUNC_4(VAR_4->fde_file)) {
   if (VAR_2->fd_freefile == -1)
    VAR_2->fd_freefile = VAR_5;
   continue;
  }
  VAR_3 = &VAR_2->fd_ofiles[VAR_5];
  *VAR_3 = *VAR_4;
  FUNC_5(&VAR_4->fde_caps, &VAR_3->fde_caps, 1);
  FUNC_3(VAR_2, VAR_5);
  VAR_2->fd_lastfile = VAR_5;
 }
 if (VAR_2->fd_freefile == -1)
  VAR_2->fd_freefile = VAR_5;
 VAR_2->fd_cmask = VAR_1->fd_cmask;
 FUNC_0(VAR_1);
 return (VAR_2);
}
