
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct utimbuf {int modtime; int actime; } ;
struct timespec {int member_1; int member_0; } ;
struct TYPE_3__ {int st_mode; int st_gid; int st_uid; struct timespec st_mtim; int st_mtime; } ;
typedef TYPE_1__ stat_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const*,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,struct utimbuf*) ;
 scalar_t__ FUNC_5 (int ,char const*,struct timespec*,int ) ;

int FUNC_6(const char *VAR_3, stat_t *VAR_4)
{
    int VAR_5 = 0;

    if (!FUNC_0(VAR_3))
        return -1;



    {
        struct utimbuf VAR_6;
        VAR_6.actime = FUNC_3(((void*)0));
        VAR_6.modtime = VAR_4->st_mtime;
        VAR_5 += FUNC_4(VAR_3, &VAR_6);
    }
    VAR_5 += FUNC_2(VAR_3, VAR_4->st_uid, VAR_4->st_gid);


    VAR_5 += FUNC_1(VAR_3, VAR_4->st_mode & 07777);

    VAR_2 = 0;
    return -VAR_5;
}
