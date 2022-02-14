
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filedesc {int fd_lastfile; scalar_t__ fd_nfiles; scalar_t__ fd_jdir; scalar_t__ fd_rdir; scalar_t__ fd_cdir; struct fdescenttbl* fd_files; int fd_map; int fd_cmask; int fd_holdcnt; int fd_refcnt; } ;
struct filedesc0 {int fd_dfiles; int fd_dmap; struct filedesc fd_fd; } ;
struct fdescenttbl {int fdt_nfiles; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct filedesc*,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 struct filedesc0* FUNC_5 (int ,int) ;
 int FUNC_6 (scalar_t__) ;

struct filedesc *
FUNC_7(struct filedesc *VAR_5, bool VAR_6)
{
 struct filedesc0 *VAR_7;
 struct filedesc *VAR_8;

 VAR_7 = FUNC_5(VAR_4, VAR_1 | VAR_2);
 VAR_8 = &VAR_7->fd_fd;


 FUNC_0(VAR_8);
 FUNC_4(&VAR_8->fd_refcnt, 1);
 FUNC_4(&VAR_8->fd_holdcnt, 1);
 VAR_8->fd_cmask = VAR_0;
 VAR_8->fd_map = VAR_7->fd_dmap;
 VAR_8->fd_lastfile = -1;
 VAR_8->fd_files = (struct fdescenttbl *)&VAR_7->fd_dfiles;
 VAR_8->fd_files->fdt_nfiles = VAR_3;

 if (VAR_5 == ((void*)0))
  return (VAR_8);

 if (VAR_6 && VAR_5->fd_lastfile >= VAR_8->fd_nfiles)
  FUNC_3(VAR_8, VAR_5->fd_lastfile + 1);

 FUNC_1(VAR_5);
 VAR_8->fd_cdir = VAR_5->fd_cdir;
 if (VAR_8->fd_cdir)
  FUNC_6(VAR_8->fd_cdir);
 VAR_8->fd_rdir = VAR_5->fd_rdir;
 if (VAR_8->fd_rdir)
  FUNC_6(VAR_8->fd_rdir);
 VAR_8->fd_jdir = VAR_5->fd_jdir;
 if (VAR_8->fd_jdir)
  FUNC_6(VAR_8->fd_jdir);

 if (!VAR_6) {
  FUNC_2(VAR_5);
 } else {
  while (VAR_5->fd_lastfile >= VAR_8->fd_nfiles) {
   FUNC_2(VAR_5);
   FUNC_3(VAR_8, VAR_5->fd_lastfile + 1);
   FUNC_1(VAR_5);
  }
 }

 return (VAR_8);
}
