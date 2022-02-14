
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct stp_bpdu_ {int dummy; } ;
struct TYPE_5__ {int ndo_snapend; int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int const*,int,int ) ;

__attribute__((used)) static int
FUNC_5(netdissect_options *VAR_8, const struct stp_bpdu_ *VAR_9,
                   u_int VAR_10)
{
    const u_char *VAR_11;




    if (!VAR_8->ndo_vflag) {
        return 1;
    }

    VAR_11 = (const u_char *)VAR_9;
    FUNC_3(VAR_11 + VAR_10 + VAR_1 + 16);

    FUNC_2((VAR_8, "\n\tv4len %d, ", FUNC_0 (VAR_11 + VAR_10)));
    FUNC_2((VAR_8, "AUXMCID Name "));
    if (FUNC_4(VAR_8, VAR_11 + VAR_10 + VAR_6, 32,
     VAR_8->ndo_snapend))
 goto trunc;
    FUNC_2((VAR_8, ", Rev %u,\n\t\tdigest %08x%08x%08x%08x",
            FUNC_0(VAR_11 + VAR_10 + VAR_7),
            FUNC_1(VAR_11 + VAR_10 + VAR_5),
            FUNC_1(VAR_11 + VAR_10 + VAR_5 + 4),
            FUNC_1(VAR_11 + VAR_10 + VAR_5 + 8),
            FUNC_1(VAR_11 + VAR_10 + VAR_5 + 12)));

    FUNC_2((VAR_8, "\n\tAgreement num %d, Discarded Agreement num %d, Agreement valid-"
            "flag %d,\n\tRestricted role-flag: %d, Format id %d cap %d, "
            "Convention id %d cap %d,\n\tEdge count %d, "
            "Agreement digest %08x%08x%08x%08x%08x\n",
            VAR_11[VAR_10 + VAR_4]>>6,
            VAR_11[VAR_10 + VAR_4]>>4 & 0x3,
            VAR_11[VAR_10 + VAR_4]>>3 & 0x1,
            VAR_11[VAR_10 + VAR_4]>>2 & 0x1,
            VAR_11[VAR_10 + VAR_3]>>4,
            VAR_11[VAR_10 + VAR_3]&0x00ff,
            VAR_11[VAR_10 + VAR_0]>>4,
            VAR_11[VAR_10 + VAR_0]&0x00ff,
            FUNC_0(VAR_11 + VAR_10 + VAR_2),
            FUNC_1(VAR_11 + VAR_10 + VAR_1),
            FUNC_1(VAR_11 + VAR_10 + VAR_1+4),
            FUNC_1(VAR_11 + VAR_10 + VAR_1+8),
            FUNC_1(VAR_11 + VAR_10 + VAR_1+12),
            FUNC_1(VAR_11 + VAR_10 + VAR_1+16)));
    return 1;

trunc:
    return 0;
}
