
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct vtp_vlan_ {int status; int type; int const vlanid; int const mtu; int const index; int name_len; } ;
struct TYPE_7__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct vtp_vlan_ const) ;
 int FUNC_4 (int const,int) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;

 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;



 int VAR_3 ;







 int FUNC_7 (TYPE_1__*,int const*,int,int *) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_11 (netdissect_options *VAR_10,
           const u_char *VAR_11, u_int VAR_12)
{
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    const u_char *VAR_18;
    const struct vtp_vlan_ *VAR_19;

    if (VAR_12 < VAR_0)
        goto trunc;

    VAR_18 = VAR_11;

    FUNC_4(*VAR_18, VAR_0);

    VAR_13 = *(VAR_18+1);
    FUNC_2((VAR_10, "VTPv%u, Message %s (0x%02x), length %u",
    *VAR_18,
    FUNC_10(VAR_5,"Unknown message type", VAR_13),
    VAR_13,
    VAR_12));


    if (VAR_10->ndo_vflag < 1) {
        return;
    }


    FUNC_2((VAR_10, "\n\tDomain name: "));
    VAR_17 = *(VAR_18 + 3);
    if (VAR_17 < 1 || VAR_17 > 32) {
 FUNC_2((VAR_10, " [invalid MgmtD Len %d]", VAR_17));
 return;
    }
    FUNC_7(VAR_10, VAR_18 + 4, VAR_17, ((void*)0));
    FUNC_2((VAR_10, ", %s: %u",
    FUNC_10(VAR_4, "Unknown", VAR_13),
    *(VAR_18+2)));

    VAR_18 += VAR_0;

    switch (VAR_13) {

    case 138:
 FUNC_4(*VAR_18, 8);
 FUNC_2((VAR_10, "\n\t  Config Rev %x, Updater %s",
        FUNC_1(VAR_18),
        FUNC_8(VAR_10, VAR_18+4)));
 VAR_18 += 8;
 FUNC_4(*VAR_18, VAR_2);
 FUNC_2((VAR_10, ", Timestamp 0x%08x 0x%08x 0x%08x",
        FUNC_1(VAR_18),
        FUNC_1(VAR_18 + 4),
        FUNC_1(VAR_18 + 8)));
 VAR_18 += VAR_2;
 FUNC_4(*VAR_18, VAR_1);
 FUNC_2((VAR_10, ", MD5 digest: %08x%08x%08x%08x",
        FUNC_1(VAR_18),
        FUNC_1(VAR_18 + 4),
        FUNC_1(VAR_18 + 8),
        FUNC_1(VAR_18 + 12)));
 VAR_18 += VAR_1;
 break;

    case 139:
 FUNC_5(VAR_18);
 FUNC_2((VAR_10, ", Config Rev %x", FUNC_1(VAR_18)));
 VAR_18 += 4;
 while (VAR_18 < (VAR_11+VAR_12)) {

     FUNC_6(VAR_18);
     VAR_14 = *VAR_18;
     if (VAR_14 == 0)
  break;

     FUNC_4(*VAR_18, VAR_14);

     VAR_19 = (const struct vtp_vlan_*)VAR_18;
     if (VAR_14 < VAR_3)
  goto trunc;
     FUNC_3(*VAR_19);
     FUNC_2((VAR_10, "\n\tVLAN info status %s, type %s, VLAN-id %u, MTU %u, SAID 0x%08x, Name ",
     FUNC_10(VAR_7,"Unknown",VAR_19->status),
     FUNC_10(VAR_9,"Unknown",VAR_19->type),
     FUNC_0(&VAR_19->vlanid),
     FUNC_0(&VAR_19->mtu),
     FUNC_1(&VAR_19->index)));
     VAR_14 -= VAR_3;
     VAR_18 += VAR_3;
     if (VAR_14 < 4*((VAR_19->name_len + 3)/4))
  goto trunc;
     FUNC_4(*VAR_18, VAR_19->name_len);
     FUNC_7(VAR_10, VAR_18, VAR_19->name_len, ((void*)0));




     VAR_14 -= 4*((VAR_19->name_len + 3)/4);
     VAR_18 += 4*((VAR_19->name_len + 3)/4);



            while (VAR_14 > 0) {
                if (VAR_14 < 2)
                    goto trunc;
                FUNC_4(*VAR_18, 2);
                VAR_13 = *VAR_18;
                VAR_15 = *(VAR_18+1);

                FUNC_2((VAR_10, "\n\t\t%s (0x%04x) TLV",
                       FUNC_10(VAR_8, "Unknown", VAR_13),
                       VAR_13));

                if (VAR_14 < VAR_15 * 2 + 2) {
                    FUNC_2((VAR_10, " (TLV goes past the end of the packet)"));
                    return;
                }
                FUNC_4(*VAR_18, VAR_15 * 2 +2);





                if (VAR_15 != 1) {
                    FUNC_2((VAR_10, " (invalid TLV length %u != 1)", VAR_15));
                    return;
                } else {
                    VAR_16 = FUNC_0(VAR_18+2);

                    switch (VAR_13) {
                    case 130:
                        FUNC_2((VAR_10, ", %u", VAR_16));
                        break;

                    case 133:
                        FUNC_2((VAR_10, ", %s (%u)",
                               VAR_16 == 1 ? "Enabled" : "Disabled",
                               VAR_16));
                        break;

                    case 129:
                        FUNC_2((VAR_10, ", %s (%u)",
                               FUNC_10(VAR_6, "Unknown", VAR_16),
                               VAR_16));
                        break;

                    case 135:
                        FUNC_2((VAR_10, ", %s (%u)",
                               VAR_16 == 1 ? "SRB" : "SRT",
                               VAR_16));
                        break;

                    case 136:
                        FUNC_2((VAR_10, ", %s (%u)",
                               VAR_16 == 1 ? "Backup" : "Not backup",
                               VAR_16));
                        break;






                    case 131:
                    case 132:
                    case 134:
                    case 128:
                    case 137:
                    default:
                        FUNC_9(VAR_10, VAR_18, "\n\t\t  ", 2 + VAR_15*2);
                        break;
                    }
                }
                VAR_14 -= 2 + VAR_15*2;
                VAR_18 += 2 + VAR_15*2;
            }
 }
 break;

    case 141:
 FUNC_4(*VAR_18, 4);
 FUNC_2((VAR_10, "\n\tStart value: %u", FUNC_1(VAR_18)));
 break;

    case 140:


 break;

    default:
 break;
    }

    return;

 trunc:
    FUNC_2((VAR_10, "[|vtp]"));
}
