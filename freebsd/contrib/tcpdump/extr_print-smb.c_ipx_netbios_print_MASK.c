
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int const u_char ;
struct TYPE_6__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (TYPE_1__*,int const*,int const*) ;
 int FUNC_3 (TYPE_1__*,int const*,char*,int const*,int ) ;
 int const* VAR_0 ;

void
FUNC_4(netdissect_options *VAR_1,
                  const u_char *VAR_2, u_int VAR_3)
{




    int VAR_4;
    const u_char *VAR_5;

    VAR_5 = VAR_2 + VAR_3;

    if (VAR_5 > VAR_1->ndo_snapend)
 VAR_5 = VAR_1->ndo_snapend;
    VAR_0 = VAR_2;
    for (VAR_4 = 0; VAR_4 < 128; VAR_4++) {
 if (&VAR_2[VAR_4 + 4] > VAR_5)
     break;
 if (FUNC_1(&VAR_2[VAR_4], "\377SMB", 4) == 0) {
     FUNC_3(VAR_1, VAR_2, "\n>>> IPX transport ", &VAR_2[VAR_4], 0);
     FUNC_2(VAR_1, &VAR_2[VAR_4], VAR_5);
     FUNC_0((VAR_1, "\n"));
     break;
 }
    }
    if (VAR_4 == 128)
 FUNC_3(VAR_1, VAR_2, "\n>>> Unknown IPX ", VAR_5, 0);
}
