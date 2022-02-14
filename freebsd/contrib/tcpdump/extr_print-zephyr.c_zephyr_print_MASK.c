
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct z_packet {scalar_t__ kind; char const* class; char const* inst; char const* opcode; char const* sender; char const* recipient; char const* version; scalar_t__ numfields; char const* uid; scalar_t__ port; scalar_t__ auth; scalar_t__ authlen; char const* authdata; char const* format; scalar_t__ cksum; scalar_t__ multi; char const* multi_uid; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (char const*,char const*,char const*) ;
 int VAR_1 ;

void
FUNC_8(netdissect_options *VAR_2, const u_char *VAR_3, int VAR_4)
{
    struct z_packet VAR_5;
    const char *VAR_6 = (const char *) VAR_3;
    int VAR_7 = VAR_4;
    const char *VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;



    VAR_5.kind = 0;
    VAR_5.class = 0;
    VAR_5.inst = 0;
    VAR_5.opcode = 0;
    VAR_5.sender = 0;
    VAR_5.recipient = 0;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.version = VAR_8;;
    if (VAR_9) return;
    if (FUNC_5(VAR_5.version, "ZEPH", 4))
 return;

    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.numfields = strtol(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.kind = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.uid = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.port = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.auth = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.authlen = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.authdata = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.class = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.inst = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.opcode = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.sender = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.recipient = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.format = VAR_8;;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.cksum = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.multi = FUNC_0(VAR_8, 0, 16);;
    VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_5.multi_uid = VAR_8;;

    if (VAR_9)
        goto trunc;

    FUNC_0((VAR_2, " zephyr"));
    if (FUNC_5(VAR_5.version+4, "0.2", 3)) {
 FUNC_0((VAR_2, " v%s", VAR_5.version+4));
 return;
    }

    FUNC_0((VAR_2, " %s", FUNC_6(VAR_1, "type %d", VAR_5.kind)));
    if (VAR_5.kind == VAR_0) {

 const char *VAR_11 = ((void*)0);
 VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_11 = VAR_8;;
 if (!VAR_9 && FUNC_4(VAR_11, "SENT"))
     FUNC_0((VAR_2, "/%s", FUNC_3(VAR_11)));
    }
    if (*VAR_5.sender) FUNC_0((VAR_2, " %s", VAR_5.sender));

    if (!FUNC_4(VAR_5.class, "USER_LOCATE")) {
 if (!FUNC_4(VAR_5.opcode, "USER_HIDE"))
     FUNC_0((VAR_2, " hide"));
 else if (!FUNC_4(VAR_5.opcode, "USER_UNHIDE"))
     FUNC_0((VAR_2, " unhide"));
 else
     FUNC_0((VAR_2, " locate %s", VAR_5.inst));
 return;
    }

    if (!FUNC_4(VAR_5.class, "ZEPHYR_ADMIN")) {
 FUNC_0((VAR_2, " zephyr-admin %s", FUNC_3(VAR_5.opcode)));
 return;
    }

    if (!FUNC_4(VAR_5.class, "ZEPHYR_CTL")) {
 if (!FUNC_4(VAR_5.inst, "CLIENT")) {
     if (!FUNC_4(VAR_5.opcode, "SUBSCRIBE") ||
  !FUNC_4(VAR_5.opcode, "SUBSCRIBE_NODEFS") ||
  !FUNC_4(VAR_5.opcode, "UNSUBSCRIBE")) {

  FUNC_0((VAR_2, " %ssub%s", FUNC_4(VAR_5.opcode, "SUBSCRIBE") ? "un" : "",
       FUNC_4(VAR_5.opcode, "SUBSCRIBE_NODEFS") ? "" :
           "-nodefs"));
  if (VAR_5.kind != VAR_0) {

      const char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
      VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_12 = VAR_8;;
      VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_13 = VAR_8;;
      VAR_8 = FUNC_0(VAR_2, &VAR_6, &VAR_7, &VAR_10); if (VAR_10) goto trunc; if (!VAR_8) VAR_9 = 1; if (!VAR_9) VAR_14 = VAR_8;;
      if (!VAR_9) FUNC_0((VAR_2, " %s", FUNC_7(VAR_12, VAR_13, VAR_14)));
  }
  return;
     }

     if (!FUNC_4(VAR_5.opcode, "GIMME")) {
  FUNC_0((VAR_2, " ret"));
  return;
     }

     if (!FUNC_4(VAR_5.opcode, "GIMMEDEFS")) {
  FUNC_0((VAR_2, " gimme-defs"));
  return;
     }

     if (!FUNC_4(VAR_5.opcode, "CLEARSUB")) {
  FUNC_0((VAR_2, " clear-subs"));
  return;
     }

     FUNC_0((VAR_2, " %s", FUNC_3(VAR_5.opcode)));
     return;
 }

 if (!FUNC_4(VAR_5.inst, "HM")) {
     FUNC_0((VAR_2, " %s", FUNC_3(VAR_5.opcode)));
     return;
 }

 if (!FUNC_4(VAR_5.inst, "REALM")) {
     if (!FUNC_4(VAR_5.opcode, "ADD_SUBSCRIBE"))
  FUNC_0((VAR_2, " realm add-subs"));
     if (!FUNC_4(VAR_5.opcode, "REQ_SUBSCRIBE"))
  FUNC_0((VAR_2, " realm req-subs"));
     if (!FUNC_4(VAR_5.opcode, "RLM_SUBSCRIBE"))
  FUNC_0((VAR_2, " realm rlm-sub"));
     if (!FUNC_4(VAR_5.opcode, "RLM_UNSUBSCRIBE"))
  FUNC_0((VAR_2, " realm rlm-unsub"));
     return;
 }
    }

    if (!FUNC_4(VAR_5.class, "HM_CTL")) {
 FUNC_0((VAR_2, " hm_ctl %s", FUNC_3(VAR_5.inst)));
 FUNC_0((VAR_2, " %s", FUNC_3(VAR_5.opcode)));
 return;
    }

    if (!FUNC_4(VAR_5.class, "HM_STAT")) {
 if (!FUNC_4(VAR_5.inst, "HMST_CLIENT") && !FUNC_4(VAR_5.opcode, "GIMMESTATS")) {
     FUNC_0((VAR_2, " get-client-stats"));
     return;
 }
    }

    if (!FUNC_4(VAR_5.class, "WG_CTL")) {
 FUNC_0((VAR_2, " wg_ctl %s", FUNC_3(VAR_5.inst)));
 FUNC_0((VAR_2, " %s", FUNC_3(VAR_5.opcode)));
 return;
    }

    if (!FUNC_4(VAR_5.class, "LOGIN")) {
 if (!FUNC_4(VAR_5.opcode, "USER_FLUSH")) {
     FUNC_0((VAR_2, " flush_locs"));
     return;
 }

 if (!FUNC_4(VAR_5.opcode, "NONE") ||
     !FUNC_4(VAR_5.opcode, "OPSTAFF") ||
     !FUNC_4(VAR_5.opcode, "REALM-VISIBLE") ||
     !FUNC_4(VAR_5.opcode, "REALM-ANNOUNCED") ||
     !FUNC_4(VAR_5.opcode, "NET-VISIBLE") ||
     !FUNC_4(VAR_5.opcode, "NET-ANNOUNCED")) {
     FUNC_0((VAR_2, " set-exposure %s", FUNC_3(VAR_5.opcode)));
     return;
 }
    }

    if (!*VAR_5.recipient)
 VAR_5.recipient = "*";

    FUNC_0((VAR_2, " to %s", FUNC_7(VAR_5.class, VAR_5.inst, VAR_5.recipient)));
    if (*VAR_5.opcode)
 FUNC_0((VAR_2, " op %s", VAR_5.opcode));
    return;

trunc:
    FUNC_0((VAR_2, " [|zephyr] (%d)", VAR_4));
    return;
}
