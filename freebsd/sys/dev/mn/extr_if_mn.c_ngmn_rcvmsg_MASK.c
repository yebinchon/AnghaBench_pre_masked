
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct schan {unsigned long rx_error; unsigned long short_error; unsigned long crc_error; unsigned long dribble_error; unsigned long long_error; unsigned long abort_error; unsigned long overflow_error; unsigned long tx_pending; int prev_error; int last_error; scalar_t__ last_xmit; scalar_t__ last_rxerr; scalar_t__ last_recv; int hook; } ;
struct TYPE_2__ {scalar_t__ typecookie; scalar_t__ cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
struct mn_softc {unsigned long cnt_fec; unsigned long cnt_cvc; struct schan** ch; int falc_irq; int falc_state; int framer_state; } ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ng_mesg*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,scalar_t__,int ) ;
 struct mn_softc* FUNC_5 (int ) ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int ,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,...) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int
FUNC_10(node_p VAR_9, item_p VAR_10, hook_p VAR_11)
{
 struct mn_softc *VAR_12;
 struct ng_mesg *VAR_13 = ((void*)0);
 struct schan *VAR_14;
 char *VAR_15, *VAR_16;
 int VAR_17, VAR_18;
 struct ng_mesg *VAR_19;

 FUNC_0(VAR_10, VAR_19);
 VAR_12 = FUNC_5(VAR_9);

 if (VAR_19->header.typecookie != VAR_4) {
  FUNC_1(VAR_10);
  FUNC_2(VAR_19);
  return (VAR_0);
 }

 if (VAR_19->header.cmd != VAR_5 &&
     VAR_19->header.cmd != VAR_6) {
  FUNC_1(VAR_10);
  FUNC_2(VAR_19);
  return (VAR_0);
 }

 FUNC_4(VAR_13, VAR_19, sizeof(struct ng_mesg) + VAR_7,
     VAR_3);
 if (VAR_13 == ((void*)0)) {
  FUNC_1(VAR_10);
  FUNC_2(VAR_19);
  return (VAR_1);
 }

 if (VAR_19->header.arglen)
  VAR_15 = (char *)VAR_19->data;
 else
  VAR_15 = ((void*)0);
 VAR_16 = (char *)VAR_13->data;
 *VAR_16 = '\0';

 if (VAR_19->header.cmd == VAR_5) {
  FUNC_7(VAR_9, VAR_15, VAR_16);
  VAR_13->header.arglen = FUNC_9(VAR_16) + 1;
  FUNC_6(VAR_18, VAR_9, VAR_10, VAR_13);
  FUNC_2(VAR_19);
  return (0);
 }
 VAR_17 = 0;
 VAR_17 += FUNC_8(VAR_17 + VAR_16,"Framer status %b;\n", VAR_12->framer_state, "\20"
     "\40LOS\37AIS\36LFA\35RRA"
     "\34AUXP\33NMF\32LMFA\31frs0.0"
     "\30frs1.7\27TS16RA\26TS16LOS\25TS16AIS"
     "\24TS16LFA\23frs1.2\22XLS\21XLO"
     "\20RS1\17rsw.6\16RRA\15RY0"
     "\14RY1\13RY2\12RY3\11RY4"
     "\10SI1\7SI2\6rsp.5\5rsp.4"
     "\4rsp.3\3RSIF\2RS13\1RS15");
 VAR_17 += FUNC_8(VAR_17 + VAR_16,"    Framing errors: %lu", VAR_12->cnt_fec);
 VAR_17 += FUNC_8(VAR_17 + VAR_16,"  Code Violations: %lu\n", VAR_12->cnt_cvc);

 VAR_17 += FUNC_8(VAR_17 + VAR_16,"    Falc State %b;\n", VAR_12->falc_state, "\20"
     "\40LOS\37AIS\36LFA\35RRA"
     "\34AUXP\33NMF\32LMFA\31frs0.0"
     "\30frs1.7\27TS16RA\26TS16LOS\25TS16AIS"
     "\24TS16LFA\23frs1.2\22XLS\21XLO"
     "\20RS1\17rsw.6\16RRA\15RY0"
     "\14RY1\13RY2\12RY3\11RY4"
     "\10SI1\7SI2\6rsp.5\5rsp.4"
     "\4rsp.3\3RSIF\2RS13\1RS15");
 VAR_17 += FUNC_8(VAR_17 + VAR_16, "    Falc IRQ %b\n", VAR_12->falc_irq, "\20"
     "\40RME\37RFS\36T8MS\35RMB\34CASC\33CRC4\32SA6SC\31RPF"
     "\30b27\27RDO\26ALLS\25XDU\24XMB\23b22\22XLSC\21XPR"
     "\20FAR\17LFA\16MFAR\15T400MS\14AIS\13LOS\12RAR\11RA"
     "\10ES\7SEC\6LMFA16\5AIS16\4RA16\3API\2SLN\1SLP");
 for (VAR_18 = 0; VAR_18 < VAR_2; VAR_18++) {
  if (!VAR_12->ch[VAR_18])
   continue;
  VAR_14 = VAR_12->ch[VAR_18];

  VAR_17 += FUNC_8(VAR_16 + VAR_17, "  Chan %d <%s> ",
      VAR_18, FUNC_3(VAR_14->hook));

  VAR_17 += FUNC_8(VAR_16 + VAR_17, "  Last Rx: ");
  if (VAR_14->last_recv)
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "%lu s",
       (unsigned long)(VAR_8 - VAR_14->last_recv));
  else
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "never");

  VAR_17 += FUNC_8(VAR_16 + VAR_17, ", last RxErr: ");
  if (VAR_14->last_rxerr)
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "%lu s",
       (unsigned long)(VAR_8 - VAR_14->last_rxerr));
  else
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "never");

  VAR_17 += FUNC_8(VAR_16 + VAR_17, ", last Tx: ");
  if (VAR_14->last_xmit)
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "%lu s\n",
       (unsigned long)(VAR_8 - VAR_14->last_xmit));
  else
   VAR_17 += FUNC_8(VAR_16 + VAR_17, "never\n");

  VAR_17 += FUNC_8(VAR_16 + VAR_17, "    RX error(s) %lu", VAR_14->rx_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " Short: %lu", VAR_14->short_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " CRC: %lu", VAR_14->crc_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " Mod8: %lu", VAR_14->dribble_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " Long: %lu", VAR_14->long_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " Abort: %lu", VAR_14->abort_error);
  VAR_17 += FUNC_8(VAR_16 + VAR_17, " Overflow: %lu\n", VAR_14->overflow_error);

  VAR_17 += FUNC_8(VAR_16 + VAR_17, "    Last error: %b  Prev error: %b\n",
      VAR_14->last_error, "\20\7SHORT\5CRC\4MOD8\3LONG\2ABORT\1OVERRUN",
      VAR_14->prev_error, "\20\7SHORT\5CRC\4MOD8\3LONG\2ABORT\1OVERRUN");
  VAR_17 += FUNC_8(VAR_16 + VAR_17, "    Xmit bytes pending %ld\n",
      VAR_14->tx_pending);
 }
 VAR_13->header.arglen = VAR_17 + 1;


 FUNC_6(VAR_18, VAR_9, VAR_10, VAR_13);
 FUNC_2(VAR_19);
 return (0);
}
