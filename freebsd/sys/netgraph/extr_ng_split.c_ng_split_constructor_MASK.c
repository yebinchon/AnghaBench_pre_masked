
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;

__attribute__((used)) static int
FUNC_2(node_p VAR_3)
{
 priv_p VAR_4;


 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0, VAR_2 | VAR_1);


 FUNC_0(VAR_3, VAR_4);
 VAR_4->node = VAR_3;


 return (0);
}
