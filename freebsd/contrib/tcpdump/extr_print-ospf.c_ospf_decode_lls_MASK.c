
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct TYPE_4__ {int db_options; } ;
struct TYPE_3__ {int hello_options; } ;
struct ospfhdr {int ospf_type; int* ospf_authdata; int const ospf_authtype; int const ospf_len; TYPE_2__ ospf_db; TYPE_1__ ospf_hello; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const,int) ;
 scalar_t__ VAR_0 ;


 int VAR_1 ;


 int FUNC_5 (int ,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(netdissect_options *VAR_4,
                register const struct ospfhdr *VAR_5, register u_int VAR_6)
{
    register const u_char *VAR_7;
    register const u_char *VAR_8;
    register u_int VAR_9;
    register uint16_t VAR_10, VAR_11;
    register uint32_t VAR_12;

    switch (VAR_5->ospf_type) {

    case 128:
        if (!(VAR_5->ospf_hello.hello_options & VAR_1))
            return (0);
        break;

    case 129:
        if (!(VAR_5->ospf_db.db_options & VAR_1))
            return (0);
        break;

    default:
        return (0);
    }


    VAR_9 = FUNC_0(&VAR_5->ospf_len);
    VAR_7 = (const u_char *)VAR_5 + VAR_9;
    VAR_8 = (const u_char *)VAR_5 + VAR_6;

    if (FUNC_0(&VAR_5->ospf_authtype) == VAR_0) {
        VAR_7 = VAR_7 + VAR_5->ospf_authdata[3];
        VAR_9 += VAR_5->ospf_authdata[3];
    }
    if (VAR_9 >= VAR_6) {
        FUNC_2((VAR_4, "\n\t[LLS truncated]"));
        return (1);
    }
    FUNC_4(*VAR_7, 2);
    FUNC_2((VAR_4, "\n\t  LLS: checksum: 0x%04x", (u_int)FUNC_0(VAR_7)));

    VAR_7 += 2;
    FUNC_4(*VAR_7, 2);
    VAR_9 = FUNC_0(VAR_7);
    FUNC_2((VAR_4, ", length: %u", VAR_9));

    VAR_7 += 2;
    FUNC_3(*VAR_7);
    while (VAR_7 < VAR_8) {
        FUNC_4(*VAR_7, 2);
        VAR_10 = FUNC_0(VAR_7);
        FUNC_2((VAR_4, "\n\t    %s (%u)",
               FUNC_6(VAR_3,"Unknown TLV",VAR_10),
               VAR_10));
        VAR_7 += 2;
        FUNC_4(*VAR_7, 2);
        VAR_11 = FUNC_0(VAR_7);
        FUNC_2((VAR_4, ", length: %u", VAR_11));
        VAR_7 += 2;
        switch (VAR_10) {

        case 131:
            if (VAR_11 != 4) {
                FUNC_2((VAR_4, " [should be 4]"));
                VAR_11 = 4;
            }
            FUNC_4(*VAR_7, 4);
            VAR_12 = FUNC_1(VAR_7);
            FUNC_2((VAR_4, "\n\t      Options: 0x%08x [%s]", VAR_12,
                   FUNC_5(VAR_2, "?", VAR_12)));

            break;

        case 130:
            if (VAR_11 != 20) {
                FUNC_2((VAR_4, " [should be 20]"));
                VAR_11 = 20;
            }
            FUNC_4(*VAR_7, 4);
            FUNC_2((VAR_4, "\n\t      Sequence number: 0x%08x", FUNC_1(VAR_7)));
            break;
        }

        VAR_7 += VAR_11;
    }

    return (0);
trunc:
    return (1);
}
