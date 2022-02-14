
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_7__ {int mtx; } ;
struct TYPE_6__ {TYPE_2__ uppersess; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__* const,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(node_p VAR_2)
{
 const priv_p VAR_3 = FUNC_1(VAR_2);


 FUNC_5(&VAR_3->uppersess);

 FUNC_0(&VAR_3->uppersess, VAR_1);
 FUNC_4(&VAR_3->uppersess.mtx);

 FUNC_3(VAR_3, VAR_0);


 FUNC_2(VAR_2);
 return (0);
}
