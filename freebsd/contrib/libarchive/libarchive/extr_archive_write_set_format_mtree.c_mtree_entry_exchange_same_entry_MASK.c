
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s; } ;
struct mtree_entry {int mode; int ino; int devminor; int devmajor; int rdevminor; int rdevmajor; int mtime_nsec; int mtime; int fflags_clear; int fflags_set; int gid; int uid; int size; int filetype; int nlink; int fflags_text; int gname; int uname; int symlink; TYPE_1__ pathname; } ;
struct archive_write {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_4, struct mtree_entry *VAR_5,
    struct mtree_entry *VAR_6)
{

 if ((VAR_5->mode & VAR_0) != (VAR_6->mode & VAR_0)) {
  FUNC_0(&VAR_4->archive, VAR_1,
      "Found duplicate entries `%s' and its file type is "
      "different",
      VAR_5->pathname.s);
  return (VAR_2);
 }


 FUNC_2(&VAR_5->symlink);
 FUNC_1(&VAR_5->symlink, &VAR_6->symlink);
 FUNC_2(&VAR_5->uname);
 FUNC_1(&VAR_5->uname, &VAR_6->uname);
 FUNC_2(&VAR_5->gname);
 FUNC_1(&VAR_5->gname, &VAR_6->gname);
 FUNC_2(&VAR_5->fflags_text);
 FUNC_1(&VAR_5->fflags_text, &VAR_6->fflags_text);
 VAR_5->nlink = VAR_6->nlink;
 VAR_5->filetype = VAR_6->filetype;
 VAR_5->mode = VAR_6->mode;
 VAR_5->size = VAR_6->size;
 VAR_5->uid = VAR_6->uid;
 VAR_5->gid = VAR_6->gid;
 VAR_5->fflags_set = VAR_6->fflags_set;
 VAR_5->fflags_clear = VAR_6->fflags_clear;
 VAR_5->mtime = VAR_6->mtime;
 VAR_5->mtime_nsec = VAR_6->mtime_nsec;
 VAR_5->rdevmajor = VAR_6->rdevmajor;
 VAR_5->rdevminor = VAR_6->rdevminor;
 VAR_5->devmajor = VAR_6->devmajor;
 VAR_5->devminor = VAR_6->devminor;
 VAR_5->ino = VAR_6->ino;

 return (VAR_3);
}
