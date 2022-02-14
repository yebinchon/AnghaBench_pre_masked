
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct TYPE_4__ {int bandwidth; } ;
struct ng_ppp_link {int latency; int bytesInQueue; TYPE_1__ conf; struct timeval lastWrite; } ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {int numActiveLinks; size_t* activeLinks; struct ng_ppp_link* links; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct timeval*) ;
 int VAR_1 ;
 int FUNC_2 (int*,int,int,int*,int ) ;
 int FUNC_3 (struct timeval*,struct timeval*) ;

__attribute__((used)) static void
FUNC_4(node_p VAR_2, int VAR_3, int *VAR_4)
{
 const priv_p VAR_5 = FUNC_0(VAR_2);
 int VAR_6[VAR_0];
 int VAR_7[VAR_0];
 int VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct timeval VAR_13;
 int VAR_14, VAR_15;


 if (VAR_5->numActiveLinks == 1) {
  VAR_4[0] = VAR_3;
  return;
 }


 FUNC_1(&VAR_13);


 for (VAR_8 = 0;
     VAR_8 < VAR_5->numActiveLinks; VAR_8++) {
  struct ng_ppp_link *VAR_16;
  struct timeval VAR_17;
  int VAR_18;


  VAR_16 = &VAR_5->links[VAR_5->activeLinks[VAR_8]];
  VAR_6[VAR_8] = VAR_16->latency;
  VAR_7[VAR_8] = VAR_8;


  if (VAR_16->bytesInQueue == 0)
   continue;


  VAR_17 = VAR_13;
  FUNC_3(&VAR_17, &VAR_16->lastWrite);


  VAR_16->lastWrite = VAR_13;

  if (VAR_13.tv_sec < 0 || VAR_17.tv_sec >= 10) {
   VAR_16->bytesInQueue = 0;
   continue;
  }


  VAR_18 = (VAR_16->conf.bandwidth * 10 * VAR_17.tv_sec)
      + (VAR_16->conf.bandwidth * (VAR_17.tv_usec / 1000)) / 100;
  VAR_16->bytesInQueue -= VAR_18;
  if (VAR_16->bytesInQueue < 0)
   VAR_16->bytesInQueue = 0;
  else
   VAR_6[VAR_8] +=
       (100 * VAR_16->bytesInQueue) / VAR_16->conf.bandwidth;
 }


 FUNC_2(VAR_7,
     VAR_5->numActiveLinks, sizeof(*VAR_7), VAR_6, VAR_1);


 for (VAR_15 = 1;
     VAR_15 < VAR_5->numActiveLinks; VAR_15++) {
  for (VAR_10 = VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   int VAR_19;

   VAR_19 = VAR_6[VAR_7[VAR_15]]
       - VAR_6[VAR_7[VAR_14]];
   VAR_10 += ((VAR_19 * VAR_5->links[
       VAR_5->activeLinks[VAR_7[VAR_14]]].conf.bandwidth)
        + 99) / 100;
  }
  if (VAR_10 >= VAR_3)
   break;
 }


 for (VAR_11 = VAR_12 = VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  int VAR_20 = VAR_5->links[
      VAR_5->activeLinks[VAR_7[VAR_14]]].conf.bandwidth;

  VAR_11 += VAR_6[VAR_7[VAR_14]] * VAR_20;
  VAR_12 += VAR_20;
 }
 VAR_9 = ((VAR_3 * 100) + VAR_11 + VAR_12 / 2) / VAR_12;


 for (VAR_10 = VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  int VAR_21 = VAR_5->links[
      VAR_5->activeLinks[VAR_7[VAR_14]]].conf.bandwidth;

  VAR_4[VAR_7[VAR_14]] =
      (VAR_21 * (VAR_9 - VAR_6[VAR_7[VAR_14]]) + 50) / 100;
  VAR_10 += VAR_4[VAR_7[VAR_14]];
 }


 if (VAR_10 < VAR_3) {
  struct ng_ppp_link *VAR_22 =
      &VAR_5->links[VAR_5->activeLinks[VAR_7[0]]];
  int VAR_23 = 0;


  for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++) {
   struct ng_ppp_link *const VAR_24 =
       &VAR_5->links[VAR_5->activeLinks[VAR_7[VAR_14]]];

   if (VAR_24->conf.bandwidth > VAR_22->conf.bandwidth) {
    VAR_23 = VAR_14;
    VAR_22 = VAR_24;
   }
  }
  VAR_4[VAR_7[VAR_23]] += VAR_3 - VAR_10;
 } else while (VAR_10 > VAR_3) {
  struct ng_ppp_link *VAR_25 =
      &VAR_5->links[VAR_5->activeLinks[VAR_7[0]]];
  int VAR_26, VAR_27 = 0;


  for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++) {
   struct ng_ppp_link *const VAR_28 =
       &VAR_5->links[VAR_5->activeLinks[VAR_7[VAR_14]]];

   if (VAR_4[VAR_7[VAR_27]] == 0 ||
       (VAR_4[VAR_7[VAR_14]] > 0 &&
       VAR_28->conf.bandwidth < VAR_25->conf.bandwidth)) {
    VAR_27 = VAR_14;
    VAR_25 = VAR_28;
   }
  }
  VAR_26 = VAR_10 - VAR_3;
  if (VAR_26 > VAR_4[VAR_7[VAR_27]])
   VAR_26 = VAR_4[VAR_7[VAR_27]];
  VAR_4[VAR_7[VAR_27]] -= VAR_26;
  VAR_10 -= VAR_26;
 }
}
