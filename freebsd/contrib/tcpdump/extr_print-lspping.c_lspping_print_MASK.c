
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
typedef int u_char ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct lspping_tlv_targetfec_subtlv_rsvp_ipv6_t {int extended_tunnel_id; int * tunnel_id; int * lsp_id; int tunnel_sender; int tunnel_endpoint; } ;
struct lspping_tlv_targetfec_subtlv_rsvp_ipv4_t {int extended_tunnel_id; int * tunnel_id; int * lsp_id; int tunnel_sender; int tunnel_endpoint; } ;
struct lspping_tlv_targetfec_subtlv_ldp_ipv6_t {int prefix_len; int prefix; } ;
struct lspping_tlv_targetfec_subtlv_ldp_ipv4_t {int prefix_len; int prefix; } ;
struct lspping_tlv_targetfec_subtlv_l3vpn_ipv6_t {int prefix_len; int prefix; int rd; } ;
struct lspping_tlv_targetfec_subtlv_l3vpn_ipv4_t {int prefix_len; int prefix; int rd; } ;
struct lspping_tlv_targetfec_subtlv_l2vpn_endpt_t {int * encapsulation; int * receiver_ve_id; int * sender_ve_id; int rd; } ;
struct lspping_tlv_targetfec_subtlv_fec_128_pw_old {int * pw_type; int const* pw_id; int remote_pe_address; } ;
struct lspping_tlv_targetfec_subtlv_fec_128_pw {int * pw_type; int const* pw_id; int remote_pe_address; int sender_pe_address; } ;
struct lspping_tlv_targetfec_subtlv_bgp_ipv6_t {int prefix_len; int prefix; } ;
struct lspping_tlv_targetfec_subtlv_bgp_ipv4_t {int prefix_len; int prefix; } ;
struct lspping_tlv_header {int * length; int * type; } ;
struct lspping_tlv_downstream_map_t {int address_type; int * mtu; } ;
struct lspping_tlv_downstream_map_ipv6_unmb_t {int const* downstream_interface; int downstream_ip; } ;
struct lspping_tlv_downstream_map_ipv6_t {int downstream_interface; int downstream_ip; } ;
struct lspping_tlv_downstream_map_ipv4_unmb_t {int const* downstream_interface; int downstream_ip; } ;
struct lspping_tlv_downstream_map_ipv4_t {int downstream_interface; int downstream_ip; } ;
struct lspping_tlv_downstream_map_info_t {int dummy; } ;
struct lspping_common_header {int msg_type; int reply_mode; int return_code; int const* ts_rcvd_usec; int const* ts_rcvd_sec; int const* ts_sent_usec; int const* ts_sent_sec; int const* seq_number; int const* sender_handle; int return_subcode; int * version; } ;
struct TYPE_9__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int const*) ;
 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct lspping_common_header const) ;
 int FUNC_4 (int const,int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_1__*,int const*,char*,int) ;
 int VAR_12 ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (TYPE_1__*,struct timeval*) ;

