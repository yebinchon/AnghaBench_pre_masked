
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mtime; int st_atime; int st_mode; int st_gid; int st_uid; int st_size; } ;
struct TYPE_3__ {int flags; int mtime; int atime; int perm; int gid; int uid; int size; } ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct stat*,int ,int) ;

void
FUNC_1(const Attrib *VAR_4, struct stat *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 if (VAR_4->flags & VAR_2)
  VAR_5->st_size = VAR_4->size;
 if (VAR_4->flags & VAR_3) {
  VAR_5->st_uid = VAR_4->uid;
  VAR_5->st_gid = VAR_4->gid;
 }
 if (VAR_4->flags & VAR_1)
  VAR_5->st_mode = VAR_4->perm;
 if (VAR_4->flags & VAR_0) {
  VAR_5->st_atime = VAR_4->atime;
  VAR_5->st_mtime = VAR_4->mtime;
 }
}
