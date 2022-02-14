
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* addr; scalar_t__ assocID; } ;
typedef TYPE_1__ unpeer_node ;
typedef int u_long ;
typedef int u_char ;
typedef scalar_t__ associd_t ;
struct TYPE_8__ {scalar_t__ address; } ;
typedef TYPE_2__ address_node ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int const) ;

unpeer_node *
FUNC_3(
 address_node *VAR_1
 )
{
 unpeer_node * VAR_2;
 u_long VAR_3;
 const u_char * VAR_4;

 VAR_2 = FUNC_1(sizeof(*VAR_2));






 for (VAR_3 = 0, VAR_4 = (u_char*)VAR_1->address; FUNC_2(*VAR_4); ++VAR_4) {

  VAR_3 = (10 * VAR_3 + *VAR_4 - '0') | (VAR_3 & 0xFF000000u);
 }

 if (!*VAR_4 && VAR_3 <= VAR_0) {
  VAR_2->assocID = (associd_t)VAR_3;
  VAR_2->addr = ((void*)0);
  FUNC_0(VAR_1);
 } else {
  VAR_2->assocID = 0;
  VAR_2->addr = VAR_1;
 }

 return VAR_2;
}
