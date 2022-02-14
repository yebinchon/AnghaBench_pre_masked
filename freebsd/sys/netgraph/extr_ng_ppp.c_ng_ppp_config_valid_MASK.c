
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int enableMultilink; int recvShortSeq; int xmitShortSeq; } ;
struct ng_ppp_node_conf {TYPE_4__ bund; TYPE_2__* links; } ;
typedef TYPE_5__* priv_p ;
typedef int node_p ;
struct TYPE_9__ {int recvShortSeq; int xmitShortSeq; int enableMultilink; } ;
struct TYPE_11__ {scalar_t__ numActiveLinks; TYPE_3__ conf; TYPE_1__* links; } ;
struct TYPE_8__ {scalar_t__ mru; scalar_t__ bandwidth; scalar_t__ latency; scalar_t__ enableLink; } ;
struct TYPE_7__ {int * hook; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(node_p VAR_4, const struct ng_ppp_node_conf *VAR_5)
{
 const priv_p VAR_6 = FUNC_0(VAR_4);
 int VAR_7, VAR_8;


 for (VAR_8 = VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_5->links[VAR_7].enableLink && VAR_6->links[VAR_7].hook != ((void*)0))
   VAR_8++;
  if (!VAR_5->links[VAR_7].enableLink)
   continue;
  if (VAR_5->links[VAR_7].mru < VAR_0)
   return (0);
  if (VAR_5->links[VAR_7].bandwidth == 0)
   return (0);
  if (VAR_5->links[VAR_7].bandwidth > VAR_1)
   return (0);
  if (VAR_5->links[VAR_7].latency > VAR_2)
   return (0);
 }


 if (VAR_6->numActiveLinks > 0 && VAR_8 > 0) {
  if (!VAR_6->conf.enableMultilink
    != !VAR_5->bund.enableMultilink
      || !VAR_6->conf.xmitShortSeq != !VAR_5->bund.xmitShortSeq
      || !VAR_6->conf.recvShortSeq != !VAR_5->bund.recvShortSeq)
   return (0);
 }


 if (!VAR_5->bund.enableMultilink && VAR_8 > 1)
  return (0);


 return (1);
}
