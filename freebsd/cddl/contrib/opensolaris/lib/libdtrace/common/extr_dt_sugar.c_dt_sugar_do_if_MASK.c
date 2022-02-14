
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int dt_sugar_parse_t ;
struct TYPE_5__ {scalar_t__ dn_kind; int * dn_alternate_body; int * dn_body; struct TYPE_5__* dn_conditional; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_5(dt_sugar_parse_t *VAR_2, dt_node_t *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->dn_kind == VAR_0);


 VAR_5 = FUNC_2(VAR_2,
     VAR_3->dn_conditional, VAR_4);


 FUNC_4(VAR_2, VAR_3->dn_body, VAR_5);






 if (VAR_3->dn_alternate_body != ((void*)0)) {
  dt_node_t *VAR_6 =
      FUNC_1(VAR_1, FUNC_3(VAR_5));
  FUNC_4(VAR_2, VAR_3->dn_alternate_body,
      FUNC_2(VAR_2, VAR_6, VAR_4));
 }
}
