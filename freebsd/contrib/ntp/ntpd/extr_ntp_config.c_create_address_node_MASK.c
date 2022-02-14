
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_4__ {char* address; scalar_t__ type; } ;
typedef TYPE_1__ address_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

address_node *
FUNC_2(
 char * VAR_3,
 int VAR_4
 )
{
 address_node *VAR_5;

 FUNC_0(((void*)0) != VAR_3);
 FUNC_0(VAR_0 == VAR_4 || VAR_1 == VAR_4 || VAR_2 == VAR_4);
 VAR_5 = FUNC_1(sizeof(*VAR_5));
 VAR_5->address = VAR_3;
 VAR_5->type = (u_short)VAR_4;

 return VAR_5;
}
