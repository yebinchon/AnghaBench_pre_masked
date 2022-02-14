
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dirent64 {int dummy; } ;
struct dirent {scalar_t__ DIRENT_INODE; } ;
typedef scalar_t__ apr_status_t ;
typedef int apr_int32_t ;
typedef scalar_t__ apr_ino_t ;
struct TYPE_9__ {int valid; int inode; int name; scalar_t__ filetype; int pool; int * fname; } ;
typedef TYPE_1__ apr_finfo_t ;
typedef scalar_t__ apr_filetype_e ;
struct TYPE_10__ {TYPE_3__* entry; int pool; int dirname; int dirstruct; } ;
typedef TYPE_2__ apr_dir_t ;
struct TYPE_11__ {int DIRENT_INODE; int d_name; int DIRENT_TYPE; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,struct dirent64**) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*,struct dirent**) ;

apr_status_t FUNC_7(apr_finfo_t *VAR_11, apr_int32_t VAR_12,
                          apr_dir_t *VAR_13)
{
    apr_status_t VAR_14 = 0;
    VAR_10 = 0;
    VAR_13->entry = FUNC_4(VAR_13->dirstruct);
    if (VAR_13->entry == ((void*)0)) {

        if (VAR_10 == VAR_7) {
            VAR_14 = VAR_0;
        }
        else
            VAR_14 = VAR_10;
    }



    VAR_11->fname = ((void*)0);

    if (VAR_14) {
        VAR_11->valid = 0;
        return VAR_14;
    }
    VAR_12 &= ~VAR_3;

    if (VAR_12)
    {
        char VAR_15[VAR_6];
        char *VAR_16;

        VAR_16 = FUNC_0(VAR_15, VAR_13->dirname, sizeof VAR_15);

        if (VAR_16 > VAR_15 && VAR_16[-1] != '/' && (VAR_16 < VAR_15 + VAR_6))
            *VAR_16++ = '/';

        FUNC_0(VAR_16, VAR_13->entry->d_name,
                    sizeof VAR_15 - (VAR_16 - VAR_15));

        VAR_14 = FUNC_2(VAR_11, VAR_15, VAR_2 | VAR_12, VAR_13->pool);

        VAR_11->fname = ((void*)0);
    }

    if (VAR_12 && (VAR_14 == VAR_7 || VAR_14 == VAR_5)) {
        VAR_12 &= ~VAR_11->valid;
    }
    else {



        VAR_11->pool = VAR_13->pool;
        VAR_11->valid = 0;
    }

    VAR_11->name = FUNC_1(VAR_13->pool, VAR_13->entry->d_name);
    VAR_11->valid |= VAR_3;

    if (VAR_12)
        return VAR_5;

    return VAR_7;
}
