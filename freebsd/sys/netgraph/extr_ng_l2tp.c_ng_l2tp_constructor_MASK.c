
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
struct TYPE_6__ {int peer_win; int rexmit_max_to; int rexmit_max; } ;
struct TYPE_7__ {int * sesshash; TYPE_1__ conf; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(node_p VAR_6)
{
 priv_p VAR_7;
 int VAR_8;


 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_2, VAR_3 | VAR_4);
 FUNC_1(VAR_6, VAR_7);
 VAR_7->node = VAR_6;


 VAR_7->conf.peer_win = 1;
 VAR_7->conf.rexmit_max = VAR_0;
 VAR_7->conf.rexmit_max_to = VAR_1;


 FUNC_3(VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
     FUNC_0(&VAR_7->sesshash[VAR_8]);


 return (0);
}
