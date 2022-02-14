
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;

 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,int,int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3(netdissect_options *VAR_3,
                        const u_char *VAR_4, u_int VAR_5)
{
    int VAR_6, VAR_7 = VAR_0;

    if (VAR_5 < 8) {
        return VAR_7;
    }
    VAR_6 = *(VAR_4+3);

    FUNC_0((VAR_3, "\n\t  %s Subtype (%u)",
           FUNC_2(VAR_2, "unknown", VAR_6),
           VAR_6));

    switch (VAR_6) {
    case 128:
        FUNC_0((VAR_3, "\n\t  MUD-URL="));
        (void)FUNC_1(VAR_3, VAR_4+4, VAR_5-4, ((void*)0));
        break;
    default:
        VAR_7=VAR_1;
    }

    return VAR_7;
}
