
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_4__ {int enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(node_p VAR_4)
{
 priv_p VAR_5;


 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);


 VAR_5->enc = VAR_3;

 FUNC_0(VAR_4, VAR_5);


 return (0);
}
