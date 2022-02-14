
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int tv_nsec; } ;
struct TYPE_9__ {int tv_nsec; } ;
struct TYPE_8__ {int tv_nsec; } ;
struct TYPE_11__ {scalar_t__ st_ino; int st_atimensec; int st_atime_n; int st_mtimensec; int st_mtime_n; int st_ctimensec; int st_ctime_n; scalar_t__ st_blocks; TYPE_3__ st_ctim; int st_ctime; TYPE_2__ st_mtim; int st_mtime; TYPE_1__ st_atim; int st_atime; int st_nlink; int st_dev; int st_size; int st_gid; int st_uid; int st_mode; } ;
typedef TYPE_4__ struct_stat ;
typedef void* apr_off_t ;
typedef int apr_int32_t ;
typedef scalar_t__ apr_ino_t ;
struct TYPE_12__ {int valid; scalar_t__ inode; int atime; int mtime; int ctime; void* csize; int nlink; int device; int size; int group; int user; int filetype; int protection; } ;
typedef TYPE_5__ apr_finfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(apr_finfo_t *VAR_8, struct_stat *VAR_9,
                           apr_int32_t VAR_10)
{
    VAR_8->valid = VAR_3 | VAR_1 | VAR_4
                 | VAR_5 | VAR_6;
    VAR_8->protection = FUNC_2(VAR_9->st_mode);
    VAR_8->filetype = FUNC_3(VAR_9->st_mode);
    VAR_8->user = VAR_9->st_uid;
    VAR_8->group = VAR_9->st_gid;
    VAR_8->size = VAR_9->st_size;
    VAR_8->device = VAR_9->st_dev;
    VAR_8->nlink = VAR_9->st_nlink;



    if (sizeof(apr_ino_t) >= sizeof(VAR_9->st_ino)
        || (apr_ino_t)VAR_9->st_ino == VAR_9->st_ino) {
        VAR_8->inode = VAR_9->st_ino;
    } else {
        VAR_8->valid &= ~VAR_2;
    }

    FUNC_1(&VAR_8->atime, VAR_9->st_atime);
    FUNC_1(&VAR_8->mtime, VAR_9->st_mtime);
    FUNC_1(&VAR_8->ctime, VAR_9->st_ctime);
}
