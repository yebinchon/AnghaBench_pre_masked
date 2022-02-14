
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtsp_num_conditions; int dtsp_pdescs; } ;
typedef TYPE_1__ dt_sugar_parse_t ;
typedef int dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(dt_sugar_parse_t *VAR_2, int VAR_3, dt_node_t *VAR_4)
{
 dt_node_t *VAR_5 = ((void*)0);

 if (VAR_3 == 0) {





  if (VAR_2->dtsp_num_conditions != 0) {
   VAR_5 = FUNC_1(VAR_1,
       FUNC_5());
  }
 } else {
  VAR_5 = FUNC_2(VAR_0,
      FUNC_1(VAR_1, FUNC_5()),
      FUNC_4(VAR_3));
 }
 FUNC_3(VAR_2,
     FUNC_0(VAR_2->dtsp_pdescs, VAR_5, VAR_4));
}
