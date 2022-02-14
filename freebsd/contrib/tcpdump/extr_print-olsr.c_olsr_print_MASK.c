
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct olsr_tc {int const* ans_seq; } ;
struct olsr_msg6 {int msg_type; int const* msg_seq; int vtime; int hopcount; int ttl; int const* originator; int const* msg_len; } ;
struct olsr_msg4 {int msg_type; int const* msg_seq; int vtime; int hopcount; int ttl; int const* originator; int const* msg_len; } ;
struct olsr_hna6 {int mask; int const* network; } ;
struct olsr_hna4 {int* mask; int const* network; } ;
struct olsr_hello_link {int link_code; int const* len; } ;
struct olsr_hello {int will; int htime; } ;
struct olsr_common {int const* packet_seq; int const* packet_len; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_11__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int const*,int,int *) ;
 int FUNC_9 (TYPE_1__*,int const*) ;
 int FUNC_10 (TYPE_1__*,int const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (TYPE_1__*,int const*,int) ;
 int FUNC_15 (TYPE_1__*,int const*,int) ;
 int FUNC_16 (TYPE_1__*,int const*,int) ;
 int FUNC_17 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_18 (int ,char*,int) ;

void
FUNC_19(netdissect_options *VAR_12,
           const u_char *VAR_13, u_int VAR_14, int VAR_15)
{
    union {
        const struct olsr_common *common;
        const struct olsr_msg4 *msg4;
        const struct olsr_msg6 *msg6;
        const struct olsr_hello *hello;
        const struct olsr_hello_link *hello_link;
        const struct olsr_tc *tc;
        const struct olsr_hna4 *hna;
    } VAR_16;

    u_int VAR_17, VAR_18, VAR_19, VAR_20;
    uint16_t VAR_21, VAR_22;
    u_int VAR_23;
    uint8_t VAR_24, VAR_25;
    const u_char *VAR_26, *VAR_27;

    VAR_26 = VAR_13;

    if (VAR_14 < sizeof(struct olsr_common)) {
        goto trunc;
    }

    FUNC_4(*VAR_26, sizeof(struct olsr_common));

    VAR_16.common = (const struct olsr_common *)VAR_26;
    VAR_14 = FUNC_13(VAR_14, FUNC_0(VAR_16.common->packet_len));

    FUNC_3((VAR_12, "OLSRv%i, seq 0x%04x, length %u",
            (VAR_15 == 0) ? 4 : 6,
            FUNC_0(VAR_16.common->packet_seq),
            VAR_14));

    VAR_26 += sizeof(struct olsr_common);




    if (VAR_12->ndo_vflag < 1) {
        return;
    }

    while (VAR_26 < (VAR_13+VAR_14)) {
        union
        {
            const struct olsr_msg4 *v4;
            const struct olsr_msg6 *v6;
        } VAR_28;
        int VAR_29 = 0;

        if (VAR_15)
        {
            FUNC_4(*VAR_26, sizeof(struct olsr_msg6));
            VAR_28.v6 = (const struct olsr_msg6 *) VAR_26;
            VAR_17 = VAR_28.v6->msg_type;
            VAR_18 = FUNC_0(VAR_28.v6->msg_len);
            if ((VAR_18 >= sizeof (struct olsr_msg6))
                    && (VAR_18 <= VAR_14))
                VAR_29 = 1;


            if (VAR_17 == 0 || VAR_18 == 0) {
                return;
            }

            FUNC_3((VAR_12, "\n\t%s Message (%#04x), originator %s, ttl %u, hop %u"
                    "\n\t  vtime %.3fs, msg-seq 0x%04x, length %u%s",
                    FUNC_18(VAR_10, "Unknown", VAR_17),
                    VAR_17, FUNC_9(VAR_12, VAR_28.v6->originator),
                    VAR_28.v6->ttl,
                    VAR_28.v6->hopcount,
                    FUNC_2(VAR_28.v6->vtime),
                    FUNC_0(VAR_28.v6->msg_seq),
                    VAR_18, (VAR_29 == 0) ? " (invalid)" : ""));
            if (!VAR_29) {
                return;
            }

            VAR_19 = VAR_18 - sizeof(struct olsr_msg6);
            VAR_27 = VAR_26 + sizeof(struct olsr_msg6);
        }
        else
        {
            FUNC_4(*VAR_26, sizeof(struct olsr_msg4));
            VAR_28.v4 = (const struct olsr_msg4 *) VAR_26;
            VAR_17 = VAR_28.v4->msg_type;
            VAR_18 = FUNC_0(VAR_28.v4->msg_len);
            if ((VAR_18 >= sizeof (struct olsr_msg4))
                    && (VAR_18 <= VAR_14))
                VAR_29 = 1;


            if (VAR_17 == 0 || VAR_18 == 0) {
                return;
            }

            FUNC_3((VAR_12, "\n\t%s Message (%#04x), originator %s, ttl %u, hop %u"
                    "\n\t  vtime %.3fs, msg-seq 0x%04x, length %u%s",
                    FUNC_18(VAR_10, "Unknown", VAR_17),
                    VAR_17, FUNC_10(VAR_12, VAR_28.v4->originator),
                    VAR_28.v4->ttl,
                    VAR_28.v4->hopcount,
                    FUNC_2(VAR_28.v4->vtime),
                    FUNC_0(VAR_28.v4->msg_seq),
                    VAR_18, (VAR_29 == 0) ? " (invalid)" : ""));
            if (!VAR_29) {
                return;
            }

            VAR_19 = VAR_18 - sizeof(struct olsr_msg4);
            VAR_27 = VAR_26 + sizeof(struct olsr_msg4);
        }

        switch (VAR_17) {
        case 134:
        case 135:
            if (VAR_19 < sizeof(struct olsr_hello))
                goto trunc;
            FUNC_4(*VAR_27, sizeof(struct olsr_hello));

            VAR_16.hello = (const struct olsr_hello *)VAR_27;
            FUNC_3((VAR_12, "\n\t  hello-time %.3fs, MPR willingness %u",
                   FUNC_2(VAR_16.hello->htime), VAR_16.hello->will));
            VAR_27 += sizeof(struct olsr_hello);
            VAR_19 -= sizeof(struct olsr_hello);

            while (VAR_19 >= sizeof(struct olsr_hello_link)) {
                int VAR_30 = 0;




                FUNC_4(*VAR_27, sizeof(struct olsr_hello_link));

                VAR_16.hello_link = (const struct olsr_hello_link *)VAR_27;

                VAR_20 = FUNC_0(VAR_16.hello_link->len);
                VAR_24 = FUNC_5(VAR_16.hello_link->link_code);
                VAR_25 = FUNC_6(VAR_16.hello_link->link_code);

                if ((VAR_20 <= VAR_19)
                        && (VAR_20 >= sizeof(struct olsr_hello_link)))
                    VAR_30 = 1;

                FUNC_3((VAR_12, "\n\t    link-type %s, neighbor-type %s, len %u%s",
                       FUNC_18(VAR_9, "Unknown", VAR_24),
                       FUNC_18(VAR_11, "Unknown", VAR_25),
                       VAR_20,
                       (VAR_30 == 0) ? " (invalid)" : ""));

                if (VAR_30 == 0)
                    break;

                VAR_27 += sizeof(struct olsr_hello_link);
                VAR_19 -= sizeof(struct olsr_hello_link);
                VAR_20 -= sizeof(struct olsr_hello_link);

                FUNC_4(*VAR_27, VAR_20);
                if (VAR_17 == 134) {
                    if (FUNC_16(VAR_12, VAR_27, VAR_20) == -1)
                        goto trunc;
                } else {
                    if (VAR_15) {
                        if (FUNC_15(VAR_12, VAR_27, VAR_20) == -1)
                            goto trunc;
                    } else {
                        if (FUNC_14(VAR_12, VAR_27, VAR_20) == -1)
                            goto trunc;
                    }
                }

                VAR_27 += VAR_20;
                VAR_19 -= VAR_20;
            }
            break;

        case 128:
        case 129:
            if (VAR_19 < sizeof(struct olsr_tc))
                goto trunc;
            FUNC_4(*VAR_27, sizeof(struct olsr_tc));

            VAR_16.tc = (const struct olsr_tc *)VAR_27;
            FUNC_3((VAR_12, "\n\t    advertised neighbor seq 0x%04x",
                   FUNC_0(VAR_16.tc->ans_seq)));
            VAR_27 += sizeof(struct olsr_tc);
            VAR_19 -= sizeof(struct olsr_tc);

            if (VAR_17 == 128) {
                if (FUNC_16(VAR_12, VAR_27, VAR_19) == -1)
                    goto trunc;
            } else {
                if (VAR_15) {
                    if (FUNC_15(VAR_12, VAR_27, VAR_19) == -1)
                        goto trunc;
                } else {
                    if (FUNC_14(VAR_12, VAR_27, VAR_19) == -1)
                        goto trunc;
                }
            }
            break;

        case 132:
        {
            size_t VAR_31 = sizeof(struct in_addr);

            if (VAR_15)
                VAR_31 = sizeof(struct in6_addr);

            while (VAR_19 >= VAR_31) {
                FUNC_4(*VAR_27, VAR_31);
                FUNC_3((VAR_12, "\n\t  interface address %s",
                        VAR_15 ? FUNC_9(VAR_12, VAR_27) :
                        FUNC_10(VAR_12, VAR_27)));

                VAR_27 += VAR_31;
                VAR_19 -= VAR_31;
            }
            break;
        }

        case 133:
            if (VAR_15)
            {
                int VAR_32 = 0;

                FUNC_3((VAR_12, "\n\t  Advertised networks (total %u)",
                        (unsigned int) (VAR_19 / sizeof(struct olsr_hna6))));

                while (VAR_19 >= sizeof(struct olsr_hna6)) {
                    const struct olsr_hna6 *VAR_33;

                    FUNC_4(*VAR_27, sizeof(struct olsr_hna6));

                    VAR_33 = (const struct olsr_hna6 *)VAR_27;

                    FUNC_3((VAR_12, "\n\t    #%i: %s/%u",
                            VAR_32, FUNC_9(VAR_12, VAR_33->network),
                            FUNC_12 (VAR_33->mask)));

                    VAR_27 += sizeof(struct olsr_hna6);
                    VAR_19 -= sizeof(struct olsr_hna6);
                }
            }
            else
            {
                int VAR_34 = 0;

                FUNC_3((VAR_12, "\n\t  Advertised networks (total %u)",
                        (unsigned int) (VAR_19 / sizeof(struct olsr_hna4))));

                while (VAR_19 >= sizeof(struct olsr_hna4)) {
                    FUNC_4(*VAR_27, sizeof(struct olsr_hna4));

                    VAR_16.hna = (const struct olsr_hna4 *)VAR_27;


                    if (!VAR_16.hna->network[0] && !VAR_16.hna->network[1] &&
                        !VAR_16.hna->network[2] && !VAR_16.hna->network[3] &&
                        !VAR_16.hna->mask[VAR_7] &&
                        VAR_16.hna->mask[VAR_1]) {

                            FUNC_3((VAR_12, "%sSmart-Gateway:%s%s%s%s%s %u/%u",
                                VAR_34 == 0 ? "\n\t    " : ", ",


                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_6) ? " LINKSPEED" : "",

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_2) ? " IPV4" : "",

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_3) ? " IPV4-NAT" : "",

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_4) ? " IPV6" : "",

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_5) ? " IPv6-PREFIX" : "",

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_6) ?
                                 FUNC_7(VAR_16.hna->mask[VAR_8]) : 0,

                                (VAR_16.hna->mask[VAR_1] &
                                 VAR_6) ?
                                 FUNC_7(VAR_16.hna->mask[VAR_0]) : 0
                                ));
                    } else {

                        FUNC_3((VAR_12, "%s%s/%u",
                                VAR_34 == 0 ? "\n\t    " : ", ",
                                FUNC_10(VAR_12, VAR_16.hna->network),
                                FUNC_11(FUNC_1(VAR_16.hna->mask))));
                    }

                    VAR_27 += sizeof(struct olsr_hna4);
                    VAR_19 -= sizeof(struct olsr_hna4);

                    VAR_34 = (VAR_34 + 1) % 4;
                }
            }
            break;

        case 131:
        {
            u_int VAR_35;
            u_int VAR_36;
            int VAR_37;
            u_int VAR_38;

            if (VAR_19 < 4)
                goto trunc;
            FUNC_4(*VAR_27, 4);

            VAR_35 = FUNC_0(VAR_27+2);
            VAR_36 = 4;
            if (VAR_15)
                VAR_36 = 16;

            VAR_37 = 0;
            if ((VAR_35 > 0)
                    && ((VAR_35 * (4 + VAR_36)) <= VAR_19))
                VAR_37 = 1;

            FUNC_3((VAR_12, "\n\t  Version %u, Entries %u%s",
                   FUNC_0(VAR_27),
                   VAR_35, (VAR_37 == 0) ? " (invalid)" : ""));

            if (VAR_37 == 0)
                break;

            VAR_27 += 4;
            VAR_19 -= 4;

            for (VAR_38 = 0; VAR_38 < VAR_35; VAR_38++) {
                int VAR_39 = 0;

                if (VAR_19 < 4)
                    break;
                FUNC_4(*VAR_27, 4);

                VAR_21 = FUNC_0(VAR_27);
                VAR_22 = FUNC_0(VAR_27+2);

                VAR_27 += 4;
                VAR_19 -= 4;

                if ((VAR_22 > 0) && ((VAR_36 + VAR_22) <= VAR_19))
                    VAR_39 = 1;

                FUNC_3((VAR_12, "\n\t    #%u: type %#06x, length %u%s",
                        (unsigned int) VAR_38, VAR_21,
                        VAR_22, (VAR_39 == 0) ? " (invalid)" : ""));

                if (VAR_39 == 0)
                    break;


                VAR_23 = 0;
                if (VAR_22%4 != 0)
                    VAR_23 = 4-(VAR_22%4);

                if (VAR_19 < VAR_36 + VAR_22 + VAR_23)
                    goto trunc;

                FUNC_4(*VAR_27, VAR_36 + VAR_22 + VAR_23);

                if (VAR_15)
                    FUNC_3((VAR_12, ", address %s, name \"",
                            FUNC_9(VAR_12, VAR_27)));
                else
                    FUNC_3((VAR_12, ", address %s, name \"",
                            FUNC_10(VAR_12, VAR_27)));
                (void)FUNC_8(VAR_12, VAR_27 + VAR_36, VAR_22, ((void*)0));
                FUNC_3((VAR_12, "\""));

                VAR_27 += VAR_36 + VAR_22 + VAR_23;
                VAR_19 -= VAR_36 + VAR_22 + VAR_23;
            }
            break;
        }





        case 130:
        default:
            FUNC_17(VAR_12, VAR_27, "\n\t    ", VAR_19);
            break;
        }
        VAR_26 += VAR_18;
    }

    return;

 trunc:
    FUNC_3((VAR_12, "[|olsr]"));
}
