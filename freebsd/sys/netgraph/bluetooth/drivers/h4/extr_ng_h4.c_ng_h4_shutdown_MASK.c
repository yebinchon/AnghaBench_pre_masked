
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int node_p ;
typedef TYPE_1__* ng_h4_info_p ;
struct TYPE_8__ {int ifq_mtx; } ;
struct TYPE_7__ {TYPE_4__ outq; int dying; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_2)
{
 ng_h4_info_p VAR_3 = (ng_h4_info_p) FUNC_2(VAR_2);

 FUNC_0(VAR_3);

 if (!VAR_3->dying) {
  FUNC_1(VAR_3);

  FUNC_3(VAR_2);

  return (VAR_0);
 }

 FUNC_1(VAR_3);

 FUNC_4(VAR_2, ((void*)0));

 FUNC_6(&VAR_3->outq);

 FUNC_5(VAR_2);
 FUNC_9(&VAR_3->outq.ifq_mtx);
 FUNC_7(VAR_3, sizeof(*VAR_3));
 FUNC_8(VAR_3, VAR_1);

 return (0);
}
