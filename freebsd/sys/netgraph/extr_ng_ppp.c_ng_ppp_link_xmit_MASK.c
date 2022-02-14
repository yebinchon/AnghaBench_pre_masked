
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_10__ {int xmitOctets; int xmitFrames; } ;
struct TYPE_8__ {size_t mru; int enableACFComp; int enableProtoComp; } ;
struct ng_ppp_link {int bytesInQueue; int lastWrite; TYPE_3__ stats; int * hook; TYPE_1__ conf; } ;
struct TYPE_9__ {size_t len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
typedef TYPE_6__* priv_p ;
typedef int node_p ;
typedef int item_p ;
struct TYPE_12__ {int enableRoundRobin; scalar_t__ enableMultilink; } ;
struct TYPE_11__ {int xmitOctets; int xmitFrames; } ;
struct TYPE_13__ {int xmtx; TYPE_5__ conf; int allLinksEqual; TYPE_4__ bundleStats; struct ng_ppp_link* links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,struct mbuf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (int,int ,int *,struct mbuf*) ;
 TYPE_6__* FUNC_5 (int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 struct mbuf* FUNC_9 (struct mbuf*,size_t,int ) ;
 struct mbuf* FUNC_10 (struct mbuf*,int *,int) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_7, item_p VAR_8, uint16_t VAR_9, uint16_t VAR_10, int VAR_11)
{
 const priv_p VAR_12 = FUNC_5(VAR_7);
 struct ng_ppp_link *VAR_13;
 int VAR_14, VAR_15;
 struct mbuf *VAR_16;
 uint16_t VAR_17;


 if (VAR_10 >= VAR_4) {
  FUNC_0(VAR_1);
 }


 VAR_13 = &VAR_12->links[VAR_10];


 if (VAR_13->hook == ((void*)0)) {
  FUNC_0(VAR_1);
 }


 FUNC_1(VAR_8, VAR_16);


 VAR_17 = VAR_13->conf.mru;
 if (VAR_17 != 0 && VAR_16->m_pkthdr.len > VAR_17) {
  FUNC_3(VAR_16);
  FUNC_0(VAR_0);
 }


 if ((VAR_16 = FUNC_9(VAR_16, VAR_9, VAR_13->conf.enableProtoComp)) ==
     ((void*)0)) {
  FUNC_0(VAR_2);
 }


 if (VAR_9 == VAR_5 || !VAR_13->conf.enableACFComp) {
  if ((VAR_16 = FUNC_10(VAR_16, &VAR_6, 2)) == ((void*)0))
   FUNC_0(VAR_2);
 }


 VAR_14 = VAR_16->m_pkthdr.len;
 FUNC_4(VAR_15, VAR_8, VAR_13->hook, VAR_16);

 FUNC_7(&VAR_12->xmtx);


 VAR_13->stats.xmitFrames++;
 VAR_13->stats.xmitOctets += VAR_14;


 if (VAR_11 > 0) {
     VAR_12->bundleStats.xmitFrames++;
     VAR_12->bundleStats.xmitOctets += VAR_11;
 }


 if (VAR_15 == 0) {

  if (VAR_12->conf.enableMultilink && !VAR_12->allLinksEqual &&
      !VAR_12->conf.enableRoundRobin) {

   if (VAR_13->bytesInQueue == 0)
    FUNC_6(&VAR_13->lastWrite);
   VAR_13->bytesInQueue += VAR_14 + VAR_3;


   if (VAR_13->bytesInQueue > 50 * 1600)
    VAR_13->bytesInQueue = 50 * 1600;
  }
 }
 FUNC_8(&VAR_12->xmtx);
 return (VAR_15);

done:
 FUNC_2(VAR_8);
 return (VAR_15);
}
