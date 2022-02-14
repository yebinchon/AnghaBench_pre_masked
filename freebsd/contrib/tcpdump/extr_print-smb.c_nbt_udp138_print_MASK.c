
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int const u_char ;
struct TYPE_6__ {int ndo_vflag; int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int const*,int const*) ;
 int const* FUNC_3 (TYPE_1__*,int const*,char*,int const*,int ) ;
 int const* VAR_0 ;

void
FUNC_4(netdissect_options *VAR_1,
                 const u_char *VAR_2, int VAR_3)
{
    const u_char *VAR_4 = VAR_2 + VAR_3;

    if (VAR_4 > VAR_1->ndo_snapend)
 VAR_4 = VAR_1->ndo_snapend;
    if (VAR_4 <= VAR_2)
 return;
    VAR_0 = VAR_2;

    if (VAR_1->ndo_vflag < 2) {
 FUNC_0((VAR_1, "NBT UDP PACKET(138)"));
 return;
    }

    VAR_2 = FUNC_3(VAR_1, VAR_2,
 "\n>>> NBT UDP PACKET(138) Res=[rw] ID=[rw] IP=[b.b.b.b] Port=[rd] Length=[rd] Res2=[rw]\nSourceName=[n1]\nDestName=[n1]\n#",
 VAR_4, 0);

    if (VAR_2 != ((void*)0)) {

 if (&VAR_2[3] >= VAR_4)
     goto out;

 if (FUNC_1(VAR_2, "\377SMB",4) == 0)
     FUNC_2(VAR_1, VAR_2, VAR_4);
    }
out:
    FUNC_0((VAR_1, "\n"));
}
