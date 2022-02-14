
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_5__ {int xmtx; int rmtx; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int) ;
 int FUNC_4 (TYPE_1__* const,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_1)
{
 const priv_p VAR_2 = FUNC_0(VAR_1);


 FUNC_7(VAR_1);


 FUNC_6(VAR_1);
 FUNC_5(&VAR_2->rmtx);
 FUNC_5(&VAR_2->xmtx);
 FUNC_3(VAR_2, sizeof(*VAR_2));
 FUNC_4(VAR_2, VAR_0);
 FUNC_1(VAR_1, ((void*)0));
 FUNC_2(VAR_1);
 return (0);
}
