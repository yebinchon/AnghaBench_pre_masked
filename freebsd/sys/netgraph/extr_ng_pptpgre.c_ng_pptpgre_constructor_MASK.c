
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_6__ {int reorderTimer; scalar_t__ roq_len; int roq; int node; int rackTimer; int sackTimer; int mtx; } ;
struct TYPE_5__ {TYPE_4__ uppersess; int * sesshash; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_7(node_p VAR_6)
{
 priv_p VAR_7;
 int VAR_8;


 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);

 FUNC_2(VAR_6, VAR_7);


 FUNC_5(&VAR_7->uppersess.mtx, "ng_pptp", ((void*)0), VAR_0);
 FUNC_6(&VAR_7->uppersess.sackTimer);
 FUNC_6(&VAR_7->uppersess.rackTimer);
 VAR_7->uppersess.node = VAR_6;

 FUNC_3(&VAR_7->uppersess.roq);
 VAR_7->uppersess.roq_len = 0;
 FUNC_6(&VAR_7->uppersess.reorderTimer);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
     FUNC_0(&VAR_7->sesshash[VAR_8]);

 FUNC_1(&VAR_7->sesshash[0], &VAR_7->uppersess, VAR_5);


 return (0);
}
