
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_17__ {int rmp_retcode; int rmp_session; } ;
struct TYPE_16__ {int rmp_session; int rmp_retcode; int rmp_offset; } ;
struct TYPE_15__ {int rmp_size; int rmp_session; int rmp_retcode; int rmp_offset; } ;
struct TYPE_14__ {int rmp_flnm; int rmp_flnmsize; int rmp_version; int rmp_session; int rmp_retcode; int rmp_seqno; } ;
struct TYPE_13__ {char* rmp_machtype; int rmp_flnm; int rmp_flnmsize; int rmp_version; int rmp_session; int rmp_retcode; int rmp_seqno; } ;
struct TYPE_12__ {int dsap; int ssap; int sxsap; int dxsap; int cntrl; } ;
struct rmp_packet {int r_type; TYPE_7__ r_done; TYPE_6__ r_rrpl; TYPE_5__ r_rrq; TYPE_4__ r_brpl; TYPE_3__ r_brq; TYPE_2__ hp_llc; } ;
struct TYPE_11__ {int tv_usec; int tv_sec; } ;
struct TYPE_18__ {int rmplen; struct rmp_packet rmp; TYPE_1__ tstamp; } ;
typedef TYPE_8__ RMPCONN ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int *) ;
 char* FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (int ,int) ;
 char* VAR_3 ;
 int FUNC_3 (int ) ;



 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,...) ;
 int FUNC_7 (char,int *) ;
 int FUNC_8 (char*,int *) ;
 struct tm* FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;

void
FUNC_14(RMPCONN *VAR_9, int VAR_10)
{
 static const char VAR_11[] = "\t\tRetCode:%u SeqNo:%x SessID:%x Vers:%u";
 static const char VAR_12[] = "\t\tRetCode:%u Offset:%x SessID:%x\n";

 struct tm *VAR_13;
 struct rmp_packet *VAR_14;
 int VAR_15, VAR_16;
 u_int32_t VAR_17;





 VAR_16 = FUNC_11(FUNC_12(VAR_6)|FUNC_12(VAR_7)|FUNC_12(VAR_8));

 if (VAR_2 == ((void*)0)) {
  (void) FUNC_13(VAR_16);
  return;
 }


 FUNC_8((VAR_10==VAR_0)?"<<< ":(VAR_10==VAR_1)?">>> ":"", VAR_2);


 VAR_13 = FUNC_9((time_t *)&VAR_9->tstamp.tv_sec);
 FUNC_6(VAR_2, "%02d:%02d:%02d.%06d   ", VAR_13->tm_hour, VAR_13->tm_min,
         VAR_13->tm_sec, VAR_9->tstamp.tv_usec);


 FUNC_6(VAR_2, "Addr: %s   Intf: %s\n", FUNC_1(VAR_9), VAR_3);

 VAR_14 = &VAR_9->rmp;


 (void) FUNC_6(VAR_2, "\t802.2 LLC: DSAP:%x SSAP:%x CTRL:%x\n",
               VAR_14->hp_llc.dsap, VAR_14->hp_llc.ssap, FUNC_10(VAR_14->hp_llc.cntrl));


 (void) FUNC_6(VAR_2, "\tHP Ext:    DXSAP:%x SXSAP:%x\n",
                FUNC_10(VAR_14->hp_llc.dxsap), FUNC_10(VAR_14->hp_llc.sxsap));





 switch(VAR_14->r_type) {
  case 130:
   (void) FUNC_6(VAR_2, "\tBoot Request:");
   FUNC_2(VAR_14->r_brq.rmp_seqno, VAR_17);
   if (FUNC_10(VAR_14->r_brq.rmp_session) == VAR_5) {
    if (FUNC_4(VAR_14->r_brq.rmp_seqno))
     FUNC_8(" (Send Server ID)", VAR_2);
    else
     FUNC_6(VAR_2," (Send Filename #%u)",VAR_17);
   }
   (void) FUNC_7('\n', VAR_2);
   (void) FUNC_6(VAR_2, VAR_11, VAR_14->r_brq.rmp_retcode,
           VAR_17, FUNC_10(VAR_14->r_brq.rmp_session),
           FUNC_10(VAR_14->r_brq.rmp_version));
   (void) FUNC_6(VAR_2, "\n\t\tMachine Type: ");
   for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++)
    (void) FUNC_7(VAR_14->r_brq.rmp_machtype[VAR_15], VAR_2);
   FUNC_0(VAR_14->r_brq.rmp_flnmsize, &VAR_14->r_brq.rmp_flnm);
   break;
  case 131:
   FUNC_6(VAR_2, "\tBoot Reply:\n");
   FUNC_2(VAR_14->r_brpl.rmp_seqno, VAR_17);
   (void) FUNC_6(VAR_2, VAR_11, VAR_14->r_brpl.rmp_retcode,
           VAR_17, FUNC_10(VAR_14->r_brpl.rmp_session),
           FUNC_10(VAR_14->r_brpl.rmp_version));
   FUNC_0(VAR_14->r_brpl.rmp_flnmsize,&VAR_14->r_brpl.rmp_flnm);
   break;
  case 128:
   (void) FUNC_6(VAR_2, "\tRead Request:\n");
   FUNC_2(VAR_14->r_rrq.rmp_offset, VAR_17);
   (void) FUNC_6(VAR_2, VAR_12, VAR_14->r_rrq.rmp_retcode,
           VAR_17, FUNC_10(VAR_14->r_rrq.rmp_session));
   (void) FUNC_6(VAR_2, "\t\tNoOfBytes: %u\n",
           FUNC_10(VAR_14->r_rrq.rmp_size));
   break;
  case 129:
   (void) FUNC_6(VAR_2, "\tRead Reply:\n");
   FUNC_2(VAR_14->r_rrpl.rmp_offset, VAR_17);
   (void) FUNC_6(VAR_2, VAR_12, VAR_14->r_rrpl.rmp_retcode,
           VAR_17, FUNC_10(VAR_14->r_rrpl.rmp_session));
   (void) FUNC_6(VAR_2, "\t\tNoOfBytesSent: %d\n",
           VAR_9->rmplen - FUNC_3(0));
   break;
  case 132:
   (void) FUNC_6(VAR_2, "\tBoot Complete:\n");
   (void) FUNC_6(VAR_2, "\t\tRetCode:%u SessID:%x\n",
           VAR_14->r_done.rmp_retcode,
           FUNC_10(VAR_14->r_done.rmp_session));
   break;
  default:
   (void) FUNC_6(VAR_2, "\tUnknown Type:(%d)\n",
    VAR_14->r_type);
 }
 (void) FUNC_7('\n', VAR_2);
 (void) FUNC_5(VAR_2);

 (void) FUNC_13(VAR_16);
}
