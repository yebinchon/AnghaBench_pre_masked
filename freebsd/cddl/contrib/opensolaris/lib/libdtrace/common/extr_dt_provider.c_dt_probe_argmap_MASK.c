
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {struct TYPE_4__* dn_list; int * dn_string; } ;
typedef TYPE_1__ dt_node_t ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static uint8_t
FUNC_1(dt_node_t *VAR_0, dt_node_t *VAR_1)
{
 uint8_t VAR_2;

 for (VAR_2 = 0; VAR_1 != ((void*)0); VAR_2++) {
  if (VAR_1->dn_string != ((void*)0) &&
      FUNC_0(VAR_1->dn_string, VAR_0->dn_string) == 0)
   break;
  else
   VAR_1 = VAR_1->dn_list;
 }

 return (VAR_2);
}
