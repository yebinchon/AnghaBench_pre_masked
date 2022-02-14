
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dtrace_attribute_t ;
struct TYPE_12__ {int dn_flags; struct TYPE_12__* dn_list; } ;
typedef TYPE_2__ dt_node_t ;
struct TYPE_13__ {int di_flags; int di_attr; TYPE_1__* di_ops; } ;
typedef TYPE_3__ dt_ident_t ;
struct TYPE_11__ {int (* di_cook ) (TYPE_2__*,TYPE_3__*,int,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__**,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int,TYPE_2__*) ;

dtrace_attribute_t
FUNC_3(dt_node_t *VAR_3, dt_ident_t *VAR_4, dt_node_t **VAR_5)
{
 dtrace_attribute_t VAR_6;
 dt_node_t *VAR_7, *VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_5, VAR_0);
 VAR_7 = VAR_5 ? *VAR_5 : ((void*)0);

 for (VAR_8 = VAR_7; VAR_8 != ((void*)0); VAR_8 = VAR_8->dn_list)
  VAR_9++;

 VAR_4->di_ops->di_cook(VAR_3, VAR_4, VAR_9, VAR_7);

 if (VAR_4->di_flags & VAR_1)
  VAR_3->dn_flags |= VAR_2;

 return (FUNC_0(VAR_6, VAR_4->di_attr));
}
