
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; scalar_t__ st_ctime; scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct TYPE_4__ {scalar_t__ st_mtime; scalar_t__ st_ctime; scalar_t__ st_ino; scalar_t__ st_dev; } ;
struct TYPE_5__ {TYPE_1__ dbst; int dbfname; } ;
typedef TYPE_2__ CA_DB ;


 int VAR_0 ;
 int FUNC_0 (int ,struct stat*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(CA_DB *VAR_1)
{
    struct stat VAR_2;

    if (VAR_1 != ((void*)0) && FUNC_0(VAR_1->dbfname, &VAR_2) != -1) {
        if (VAR_1->dbst.st_mtime != VAR_2.st_mtime
            || VAR_1->dbst.st_ctime != VAR_2.st_ctime
            || VAR_1->dbst.st_ino != VAR_2.st_ino
            || VAR_1->dbst.st_dev != VAR_2.st_dev) {
            FUNC_1(VAR_0, "index file changed, reloading");
            return 1;
        }
    }
    return 0;
}
