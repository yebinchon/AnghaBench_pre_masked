
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
struct open_file {int dummy; } ;
typedef size_t daddr_t ;
struct TYPE_3__ {void* fatbuf_blknum; int fatbuf; scalar_t__ lsnfat; int spf; } ;
typedef TYPE_1__ DOS_FS ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (struct open_file*,scalar_t__,int ,size_t) ;
 int FUNC_2 (int ,int ,size_t) ;
 size_t FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(DOS_FS *VAR_1, struct open_file *VAR_2, u_int VAR_3)
{
    int VAR_4;
    size_t VAR_5;
    daddr_t VAR_6, VAR_7;

    VAR_6 = ((daddr_t)VAR_3) * VAR_0;
    VAR_7 = FUNC_3(VAR_1->spf);
    VAR_5 = VAR_0;
    if (VAR_6 > VAR_7)
        VAR_6 = VAR_7;
    if (VAR_6 + VAR_5 > VAR_7)
        VAR_5 = ((size_t)(VAR_7 - VAR_6));

    if (VAR_5 != 0) {
        VAR_4 = FUNC_1(VAR_2, VAR_1->lsnfat + FUNC_0(VAR_6),
            VAR_1->fatbuf, VAR_5);
        if (VAR_4 != 0) {
            VAR_1->fatbuf_blknum = ((u_int)(-1));
            return (VAR_4);
        }
    }
    if (VAR_5 < VAR_0)
        FUNC_2(VAR_1->fatbuf + VAR_5, 0, VAR_0 - VAR_5);

    VAR_1->fatbuf_blknum = VAR_3;
    return (0);
}
