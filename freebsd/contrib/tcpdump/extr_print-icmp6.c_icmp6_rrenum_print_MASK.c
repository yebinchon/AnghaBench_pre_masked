
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct rr_pco_use {int rpu_keeplen; int rpu_uselen; scalar_t__ rpu_prefix; scalar_t__ rpu_pltime; scalar_t__ rpu_vltime; int rpu_raflags; int rpu_ramask; scalar_t__ rpu_flags; } ;
struct rr_pco_match {int rpm_code; int rpm_len; int rpm_matchlen; scalar_t__ rpm_prefix; int rpm_maxlen; int rpm_minlen; int rpm_ordinal; } ;
struct icmp6_router_renum {int rr_code; scalar_t__ rr_reserved; int rr_maxdelay; int rr_segnum; scalar_t__ rr_flags; scalar_t__ rr_seqnum; } ;
struct TYPE_4__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int hbuf ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,char*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;



 scalar_t__ FUNC_5 (scalar_t__*,char*,int) ;

__attribute__((used)) static void
FUNC_6(netdissect_options *VAR_8, const u_char *VAR_9, const u_char *VAR_10)
{
 const struct icmp6_router_renum *VAR_11;
 const char *VAR_12;
 const struct rr_pco_match *VAR_13;
 const struct rr_pco_use *VAR_14;
 char VAR_15[VAR_7];
 int VAR_16;

 if (VAR_10 < VAR_9)
  return;
 VAR_11 = (const struct icmp6_router_renum *)VAR_9;
 VAR_12 = (const char *)(VAR_11 + 1);

 FUNC_4(VAR_11->rr_reserved);
 switch (VAR_11->rr_code) {
 case 133:
  FUNC_3((VAR_8,"router renum: command"));
  break;
 case 132:
  FUNC_3((VAR_8,"router renum: result"));
  break;
 case 131:
  FUNC_3((VAR_8,"router renum: sequence number reset"));
  break;
 default:
  FUNC_3((VAR_8,"router renum: code-#%d", VAR_11->rr_code));
  break;
 }

        FUNC_3((VAR_8,", seq=%u", FUNC_1(&VAR_11->rr_seqnum)));

 if (VAR_8->ndo_vflag) {

  FUNC_3((VAR_8,"["));
  if (VAR_11->rr_flags) {
   FUNC_3((VAR_8,"%s%s%s%s%s,", ((VAR_11->rr_flags) & (VAR_4) ? ("T") : ""),
                                  ((VAR_11->rr_flags) & (VAR_2) ? ("R") : ""),
                                  ((VAR_11->rr_flags) & (VAR_0) ? ("A") : ""),
                                  ((VAR_11->rr_flags) & (VAR_3) ? ("S") : ""),
                                  ((VAR_11->rr_flags) & (VAR_1) ? ("P") : "")));
  }
                FUNC_3((VAR_8,"seg=%u,", VAR_11->rr_segnum));
                FUNC_3((VAR_8,"maxdelay=%u", FUNC_0(&VAR_11->rr_maxdelay)));
  if (VAR_11->rr_reserved)
   FUNC_3((VAR_8,"rsvd=0x%x", FUNC_1(&VAR_11->rr_reserved)));

  FUNC_3((VAR_8,"]"));

 }

 if (VAR_11->rr_code == 133) {
  VAR_13 = (const struct rr_pco_match *)VAR_12;
  VAR_12 = (const char *)(VAR_13 + 1);

  FUNC_4(VAR_13->rpm_prefix);

  if (VAR_8->ndo_vflag > 1)
   FUNC_3((VAR_8,"\n\t"));
  else
   FUNC_3((VAR_8," "));
  FUNC_3((VAR_8,"match("));
  switch (VAR_13->rpm_code) {
  case 130: FUNC_3((VAR_8,"add")); break;
  case 129: FUNC_3((VAR_8,"change")); break;
  case 128: FUNC_3((VAR_8,"setglobal")); break;
  default: FUNC_3((VAR_8,"#%u", VAR_13->rpm_code)); break;
  }

  if (VAR_8->ndo_vflag) {
   FUNC_3((VAR_8,",ord=%u", VAR_13->rpm_ordinal));
   FUNC_3((VAR_8,",min=%u", VAR_13->rpm_minlen));
   FUNC_3((VAR_8,",max=%u", VAR_13->rpm_maxlen));
  }
  if (FUNC_5(&VAR_13->rpm_prefix, VAR_15, sizeof(VAR_15)))
   FUNC_3((VAR_8,",%s/%u", VAR_15, VAR_13->rpm_matchlen));
  else
   FUNC_3((VAR_8,",?/%u", VAR_13->rpm_matchlen));

  FUNC_3((VAR_8,")"));

  VAR_16 = VAR_13->rpm_len - 3;
  if (VAR_16 % 4)
   goto trunc;
  VAR_16 /= 4;
  while (VAR_16-- > 0) {
   VAR_14 = (const struct rr_pco_use *)VAR_12;
   VAR_12 = (const char *)(VAR_14 + 1);

   FUNC_4(VAR_14->rpu_prefix);

   if (VAR_8->ndo_vflag > 1)
    FUNC_3((VAR_8,"\n\t"));
   else
    FUNC_3((VAR_8," "));
   FUNC_3((VAR_8,"use("));
   if (VAR_14->rpu_flags) {

    FUNC_3((VAR_8,"%s%s,",
                                          ((VAR_14->rpu_flags) & (VAR_6) ? ("V") : ""),
                                          ((VAR_14->rpu_flags) & (VAR_5) ? ("P") : "")));

   }
   if (VAR_8->ndo_vflag) {
    FUNC_3((VAR_8,"mask=0x%x,", VAR_14->rpu_ramask));
    FUNC_3((VAR_8,"raflags=0x%x,", VAR_14->rpu_raflags));
    if (~VAR_14->rpu_vltime == 0)
     FUNC_3((VAR_8,"vltime=infty,"));
    else
     FUNC_3((VAR_8,"vltime=%u,",
                                                  FUNC_1(&VAR_14->rpu_vltime)));
    if (~VAR_14->rpu_pltime == 0)
     FUNC_3((VAR_8,"pltime=infty,"));
    else
     FUNC_3((VAR_8,"pltime=%u,",
                                                  FUNC_1(&VAR_14->rpu_pltime)));
   }
   if (FUNC_5(&VAR_14->rpu_prefix, VAR_15, sizeof(VAR_15)))
    FUNC_3((VAR_8,"%s/%u/%u", VAR_15, VAR_14->rpu_uselen,
                                          VAR_14->rpu_keeplen));
   else
    FUNC_3((VAR_8,"?/%u/%u", VAR_14->rpu_uselen,
                                          VAR_14->rpu_keeplen));

                        FUNC_3((VAR_8,")"));
  }
 }

 return;

trunc:
 FUNC_3((VAR_8,"[|icmp6]"));
}
