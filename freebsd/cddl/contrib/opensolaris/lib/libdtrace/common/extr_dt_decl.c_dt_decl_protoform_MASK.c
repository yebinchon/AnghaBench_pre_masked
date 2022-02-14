
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dn_string; struct TYPE_4__* dn_list; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(dt_node_t *VAR_2, dt_node_t *VAR_3)
{
 dt_node_t *VAR_4;

 for (VAR_4 = VAR_3; VAR_4 != VAR_2 && VAR_4 != ((void*)0); VAR_4 = VAR_4->dn_list) {
  if (VAR_4->dn_string != ((void*)0) &&
      FUNC_0(VAR_4->dn_string, VAR_2->dn_string) == 0)
   return (VAR_1);
 }

 return (VAR_0);
}
