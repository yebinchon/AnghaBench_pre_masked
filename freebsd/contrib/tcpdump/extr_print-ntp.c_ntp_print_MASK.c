
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct ntpdata {int status; int stratum; int ppoll; int root_delay; int root_dispersion; int refid; int ref_timestamp; int org_timestamp; int rec_timestamp; int xmt_timestamp; int key_id; int message_digest; int precision; } ;
struct TYPE_9__ {int ndo_snapend; int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;


 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int const*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*,int*,int*) ;
 int FUNC_7 (TYPE_1__*,int*) ;
 int FUNC_8 (TYPE_1__*,int*) ;
 int FUNC_9 (int ,char*,int) ;

void
FUNC_10(netdissect_options *VAR_6,
          register const u_char *VAR_7, u_int VAR_8)
{
 register const struct ntpdata *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = (const struct ntpdata *)VAR_7;

 FUNC_2(VAR_9->status);

 VAR_11 = (int)(VAR_9->status & VAR_2) >> 3;
 FUNC_1((VAR_6, "NTPv%d", VAR_11));

 VAR_10 = VAR_9->status & VAR_1;
 if (!VAR_6->ndo_vflag) {
  FUNC_1((VAR_6, ", %s, length %u",
            FUNC_9(VAR_4, "Unknown mode", VAR_10),
            VAR_8));
  return;
 }

 FUNC_1((VAR_6, ", length %u\n\t%s",
           VAR_8,
           FUNC_9(VAR_4, "Unknown mode", VAR_10)));

 VAR_12 = VAR_9->status & VAR_0;
 FUNC_1((VAR_6, ", Leap indicator: %s (%u)",
           FUNC_9(VAR_3, "Unknown", VAR_12),
           VAR_12));

 FUNC_2(VAR_9->stratum);
 FUNC_1((VAR_6, ", Stratum %u (%s)",
  VAR_9->stratum,
  FUNC_9(VAR_5, (VAR_9->stratum >=2 && VAR_9->stratum<=15) ? "secondary reference" : "reserved", VAR_9->stratum)));

 FUNC_2(VAR_9->ppoll);
 FUNC_1((VAR_6, ", poll %u (%us)", VAR_9->ppoll, 1 << VAR_9->ppoll));


 FUNC_3(VAR_9->root_delay, 0);
 FUNC_1((VAR_6, ", precision %d", VAR_9->precision));

 FUNC_2(VAR_9->root_delay);
 FUNC_1((VAR_6, "\n\tRoot Delay: "));
 FUNC_8(VAR_6, &VAR_9->root_delay);

 FUNC_2(VAR_9->root_dispersion);
 FUNC_1((VAR_6, ", Root dispersion: "));
 FUNC_8(VAR_6, &VAR_9->root_dispersion);

 FUNC_2(VAR_9->refid);
 FUNC_1((VAR_6, ", Reference-ID: "));

 switch (VAR_9->stratum) {

 case 128:
  FUNC_1((VAR_6, "(unspec)"));
  break;

 case 129:
  if (FUNC_4(VAR_6, (const u_char *)&(VAR_9->refid), 4, VAR_6->ndo_snapend))
   goto trunc;
  break;

 case 131:
  FUNC_1((VAR_6, "%s INFO_QUERY", FUNC_5(VAR_6, &(VAR_9->refid))));

  return;

 case 130:
  FUNC_1((VAR_6, "%s INFO_REPLY", FUNC_5(VAR_6, &(VAR_9->refid))));

  return;

 default:
  FUNC_1((VAR_6, "%s", FUNC_5(VAR_6, &(VAR_9->refid))));
  break;
 }

 FUNC_2(VAR_9->ref_timestamp);
 FUNC_1((VAR_6, "\n\t  Reference Timestamp:  "));
 FUNC_7(VAR_6, &(VAR_9->ref_timestamp));

 FUNC_2(VAR_9->org_timestamp);
 FUNC_1((VAR_6, "\n\t  Originator Timestamp: "));
 FUNC_7(VAR_6, &(VAR_9->org_timestamp));

 FUNC_2(VAR_9->rec_timestamp);
 FUNC_1((VAR_6, "\n\t  Receive Timestamp:    "));
 FUNC_7(VAR_6, &(VAR_9->rec_timestamp));

 FUNC_2(VAR_9->xmt_timestamp);
 FUNC_1((VAR_6, "\n\t  Transmit Timestamp:   "));
 FUNC_7(VAR_6, &(VAR_9->xmt_timestamp));

 FUNC_1((VAR_6, "\n\t    Originator - Receive Timestamp:  "));
 FUNC_6(VAR_6, &(VAR_9->org_timestamp), &(VAR_9->rec_timestamp));

 FUNC_1((VAR_6, "\n\t    Originator - Transmit Timestamp: "));
 FUNC_6(VAR_6, &(VAR_9->org_timestamp), &(VAR_9->xmt_timestamp));

 if ( (sizeof(struct ntpdata) - VAR_8) == 16) {
  FUNC_2(VAR_9->key_id);
  FUNC_1((VAR_6, "\n\tKey id: %u", VAR_9->key_id));
 } else if ( (sizeof(struct ntpdata) - VAR_8) == 0) {
  FUNC_2(VAR_9->key_id);
  FUNC_1((VAR_6, "\n\tKey id: %u", VAR_9->key_id));
  FUNC_3(VAR_9->message_digest, sizeof (VAR_9->message_digest));
                FUNC_1((VAR_6, "\n\tAuthentication: %08x%08x%08x%08x",
                 FUNC_0(VAR_9->message_digest),
                 FUNC_0(VAR_9->message_digest + 4),
                 FUNC_0(VAR_9->message_digest + 8),
                 FUNC_0(VAR_9->message_digest + 12)));
        }
 return;

trunc:
 FUNC_1((VAR_6, " [|ntp]"));
}