void
FUNC_11(netdissect_options *VAR_13,
              register const u_char *VAR_14, register u_int VAR_15)
{
    const struct lspping_common_header *VAR_16;
    const struct lspping_tlv_header *VAR_17;
    const struct lspping_tlv_header *VAR_18;
    const u_char *VAR_19,*VAR_20,*VAR_21;
    u_int VAR_22,VAR_23,VAR_24,VAR_25;
    int VAR_26,VAR_27;
    u_int VAR_28,VAR_29;
    struct timeval VAR_30;

    union {
        const struct lspping_tlv_downstream_map_t *lspping_tlv_downstream_map;
        const struct lspping_tlv_downstream_map_ipv4_t *lspping_tlv_downstream_map_ipv4;
        const struct lspping_tlv_downstream_map_ipv4_unmb_t *lspping_tlv_downstream_map_ipv4_unmb;
        const struct lspping_tlv_downstream_map_ipv6_t *lspping_tlv_downstream_map_ipv6;
        const struct lspping_tlv_downstream_map_ipv6_unmb_t *lspping_tlv_downstream_map_ipv6_unmb;
        const struct lspping_tlv_downstream_map_info_t *lspping_tlv_downstream_map_info;
    } VAR_31;

    union {
        const struct lspping_tlv_targetfec_subtlv_ldp_ipv4_t *lspping_tlv_targetfec_subtlv_ldp_ipv4;
        const struct lspping_tlv_targetfec_subtlv_ldp_ipv6_t *lspping_tlv_targetfec_subtlv_ldp_ipv6;
        const struct lspping_tlv_targetfec_subtlv_rsvp_ipv4_t *lspping_tlv_targetfec_subtlv_rsvp_ipv4;
        const struct lspping_tlv_targetfec_subtlv_rsvp_ipv6_t *lspping_tlv_targetfec_subtlv_rsvp_ipv6;
        const struct lspping_tlv_targetfec_subtlv_l3vpn_ipv4_t *lspping_tlv_targetfec_subtlv_l3vpn_ipv4;
        const struct lspping_tlv_targetfec_subtlv_l3vpn_ipv6_t *lspping_tlv_targetfec_subtlv_l3vpn_ipv6;
        const struct lspping_tlv_targetfec_subtlv_l2vpn_endpt_t *lspping_tlv_targetfec_subtlv_l2vpn_endpt;
        const struct lspping_tlv_targetfec_subtlv_fec_128_pw_old *lspping_tlv_targetfec_subtlv_l2vpn_vcid_old;
        const struct lspping_tlv_targetfec_subtlv_fec_128_pw *lspping_tlv_targetfec_subtlv_l2vpn_vcid;
        const struct lspping_tlv_targetfec_subtlv_bgp_ipv4_t *lspping_tlv_targetfec_subtlv_bgp_ipv4;
        const struct lspping_tlv_targetfec_subtlv_bgp_ipv6_t *lspping_tlv_targetfec_subtlv_bgp_ipv6;
    } VAR_32;

    VAR_19=VAR_14;
    VAR_16 = (const struct lspping_common_header *)VAR_14;
    if (VAR_15 < sizeof(const struct lspping_common_header))
        goto tooshort;
    FUNC_3(*VAR_16);




    if (FUNC_0(&VAR_16->version[0]) != VAR_3) {
 FUNC_2((VAR_13, "LSP-PING version %u packet not supported",
               FUNC_0(&VAR_16->version[0])));
 return;
    }


    if (VAR_13->ndo_vflag < 1) {
        FUNC_2((VAR_13, "LSP-PINGv%u, %s, seq %u, length: %u",
               FUNC_0(&VAR_16->version[0]),
               FUNC_9(VAR_5, "unknown (%u)",VAR_16->msg_type),
               FUNC_1(VAR_16->seq_number),
               VAR_15));
        return;
    }



    VAR_22=VAR_15;

    FUNC_2((VAR_13, "\n\tLSP-PINGv%u, msg-type: %s (%u), length: %u\n\t  reply-mode: %s (%u)",
           FUNC_0(&VAR_16->version[0]),
           FUNC_9(VAR_5, "unknown",VAR_16->msg_type),
           VAR_16->msg_type,
           VAR_15,
           FUNC_9(VAR_6, "unknown",VAR_16->reply_mode),
           VAR_16->reply_mode));





    if (VAR_16->return_code == 3 ||
        VAR_16->return_code == 4 ||
        VAR_16->return_code == 8 ||
        VAR_16->return_code == 10 ||
        VAR_16->return_code == 11 ||
        VAR_16->return_code == 12 )
        FUNC_2((VAR_13, "\n\t  Return Code: %s %u (%u)\n\t  Return Subcode: (%u)",
               FUNC_9(VAR_7, "unknown",VAR_16->return_code),
               VAR_16->return_subcode,
               VAR_16->return_code,
               VAR_16->return_subcode));
    else
        FUNC_2((VAR_13, "\n\t  Return Code: %s (%u)\n\t  Return Subcode: (%u)",
               FUNC_9(VAR_7, "unknown",VAR_16->return_code),
               VAR_16->return_code,
               VAR_16->return_subcode));

    FUNC_2((VAR_13, "\n\t  Sender Handle: 0x%08x, Sequence: %u",
           FUNC_1(VAR_16->sender_handle),
           FUNC_1(VAR_16->seq_number)));

    VAR_30.tv_sec=FUNC_1(VAR_16->ts_sent_sec);
    VAR_30.tv_usec=FUNC_1(VAR_16->ts_sent_usec);
    FUNC_2((VAR_13, "\n\t  Sender Timestamp: "));
    FUNC_10(VAR_13, &VAR_30);

    VAR_30.tv_sec=FUNC_1(VAR_16->ts_rcvd_sec);
    VAR_30.tv_usec=FUNC_1(VAR_16->ts_rcvd_usec);
    FUNC_2((VAR_13, "Receiver Timestamp: "));
    if ((VAR_30.tv_sec != 0) && (VAR_30.tv_usec != 0))
        FUNC_10(VAR_13, &VAR_30);
    else
        FUNC_2((VAR_13, "no timestamp"));

    VAR_19+=sizeof(const struct lspping_common_header);
    VAR_22-=sizeof(const struct lspping_common_header);

    while (VAR_22 != 0) {

        if (VAR_22 < sizeof(struct lspping_tlv_header))
            goto tooshort;


        FUNC_4(*VAR_19, sizeof(struct lspping_tlv_header));

        VAR_17 = (const struct lspping_tlv_header *)VAR_19;
        VAR_24=FUNC_0(VAR_17->type);
        VAR_23=FUNC_0(VAR_17->length);

        FUNC_2((VAR_13, "\n\t  %s TLV (%u), length: %u",
               FUNC_9(VAR_9,
                       "Unknown",
                       VAR_24),
               VAR_24,
               VAR_23));


        if (VAR_23 == 0) {
            VAR_19+=sizeof(struct lspping_tlv_header);
            VAR_22-=sizeof(struct lspping_tlv_header);
            continue;
        }

        VAR_20=VAR_19+sizeof(struct lspping_tlv_header);
        VAR_25=VAR_23;


        if (VAR_22 < VAR_23+sizeof(struct lspping_tlv_header))
            goto tooshort;

        FUNC_4(*VAR_20, VAR_23);
        VAR_26=VAR_0;

        switch(VAR_24) {
        case 130:
            while (VAR_25 != 0) {

                if (VAR_25 < sizeof(struct lspping_tlv_header)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }

                FUNC_4(*VAR_20, sizeof(struct lspping_tlv_header));
                VAR_27=VAR_0;

                VAR_18 = (const struct lspping_tlv_header *)VAR_20;
                VAR_29=FUNC_0(VAR_18->type);
                VAR_28=FUNC_0(VAR_18->length);
                VAR_21=VAR_20+sizeof(struct lspping_tlv_header);


                if (VAR_25 < VAR_28+sizeof(struct lspping_tlv_header)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }


                FUNC_4(*VAR_21, VAR_28);

                FUNC_2((VAR_13, "\n\t    %s subTLV (%u), length: %u",
                       FUNC_9(VAR_10,
                               "Unknown",
                               VAR_29),
                       VAR_29,
                       VAR_28));

                switch(VAR_29) {

                case 134:

                    if (VAR_28 != 5) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 5"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv4 = (const struct lspping_tlv_targetfec_subtlv_ldp_ipv4_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      %s/%u",
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv4->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv4->prefix_len));
                    }
                    break;

                case 133:

                    if (VAR_28 != 17) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 17"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv6 = (const struct lspping_tlv_targetfec_subtlv_ldp_ipv6_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      %s/%u",
                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv6->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_ldp_ipv6->prefix_len));
                    }
                    break;

                case 141:

                    if (VAR_28 != 5) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 5"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv4 = (const struct lspping_tlv_targetfec_subtlv_bgp_ipv4_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      %s/%u",
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv4->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv4->prefix_len));
                    }
                    break;

                case 140:

                    if (VAR_28 != 17) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 17"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv6 = (const struct lspping_tlv_targetfec_subtlv_bgp_ipv6_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      %s/%u",
                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv6->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_bgp_ipv6->prefix_len));
                    }
                    break;

                case 132:

                    if (VAR_28 != 20) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 20"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4 = (const struct lspping_tlv_targetfec_subtlv_rsvp_ipv4_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      tunnel end-point %s, tunnel sender %s, lsp-id 0x%04x" "\n\t      tunnel-id 0x%04x, extended tunnel-id %s",

                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4->tunnel_endpoint),
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4->tunnel_sender),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4->lsp_id),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4->tunnel_id),
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv4->extended_tunnel_id)));
                    }
                    break;

                case 131:

                    if (VAR_28 != 56) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 56"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6 = (const struct lspping_tlv_targetfec_subtlv_rsvp_ipv6_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      tunnel end-point %s, tunnel sender %s, lsp-id 0x%04x" "\n\t      tunnel-id 0x%04x, extended tunnel-id %s",

                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6->tunnel_endpoint),
                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6->tunnel_sender),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6->lsp_id),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6->tunnel_id),
                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_rsvp_ipv6->extended_tunnel_id)));
                    }
                    break;

                case 136:

                    if (VAR_28 != 13) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 13"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv4 = (const struct lspping_tlv_targetfec_subtlv_l3vpn_ipv4_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      RD: %s, %s/%u",
                               FUNC_5(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv4->rd),
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv4->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv4->prefix_len));
                    }
                    break;

                case 135:

                    if (VAR_28 != 25) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 25"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv6 = (const struct lspping_tlv_targetfec_subtlv_l3vpn_ipv6_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      RD: %s, %s/%u",
                               FUNC_5(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv6->rd),
                               FUNC_6(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv6->prefix),
                               VAR_32.lspping_tlv_targetfec_subtlv_l3vpn_ipv6->prefix_len));
                    }
                    break;

                case 137:

                    if (VAR_28 != 14) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 14"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt = (const struct lspping_tlv_targetfec_subtlv_l2vpn_endpt_t *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      RD: %s, Sender VE ID: %u, Receiver VE ID: %u" "\n\t      Encapsulation Type: %s (%u)",

                               FUNC_5(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt->rd),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt->sender_ve_id),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt->receiver_ve_id),
                               FUNC_9(VAR_11,
                                       "unknown",
                                       FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt->encapsulation)),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_endpt->encapsulation)));
                    }
                    break;


                case 138:

                    if (VAR_28 != 10) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 10"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid_old = (const struct lspping_tlv_targetfec_subtlv_fec_128_pw_old *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      Remote PE: %s" "\n\t      PW ID: 0x%08x, PW Type: %s (%u)",

                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid_old->remote_pe_address),
                               FUNC_1(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid_old->pw_id),
                               FUNC_9(VAR_11,
                                       "unknown",
                                       FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid_old->pw_type)),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid_old->pw_type)));
                    }
                    break;

                case 139:

                    if (VAR_28 != 14) {
                        FUNC_2((VAR_13, "\n\t      invalid subTLV length, should be 14"));
                        VAR_27=VAR_4;
                    } else {
                        VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid = (const struct lspping_tlv_targetfec_subtlv_fec_128_pw *)VAR_21;

                        FUNC_2((VAR_13, "\n\t      Sender PE: %s, Remote PE: %s" "\n\t      PW ID: 0x%08x, PW Type: %s (%u)",

                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid->sender_pe_address),
                               FUNC_7(VAR_13, VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid->remote_pe_address),
                               FUNC_1(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid->pw_id),
                               FUNC_9(VAR_11,
                                       "unknown",
                                       FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid->pw_type)),
                               FUNC_0(VAR_32.lspping_tlv_targetfec_subtlv_l2vpn_vcid->pw_type)));
                    }
                    break;

                default:
                    VAR_27=VAR_4;
                    break;
                }

                if (VAR_13->ndo_vflag > 1 || VAR_27==VAR_4)
                    FUNC_8(VAR_13, VAR_20+sizeof(struct lspping_tlv_header), "\n\t      ",

                                       VAR_28);


                if (VAR_28 % 4) {
                    VAR_28 += 4 - (VAR_28 % 4);

                    if (VAR_25 < VAR_28+sizeof(struct lspping_tlv_header)) {
                        FUNC_2((VAR_13, "\n\t\t TLV is too short"));
                        return;
                    }
                }
                VAR_20+=VAR_28;
                VAR_25-=VAR_28+sizeof(struct lspping_tlv_header);
            }
            break;

        case 144:

            if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_t)) {
                FUNC_2((VAR_13, "\n\t      TLV is too short"));
                VAR_26 = VAR_4;
                goto tlv_tooshort;
            }

            FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_t));

            VAR_31.lspping_tlv_downstream_map= (const struct lspping_tlv_downstream_map_t *)VAR_20;






            FUNC_2((VAR_13, "\n\t    MTU: %u, Address-Type: %s (%u)",
                   FUNC_0(VAR_31.lspping_tlv_downstream_map->mtu),
                   FUNC_9(VAR_8,
                           "unknown",
                           VAR_31.lspping_tlv_downstream_map->address_type),
                   VAR_31.lspping_tlv_downstream_map->address_type));

            switch(VAR_31.lspping_tlv_downstream_map->address_type) {

            case 149:

                if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_ipv4_t)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }

                FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_ipv4_t));

                VAR_31.lspping_tlv_downstream_map_ipv4= (const struct lspping_tlv_downstream_map_ipv4_t *)VAR_20;

                FUNC_2((VAR_13, "\n\t    Downstream IP: %s" "\n\t    Downstream Interface IP: %s",

                       FUNC_7(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv4->downstream_ip),
                       FUNC_7(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv4->downstream_interface)));
                VAR_20+=sizeof(struct lspping_tlv_downstream_map_ipv4_t);
                VAR_25-=sizeof(struct lspping_tlv_downstream_map_ipv4_t);
                break;
            case 148:

                if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_ipv4_unmb_t)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }

                FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_ipv4_unmb_t));

                VAR_31.lspping_tlv_downstream_map_ipv4_unmb= (const struct lspping_tlv_downstream_map_ipv4_unmb_t *)VAR_20;

                FUNC_2((VAR_13, "\n\t    Downstream IP: %s" "\n\t    Downstream Interface Index: 0x%08x",

                       FUNC_7(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv4_unmb->downstream_ip),
                       FUNC_1(VAR_31.lspping_tlv_downstream_map_ipv4_unmb->downstream_interface)));
                VAR_20+=sizeof(struct lspping_tlv_downstream_map_ipv4_unmb_t);
                VAR_25-=sizeof(struct lspping_tlv_downstream_map_ipv4_unmb_t);
                break;
            case 147:

                if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_ipv6_t)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }

                FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_ipv6_t));

                VAR_31.lspping_tlv_downstream_map_ipv6= (const struct lspping_tlv_downstream_map_ipv6_t *)VAR_20;

                FUNC_2((VAR_13, "\n\t    Downstream IP: %s" "\n\t    Downstream Interface IP: %s",

                       FUNC_6(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv6->downstream_ip),
                       FUNC_6(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv6->downstream_interface)));
                VAR_20+=sizeof(struct lspping_tlv_downstream_map_ipv6_t);
                VAR_25-=sizeof(struct lspping_tlv_downstream_map_ipv6_t);
                break;
             case 146:

                if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_ipv6_unmb_t)) {
                    FUNC_2((VAR_13, "\n\t      TLV is too short"));
                    VAR_26 = VAR_4;
                    goto tlv_tooshort;
                }

                FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_ipv6_unmb_t));

                VAR_31.lspping_tlv_downstream_map_ipv6_unmb= (const struct lspping_tlv_downstream_map_ipv6_unmb_t *)VAR_20;

                FUNC_2((VAR_13, "\n\t    Downstream IP: %s" "\n\t    Downstream Interface Index: 0x%08x",

                       FUNC_6(VAR_13, VAR_31.lspping_tlv_downstream_map_ipv6_unmb->downstream_ip),
                       FUNC_1(VAR_31.lspping_tlv_downstream_map_ipv6_unmb->downstream_interface)));
                VAR_20+=sizeof(struct lspping_tlv_downstream_map_ipv6_unmb_t);
                VAR_25-=sizeof(struct lspping_tlv_downstream_map_ipv6_unmb_t);
                break;

            default:

                break;
            }


            if (VAR_25 < sizeof(struct lspping_tlv_downstream_map_info_t)) {
                FUNC_2((VAR_13, "\n\t      TLV is too short"));
                VAR_26 = VAR_4;
                goto tlv_tooshort;
            }

            FUNC_4(*VAR_20, sizeof(struct lspping_tlv_downstream_map_info_t));

            VAR_31.lspping_tlv_downstream_map_info= (const struct lspping_tlv_downstream_map_info_t *)VAR_20;




            VAR_20+=sizeof(struct lspping_tlv_downstream_map_info_t);
            VAR_25-=sizeof(struct lspping_tlv_downstream_map_info_t);



            VAR_26=VAR_4;

            break;

        case 145:
            if (VAR_25 < VAR_1) {
                FUNC_2((VAR_13, "\n\t      TLV is too short"));
                VAR_26 = VAR_4;
                goto tlv_tooshort;
            } else {
                FUNC_4(*VAR_19, VAR_1);
                FUNC_2((VAR_13, "\n\t    BFD Discriminator 0x%08x", FUNC_1(VAR_19)));
            }
            break;

        case 129:
        {
            uint32_t VAR_33;

            if (VAR_25 < VAR_2) {
                FUNC_2((VAR_13, "\n\t      TLV is too short"));
                VAR_26 = VAR_4;
                goto tlv_tooshort;
            } else {
                FUNC_4(*VAR_19, VAR_2);
                VAR_33 = FUNC_1(VAR_20);
                FUNC_2((VAR_13, "\n\t    Vendor: %s (0x%04x)",
                       FUNC_9(VAR_12, "Unknown", VAR_33),
                       VAR_33));
            }
        }
            break;





        case 142:
        case 143:
        case 128:

        default:
            if (VAR_13->ndo_vflag <= 1)
                FUNC_8(VAR_13, VAR_20, "\n\t    ", VAR_25);
            break;
        }

    tlv_tooshort:
        if (VAR_13->ndo_vflag > 1 || VAR_26==VAR_4)
            FUNC_8(VAR_13, VAR_19+sizeof(struct lspping_tlv_header), "\n\t    ",
                               VAR_23);



        if (VAR_23 % 4) {
            VAR_23 += (4 - VAR_23 % 4);

            if (VAR_22 < VAR_23+sizeof(struct lspping_tlv_header))
                goto tooshort;
        }

        VAR_19+=VAR_23+sizeof(struct lspping_tlv_header);
        VAR_22-=VAR_23+sizeof(struct lspping_tlv_header);
    }
    return;
tooshort:
    FUNC_2((VAR_13, "\n\t\t packet is too short"));
    return;
trunc:
    FUNC_2((VAR_13, "\n\t\t packet exceeded snapshot"));
    return;
}
