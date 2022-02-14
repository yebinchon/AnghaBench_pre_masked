
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {int nextid; int node; int redirhead; int dlt; scalar_t__ rdrcount; int lib; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int,int ,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_5)
{
 priv_p VAR_6;


 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1, VAR_2 | VAR_3);


 VAR_6->lib = FUNC_0(((void*)0));


 (void )FUNC_1(VAR_6->lib, VAR_4,
     VAR_4);


 VAR_6->rdrcount = 0;
 VAR_6->nextid = 1;
 VAR_6->dlt = VAR_0;
 FUNC_4(&VAR_6->redirhead);


 FUNC_3(VAR_5, VAR_6);
 VAR_6->node = VAR_5;





 FUNC_2(VAR_5);

 return (0);
}
