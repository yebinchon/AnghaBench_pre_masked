
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct modeinfo {int gid; int uid; int flags; int mode; int extsize; TYPE_2__* ctimep; TYPE_1__* mtimep; int ino; } ;
struct inotab {long t_seekpt; int t_ino; struct inotab* t_next; } ;
struct context {int gid; int uid; int file_flags; int mode; int extsize; int birthtime_nsec; int birthtime_sec; int atime_nsec; int atime_sec; int mtime_nsec; int mtime_sec; int ino; } ;
struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {int tv_nsec; int tv_sec; } ;


 size_t FUNC_0 (int ) ;
 struct inotab* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int *) ;
 struct inotab** VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static struct inotab *
FUNC_5(struct context *VAR_3, long VAR_4)
{
 struct inotab *VAR_5;
 struct modeinfo VAR_6;

 VAR_5 = FUNC_1(1, sizeof(struct inotab));
 if (VAR_5 == ((void*)0))
  FUNC_4("no memory for directory table\n");
 VAR_5->t_next = VAR_0[FUNC_0(VAR_3->ino)];
 VAR_0[FUNC_0(VAR_3->ino)] = VAR_5;
 VAR_5->t_ino = VAR_3->ino;
 VAR_5->t_seekpt = VAR_4;
 if (VAR_1 == ((void*)0))
  return (VAR_5);
 VAR_6.ino = VAR_3->ino;
 VAR_6.mtimep[0].tv_sec = VAR_3->atime_sec;
 VAR_6.mtimep[0].tv_nsec = VAR_3->atime_nsec;
 VAR_6.mtimep[1].tv_sec = VAR_3->mtime_sec;
 VAR_6.mtimep[1].tv_nsec = VAR_3->mtime_nsec;
 VAR_6.ctimep[0].tv_sec = VAR_3->atime_sec;
 VAR_6.ctimep[0].tv_nsec = VAR_3->atime_nsec;
 VAR_6.ctimep[1].tv_sec = VAR_3->birthtime_sec;
 VAR_6.ctimep[1].tv_nsec = VAR_3->birthtime_nsec;
 VAR_6.extsize = VAR_3->extsize;
 VAR_6.mode = VAR_3->mode;
 VAR_6.flags = VAR_3->file_flags;
 VAR_6.uid = VAR_3->uid;
 VAR_6.gid = VAR_3->gid;
 if (FUNC_3((char *)&VAR_6, sizeof(struct modeinfo), 1, VAR_1) != 1)
  FUNC_2(VAR_2);
 return (VAR_5);
}
