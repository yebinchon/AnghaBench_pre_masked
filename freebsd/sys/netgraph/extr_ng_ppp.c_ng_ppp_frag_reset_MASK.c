
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_ppp_frag {int data; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int frags; int fragsfree; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 struct ng_ppp_frag* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ng_ppp_frag*,int ) ;
 struct ng_ppp_frag* FUNC_5 (struct ng_ppp_frag*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_1(VAR_1);
 struct ng_ppp_frag *VAR_3, *VAR_4;

 for (VAR_3 = FUNC_2(&VAR_2->frags); VAR_3; VAR_3 = VAR_4) {
  VAR_4 = FUNC_5(VAR_3, VAR_0);
  FUNC_0(VAR_3->data);
  FUNC_4(&VAR_2->fragsfree, VAR_3, VAR_0);
 }
 FUNC_3(&VAR_2->frags);
}
