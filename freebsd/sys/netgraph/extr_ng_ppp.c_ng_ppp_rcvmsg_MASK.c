
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct ng_ppp_node_conf {int * links; int bund; } ;
struct ng_ppp_mp_state {int dropFragments; int dupFragments; int runts; int badProtos; int recvOctets; int recvFrames; int xmitOctets; int xmitFrames; int xseq; int mseq; int * rseq; } ;
struct ng_ppp_link_stat64 {int dropFragments; int dupFragments; int runts; int badProtos; int recvOctets; int recvFrames; int xmitOctets; int xmitFrames; int xseq; int mseq; int * rseq; } ;
struct ng_ppp_link_stat {int dropFragments; int dupFragments; int runts; int badProtos; int recvOctets; int recvFrames; int xmitOctets; int xmitFrames; } ;
struct TYPE_6__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_2__ header; scalar_t__ data; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int item_p ;
typedef int hook_p ;
struct TYPE_7__ {int * hooks; TYPE_1__* links; struct ng_ppp_mp_state bundleStats; int xseq; int mseq; int conf; } ;
struct TYPE_5__ {struct ng_ppp_mp_state stats; int seq; int conf; } ;
typedef struct ng_mesg* NGI_MSG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (int,struct ng_mesg*,int ) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 TYPE_3__* FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_7 (struct ng_ppp_mp_state*,scalar_t__,int) ;
 int FUNC_8 (struct ng_ppp_mp_state*,int) ;
 int FUNC_9 (int ,struct ng_ppp_node_conf* const) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_7, item_p VAR_8, hook_p VAR_9)
{
 const priv_p VAR_10 = FUNC_5(VAR_7);
 struct ng_mesg *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 struct ng_mesg *VAR_13;

 FUNC_1(VAR_8, VAR_13);
 switch (VAR_13->header.typecookie) {
 case 136:
  switch (VAR_13->header.cmd) {
  case 129:
      {
   struct ng_ppp_node_conf *const VAR_14 =
       (struct ng_ppp_node_conf *)VAR_13->data;
   int VAR_15;


   if (VAR_13->header.arglen != sizeof(*VAR_14))
    FUNC_0(VAR_0);
   if (!FUNC_9(VAR_7, VAR_14))
    FUNC_0(VAR_0);


   VAR_10->conf = VAR_14->bund;
   for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++)
    VAR_10->links[VAR_15].conf = VAR_14->links[VAR_15];
   FUNC_10(VAR_7, 1);
   break;
      }
  case 133:
      {
   struct ng_ppp_node_conf *VAR_16;
   int VAR_17;

   FUNC_4(VAR_11, VAR_13, sizeof(*VAR_16), VAR_4);
   if (VAR_11 == ((void*)0))
    FUNC_0(VAR_1);
   VAR_16 = (struct ng_ppp_node_conf *)VAR_11->data;
   VAR_16->bund = VAR_10->conf;
   for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++)
    VAR_16->links[VAR_17] = VAR_10->links[VAR_17].conf;
   break;
      }
  case 130:
      {
   struct ng_ppp_mp_state *VAR_18;
   int VAR_19;

   FUNC_4(VAR_11, VAR_13, sizeof(*VAR_18), VAR_4);
   if (VAR_11 == ((void*)0))
    FUNC_0(VAR_1);
   VAR_18 = (struct ng_ppp_mp_state *)VAR_11->data;
   FUNC_8(VAR_18, sizeof(*VAR_18));
   for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++) {
    if (VAR_10->links[VAR_19].seq != VAR_3)
     VAR_18->rseq[VAR_19] = VAR_10->links[VAR_19].seq;
   }
   VAR_18->mseq = VAR_10->mseq;
   VAR_18->xseq = VAR_10->xseq;
   break;
      }
  case 132:
  case 137:
  case 135:
  case 131:
  case 134:
      {
   struct ng_ppp_link_stat64 *VAR_20;
   uint16_t VAR_21;


   if (VAR_13->header.arglen != sizeof(uint16_t))
    FUNC_0(VAR_0);
   VAR_21 = *((uint16_t *) VAR_13->data);
   if (VAR_21 >= VAR_6
       && VAR_21 != VAR_5)
    FUNC_0(VAR_0);
   VAR_20 = (VAR_21 == VAR_5) ?
       &VAR_10->bundleStats : &VAR_10->links[VAR_21].stats;


   if (VAR_13->header.cmd == 131 ||
       VAR_13->header.cmd == 134) {
    FUNC_4(VAR_11, VAR_13,
        sizeof(struct ng_ppp_link_stat64), VAR_4);
    if (VAR_11 == ((void*)0))
     FUNC_0(VAR_1);
    FUNC_7(VAR_20, VAR_11->data, sizeof(*VAR_20));
   } else

   if (VAR_13->header.cmd == 132 ||
       VAR_13->header.cmd == 135) {
    struct ng_ppp_link_stat *VAR_22;
    FUNC_4(VAR_11, VAR_13,
        sizeof(struct ng_ppp_link_stat), VAR_4);
    if (VAR_11 == ((void*)0))
     FUNC_0(VAR_1);
    VAR_22 = (struct ng_ppp_link_stat *)VAR_11->data;

    VAR_22->xmitFrames = VAR_20->xmitFrames;
    VAR_22->xmitOctets = VAR_20->xmitOctets;
    VAR_22->recvFrames = VAR_20->recvFrames;
    VAR_22->recvOctets = VAR_20->recvOctets;
    VAR_22->badProtos = VAR_20->badProtos;
    VAR_22->runts = VAR_20->runts;
    VAR_22->dupFragments = VAR_20->dupFragments;
    VAR_22->dropFragments = VAR_20->dropFragments;
   }

   if (VAR_13->header.cmd != 132 &&
       VAR_13->header.cmd != 131)
    FUNC_8(VAR_20, sizeof(*VAR_20));
   break;
      }
  default:
   VAR_12 = VAR_0;
   break;
  }
  break;
 case 128:
     {
  NGI_MSG(VAR_23) = VAR_13;
  VAR_13 = ((void*)0);
  if ((VAR_9 = VAR_10->hooks[VAR_2])) {
   FUNC_3(VAR_12, VAR_23, VAR_9);
  }
  return (VAR_12);
     }
 default:
  VAR_12 = VAR_0;
  break;
 }
done:
 FUNC_6(VAR_12, VAR_7, VAR_8, VAR_11);
 FUNC_2(VAR_13);
 return (VAR_12);
}
