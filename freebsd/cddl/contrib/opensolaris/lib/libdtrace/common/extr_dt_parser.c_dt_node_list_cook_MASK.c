
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_attribute_t ;
struct TYPE_5__ {struct TYPE_5__* dn_list; int dn_attr; } ;
typedef TYPE_1__ dt_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;

dtrace_attribute_t
FUNC_2(dt_node_t **VAR_1, uint_t VAR_2)
{
 dtrace_attribute_t VAR_3 = VAR_0;
 dt_node_t *VAR_4, *VAR_5;

 for (VAR_4 = (VAR_1 != ((void*)0) ? *VAR_1 : ((void*)0)); VAR_4 != ((void*)0); VAR_4 = VAR_5) {
  VAR_5 = VAR_4->dn_list;
  VAR_4 = *VAR_1 = FUNC_1(VAR_4, VAR_2);
  VAR_3 = FUNC_0(VAR_3, VAR_4->dn_attr);
  VAR_4->dn_list = VAR_5;
  VAR_1 = &VAR_4->dn_list;
 }

 return (VAR_3);
}
