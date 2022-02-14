
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_mtime; int st_atime; int st_mode; int st_gid; int st_uid; int st_size; } ;
struct TYPE_4__ {int mtime; int atime; int flags; int perm; int gid; int uid; int size; } ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(const struct stat *VAR_4, Attrib *VAR_5)
{
 FUNC_0(VAR_5);
 VAR_5->flags = 0;
 VAR_5->flags |= VAR_2;
 VAR_5->size = VAR_4->st_size;
 VAR_5->flags |= VAR_3;
 VAR_5->uid = VAR_4->st_uid;
 VAR_5->gid = VAR_4->st_gid;
 VAR_5->flags |= VAR_1;
 VAR_5->perm = VAR_4->st_mode;
 VAR_5->flags |= VAR_0;
 VAR_5->atime = VAR_4->st_atime;
 VAR_5->mtime = VAR_4->st_mtime;
}
