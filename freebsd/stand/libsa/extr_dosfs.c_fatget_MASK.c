
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int fatsz; int fatbuf_blknum; int * fatbuf; int fd; int spf; } ;
typedef TYPE_1__ DOS_FS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(DOS_FS *VAR_2, u_int *VAR_3)
{
    u_int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    const u_char *VAR_9;
    int VAR_10;


    VAR_4 = *VAR_3;
    if (VAR_4 & 0xf0000000)
        return (VAR_0);


    VAR_6 = FUNC_3(VAR_2->fatsz, VAR_4);
    VAR_8 = VAR_2->fatsz != 32 ? 2 : 4;
    if (VAR_6 + VAR_8 > FUNC_4(VAR_2->spf))
        return (VAR_0);
    VAR_7 = VAR_6 / VAR_1;
    VAR_6 %= VAR_1;
    if (VAR_6 + VAR_8 > VAR_1)
        return (VAR_0);
    if (VAR_7 != VAR_2->fatbuf_blknum) {
        VAR_10 = FUNC_2(VAR_2, VAR_2->fd, VAR_7);
        if (VAR_10 != 0)
            return (VAR_10);
    }
    VAR_9 = VAR_2->fatbuf + VAR_6;


    switch (VAR_2->fatsz) {
    case 32:
        VAR_5 = FUNC_1(VAR_9);
        VAR_5 &= 0x0fffffff;
        break;
    case 16:
        VAR_5 = FUNC_0(VAR_9);
        break;
    case 12:
        VAR_5 = FUNC_0(VAR_9);
        if (VAR_4 & 1)
            VAR_5 >>= 4;
        else
            VAR_5 &= 0xfff;
        break;
    default:
        return (VAR_0);
    }
    *VAR_3 = VAR_5;
    return (0);
}
