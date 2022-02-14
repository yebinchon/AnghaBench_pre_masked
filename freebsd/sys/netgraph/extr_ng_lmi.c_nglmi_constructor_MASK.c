
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int node_p ;
struct TYPE_4__ {int liv_rate; int liv_per_full; int protoname; int handle; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_6)
{
 sc_p VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0, VAR_1 | VAR_2);

 FUNC_0(VAR_6, VAR_7);
 VAR_7->node = VAR_6;

 FUNC_2(&VAR_7->handle);
 VAR_7->protoname = VAR_3;
 VAR_7->liv_per_full = VAR_5;
 VAR_7->liv_rate = VAR_4;
 return (0);
}
