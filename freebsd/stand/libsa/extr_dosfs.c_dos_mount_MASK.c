
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
struct open_file {int dummy; } ;
struct TYPE_8__ {int* h_clus; } ;
struct TYPE_10__ {char* name; int* clus; TYPE_1__ dex; } ;
struct TYPE_9__ {int fatsz; int rdcl; TYPE_4__ root; int * fatbuf; struct open_file* fd; } ;
typedef TYPE_2__ DOS_FS ;
typedef int DOS_BS ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,struct open_file*,int ) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct open_file*,int ,int *,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(DOS_FS *VAR_3, struct open_file *VAR_4)
{
    int VAR_5;
    u_char *VAR_6;

    FUNC_0(VAR_3, sizeof(DOS_FS));
    VAR_3->fd = VAR_4;

    if ((VAR_6 = FUNC_4(FUNC_6(1))) == ((void*)0))
        return (VAR_2);
    if ((VAR_5 = FUNC_3(VAR_3->fd, 0, VAR_6, FUNC_6(1))) ||
        (VAR_5 = FUNC_5(VAR_3, (DOS_BS *)VAR_6))) {
        FUNC_2(VAR_6);
        return (VAR_5);
    }
    FUNC_2(VAR_6);

    if ((VAR_3->fatbuf = FUNC_4(VAR_0)) == ((void*)0))
        return (VAR_2);
    VAR_5 = FUNC_1(VAR_3, VAR_4, 0);
    if (VAR_5 != 0) {
        FUNC_2(VAR_3->fatbuf);
        return (VAR_5);
    }

    VAR_3->root = VAR_1[0];
    VAR_3->root.name[0] = ' ';
    if (VAR_3->fatsz == 32) {
        VAR_3->root.clus[0] = VAR_3->rdcl & 0xff;
        VAR_3->root.clus[1] = (VAR_3->rdcl >> 8) & 0xff;
        VAR_3->root.dex.h_clus[0] = (VAR_3->rdcl >> 16) & 0xff;
        VAR_3->root.dex.h_clus[1] = (VAR_3->rdcl >> 24) & 0xff;
    }
    return (0);
}
