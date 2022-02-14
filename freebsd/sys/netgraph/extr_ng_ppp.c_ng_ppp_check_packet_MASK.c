
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ng_ppp_frag {scalar_t__ seq; int last; int first; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {int mseq; int frags; } ;


 scalar_t__ FUNC_0 (TYPE_1__* const,scalar_t__) ;
 int FUNC_1 (TYPE_1__* const,scalar_t__,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 struct ng_ppp_frag* FUNC_4 (int *) ;
 struct ng_ppp_frag* FUNC_5 (struct ng_ppp_frag*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_2(VAR_1);
 struct ng_ppp_frag *VAR_3, *VAR_4;


 if (FUNC_3(&VAR_2->frags))
  return (0);


 VAR_3 = FUNC_4(&VAR_2->frags);
 if (!VAR_3->first || FUNC_1(VAR_2, VAR_3->seq, VAR_2->mseq) > 1)
  return (0);


 while (!VAR_3->last) {
  VAR_4 = FUNC_5(VAR_3, VAR_0);
  if (VAR_4 == ((void*)0))
   return (0);
  if (VAR_4->seq != FUNC_0(VAR_2, VAR_3->seq))
   return (0);
  VAR_3 = VAR_4;
 }


 return (1);
}
