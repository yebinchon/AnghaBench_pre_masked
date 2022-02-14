
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; int st_nlink; int st_size; scalar_t__ st_gid; scalar_t__ st_uid; } ;
struct open_file {scalar_t__ f_fsdata; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {TYPE_2__ de; int fs; } ;
typedef TYPE_1__ DOS_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(struct open_file *VAR_4, struct stat *VAR_5)
{
    DOS_FILE *VAR_6 = (DOS_FILE *)VAR_4->f_fsdata;


    VAR_5->st_mode = VAR_6->de.attr & VAR_1 ? VAR_2 | 0555 : VAR_3 | 0444;
    VAR_5->st_nlink = 1;
    VAR_5->st_uid = 0;
    VAR_5->st_gid = 0;
    if ((VAR_5->st_size = FUNC_0(VAR_6->fs, &VAR_6->de)) == -1)
 return (VAR_0);
    return (0);
}
