
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bandwidth; scalar_t__ latency; scalar_t__ enableLink; scalar_t__ enableProtoComp; scalar_t__ enableACFComp; } ;
struct ng_ppp_link {scalar_t__ latency; void* seq; int* lastWrite; scalar_t__ bytesInQueue; TYPE_1__ conf; int * hook; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
struct TYPE_6__ {scalar_t__ enableMultilink; int enableIP; scalar_t__ enableCompression; scalar_t__ enableEncryption; scalar_t__ enableVJCompression; scalar_t__ xmitShortSeq; } ;
struct TYPE_7__ {int vjCompHooked; int* activeLinks; int numActiveLinks; int allLinksEqual; int ** hooks; TYPE_2__ conf; struct ng_ppp_link* links; void* mseq; void* xseq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int**,int) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(node_p VAR_11, int VAR_12)
{
 const priv_p VAR_13 = FUNC_1(VAR_11);
 int VAR_14;


 VAR_13->vjCompHooked = VAR_13->hooks[VAR_2] != ((void*)0)
     && VAR_13->hooks[VAR_1] != ((void*)0)
     && VAR_13->hooks[VAR_3] != ((void*)0)
     && VAR_13->hooks[VAR_4] != ((void*)0);


 if (VAR_12) {
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   int VAR_15;

   if (VAR_13->links[VAR_14].conf.bandwidth == 0)
       continue;

   VAR_15 = VAR_5
       + (VAR_13->links[VAR_14].conf.enableACFComp ? 0 : 2)
       + (VAR_13->links[VAR_14].conf.enableProtoComp ? 1 : 2)
       + (VAR_13->conf.xmitShortSeq ? 2 : 4);
   VAR_13->links[VAR_14].latency =
       VAR_13->links[VAR_14].conf.latency +
       (VAR_15 / VAR_13->links[VAR_14].conf.bandwidth + 50) / 100;
  }
 }


 FUNC_2(&VAR_13->activeLinks, sizeof(VAR_13->activeLinks));
 VAR_13->numActiveLinks = 0;
 VAR_13->allLinksEqual = 1;
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  struct ng_ppp_link *const VAR_16 = &VAR_13->links[VAR_14];


  if (VAR_16->conf.enableLink && VAR_16->hook != ((void*)0)) {
   struct ng_ppp_link *VAR_17;


   VAR_13->activeLinks[VAR_13->numActiveLinks++] = VAR_14;
   VAR_17 = &VAR_13->links[VAR_13->activeLinks[0]];


   if (VAR_16->latency != VAR_17->latency
     || VAR_16->conf.bandwidth != VAR_17->conf.bandwidth)
    VAR_13->allLinksEqual = 0;


   if (VAR_16->seq == VAR_7) {
    VAR_16->seq = (VAR_16 == VAR_17) ?
        VAR_6 : VAR_17->seq;
   }
  } else
   VAR_16->seq = VAR_7;
 }


 if (VAR_13->conf.enableMultilink && VAR_13->numActiveLinks > 0)
  FUNC_4(VAR_11);
 else {
  FUNC_5(VAR_11);
  FUNC_3(VAR_11);
  VAR_13->xseq = VAR_6;
  VAR_13->mseq = VAR_6;
  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
   struct ng_ppp_link *const VAR_18 = &VAR_13->links[VAR_14];

   FUNC_2(&VAR_18->lastWrite, sizeof(VAR_18->lastWrite));
   VAR_18->bytesInQueue = 0;
   VAR_18->seq = VAR_7;
  }
 }

 if (VAR_13->hooks[VAR_0] != ((void*)0)) {
  if (VAR_13->conf.enableIP == 1 &&
      VAR_13->numActiveLinks == 1 &&
      VAR_13->conf.enableMultilink == 0 &&
      VAR_13->conf.enableCompression == 0 &&
      VAR_13->conf.enableEncryption == 0 &&
      VAR_13->conf.enableVJCompression == 0)
   FUNC_0(VAR_13->hooks[VAR_0],
       VAR_10);
  else
   FUNC_0(VAR_13->hooks[VAR_0],
       VAR_9);
 }
}
