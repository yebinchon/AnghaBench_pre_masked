
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ng_ppp_link {void* seq; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef void* int32_t ;
struct TYPE_4__ {int numActiveLinks; size_t* activeLinks; struct ng_ppp_link* links; void* mseq; } ;


 scalar_t__ FUNC_0 (TYPE_1__* const,void*,void*) ;
 TYPE_1__* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(node_p VAR_0, int32_t VAR_1)
{
 const priv_p VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 if (FUNC_0(VAR_2, VAR_2->mseq, VAR_1) < 0) {
  VAR_2->mseq = VAR_1;
  for (VAR_3 = 0; VAR_3 < VAR_2->numActiveLinks; VAR_3++) {
   struct ng_ppp_link *const VAR_4 =
       &VAR_2->links[VAR_2->activeLinks[VAR_3]];

   if (FUNC_0(VAR_2,
       VAR_4->seq, VAR_1) < 0)
    VAR_4->seq = VAR_1;
  }
 }
}
