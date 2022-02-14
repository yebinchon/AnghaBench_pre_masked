
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct open_file {void* f_fsdata; } ;
struct TYPE_14__ {int attr; int size; } ;
struct TYPE_13__ {TYPE_3__ de; TYPE_1__* fs; } ;
struct TYPE_12__ {int links; int fatsz; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_FILE ;
typedef TYPE_3__ DOS_DE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,struct open_file*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,char const*,TYPE_3__**) ;
 int FUNC_7 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_9(const char *VAR_3, struct open_file *VAR_4)
{
    DOS_DE *VAR_5;
    DOS_FILE *VAR_6;
    DOS_FS *VAR_7;
    u_int VAR_8, VAR_9;
    int VAR_10;


    if ((VAR_7 = FUNC_5(sizeof(DOS_FS))) == ((void*)0))
        return (VAR_2);
    if ((VAR_10 = FUNC_2(VAR_7, VAR_4))) {
        FUNC_4(VAR_7);
        return (VAR_10);
    }

    if ((VAR_10 = FUNC_6(VAR_7, VAR_3, &VAR_5))) {
        FUNC_3(VAR_7);
        return (VAR_10);
    }

    VAR_9 = FUNC_8(VAR_7->fatsz, VAR_5);
    VAR_8 = FUNC_1(VAR_5->size);

    if ((!(VAR_5->attr & VAR_1) && (!VAR_9 != !VAR_8)) ||
 ((VAR_5->attr & VAR_1) && VAR_8) ||
 (VAR_9 && !FUNC_7(VAR_7, VAR_9))) {
        FUNC_3(VAR_7);
        return (VAR_0);
    }
    if ((VAR_6 = FUNC_5(sizeof(DOS_FILE))) == ((void*)0)) {
        VAR_10 = VAR_2;
        FUNC_3(VAR_7);
        return (VAR_10);
    }
    FUNC_0(VAR_6, sizeof(DOS_FILE));
    VAR_6->fs = VAR_7;
    VAR_7->links++;
    VAR_6->de = *VAR_5;
    VAR_4->f_fsdata = (void *)VAR_6;
    return (0);
}
