
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_6__ {TYPE_1__* fs; } ;
struct TYPE_5__ {int links; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_FILE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_2(struct open_file *VAR_0)
{
    DOS_FILE *VAR_1 = (DOS_FILE *)VAR_0->f_fsdata;
    DOS_FS *VAR_2 = VAR_1->fs;

    VAR_1->fs->links--;
    FUNC_1(VAR_1);
    FUNC_0(VAR_2);
    return (0);
}
