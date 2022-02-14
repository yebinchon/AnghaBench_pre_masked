
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int media; int spc; int fats; int lsecs; int secs; int ressec; int rdcl; int lspf; int dirents; int spf; int secsiz; } ;
struct TYPE_9__ {int* jmp; TYPE_1__ bpb; } ;
struct TYPE_8__ {int spc; int bsize; int spf; scalar_t__ rdcl; int lsnfat; int lsndir; int lsndta; scalar_t__ xclus; int fatsz; scalar_t__ dirents; scalar_t__ bshift; } ;
typedef TYPE_2__ DOS_FS ;
typedef TYPE_3__ DOS_BS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(DOS_FS *VAR_3, DOS_BS *VAR_4)
{
    u_int VAR_5;

    if ((VAR_4->jmp[0] != 0x69 &&
         VAR_4->jmp[0] != 0xe9 &&
         (VAR_4->jmp[0] != 0xeb || VAR_4->jmp[2] != 0x90)) ||
        VAR_4->bpb.media < 0xf0)
        return (VAR_0);
    if (FUNC_0(VAR_4->bpb.secsiz) != VAR_2)
        return (VAR_0);
    if (!(VAR_3->spc = VAR_4->bpb.spc) || VAR_3->spc & (VAR_3->spc - 1))
        return (VAR_0);
    VAR_3->bsize = FUNC_5(VAR_3->spc);
    VAR_3->bshift = FUNC_3(VAR_3->bsize) - 1;
    if ((VAR_3->spf = FUNC_0(VAR_4->bpb.spf))) {
        if (VAR_4->bpb.fats != 2)
            return (VAR_0);
        if (!(VAR_3->dirents = FUNC_0(VAR_4->bpb.dirents)))
            return (VAR_0);
    } else {
        if (!(VAR_3->spf = FUNC_1(VAR_4->bpb.lspf)))
            return (VAR_0);
        if (!VAR_4->bpb.fats || VAR_4->bpb.fats > 16)
            return (VAR_0);
        if ((VAR_3->rdcl = FUNC_1(VAR_4->bpb.rdcl)) < VAR_1)
            return (VAR_0);
    }
    if (!(VAR_3->lsnfat = FUNC_0(VAR_4->bpb.ressec)))
        return (VAR_0);
    VAR_3->lsndir = VAR_3->lsnfat + VAR_3->spf * VAR_4->bpb.fats;
    VAR_3->lsndta = VAR_3->lsndir + FUNC_2(VAR_3->dirents);
    if (!(VAR_5 = FUNC_0(VAR_4->bpb.secs)) && !(VAR_5 = FUNC_1(VAR_4->bpb.lsecs)))
        return (VAR_0);
    if (VAR_3->lsndta > VAR_5)
        return (VAR_0);
    if ((VAR_3->xclus = FUNC_4(VAR_3, VAR_5 - VAR_3->lsndta) + 1) < VAR_1)
        return (VAR_0);
    VAR_3->fatsz = VAR_3->dirents ? VAR_3->xclus < 0xff6 ? 12 : 16 : 32;
    VAR_5 = (FUNC_5(VAR_3->spf) << 1) / (VAR_3->fatsz >> 2) - 1;
    if (VAR_3->xclus > VAR_5)
        VAR_3->xclus = VAR_5;
    return (0);
}
