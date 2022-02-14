
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tbuf ;
struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int tv_nsec; int tv_sec; } ;
struct TYPE_8__ {int tv_nsec; int tv_sec; } ;
struct stat {int st_blocks; int st_blksize; TYPE_6__ st_ctim; TYPE_4__ st_mtim; TYPE_2__ st_atim; int st_size; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_9__ {int tv_nsec; int tv_sec; } ;
struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct l_newstat {int st_blocks; int st_blksize; TYPE_5__ st_ctim; TYPE_3__ st_mtim; TYPE_1__ st_atim; int st_size; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_ino; int st_dev; } ;


 int FUNC_0 (struct l_newstat*,int) ;
 int FUNC_1 (struct l_newstat*,void*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct stat *VAR_0, void *VAR_1)
{
 struct l_newstat VAR_2;

 FUNC_0(&VAR_2, sizeof(VAR_2));
 VAR_2.st_dev = FUNC_2(VAR_0->st_dev);
 VAR_2.st_ino = VAR_0->st_ino;
 VAR_2.st_mode = VAR_0->st_mode;
 VAR_2.st_nlink = VAR_0->st_nlink;
 VAR_2.st_uid = VAR_0->st_uid;
 VAR_2.st_gid = VAR_0->st_gid;
 VAR_2.st_rdev = VAR_0->st_rdev;
 VAR_2.st_size = VAR_0->st_size;
 VAR_2.st_atim.tv_sec = VAR_0->st_atim.tv_sec;
 VAR_2.st_atim.tv_nsec = VAR_0->st_atim.tv_nsec;
 VAR_2.st_mtim.tv_sec = VAR_0->st_mtim.tv_sec;
 VAR_2.st_mtim.tv_nsec = VAR_0->st_mtim.tv_nsec;
 VAR_2.st_ctim.tv_sec = VAR_0->st_ctim.tv_sec;
 VAR_2.st_ctim.tv_nsec = VAR_0->st_ctim.tv_nsec;
 VAR_2.st_blksize = VAR_0->st_blksize;
 VAR_2.st_blocks = VAR_0->st_blocks;

 return (FUNC_1(&VAR_2, VAR_1, sizeof(VAR_2)));
}
