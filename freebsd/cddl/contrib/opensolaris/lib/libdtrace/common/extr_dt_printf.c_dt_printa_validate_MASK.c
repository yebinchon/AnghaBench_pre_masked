
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int n2 ;
typedef int n1 ;
struct TYPE_9__ {scalar_t__ dn_kind; struct TYPE_9__* dn_list; TYPE_3__* dn_ident; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_10__ {TYPE_1__* dis_args; } ;
typedef TYPE_2__ dt_idsig_t ;
struct TYPE_11__ {int di_name; scalar_t__ di_data; } ;
typedef TYPE_3__ dt_ident_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (int ,char*,int ,int,int ,int,...) ;

void
FUNC_4(dt_node_t *VAR_4, dt_node_t *VAR_5)
{
 dt_ident_t *VAR_6, *VAR_7;
 dt_node_t *VAR_8, *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_1];
 char VAR_14[VAR_1];

 FUNC_0(VAR_4->dn_kind == VAR_0);
 FUNC_0(VAR_5->dn_kind == VAR_0);

 VAR_6 = VAR_4->dn_ident;
 VAR_7 = VAR_5->dn_ident;

 VAR_8 = ((dt_idsig_t *)VAR_6->di_data)->dis_args;
 VAR_9 = ((dt_idsig_t *)VAR_7->di_data)->dis_args;




 for (VAR_10 = 0; VAR_8 != ((void*)0); VAR_8 = VAR_8->dn_list)
  VAR_10++;

 for (VAR_11 = 0; VAR_9 != ((void*)0); VAR_9 = VAR_9->dn_list)
  VAR_11++;

 if (VAR_10 != VAR_11) {
  FUNC_3(VAR_2, "printa( ): @%s and @%s do not have "
      "matching key signatures: @%s has %d key%s, @%s has %d "
      "key%s", VAR_6->di_name, VAR_7->di_name,
      VAR_6->di_name, VAR_10, VAR_10 == 1 ? "" : "s",
      VAR_7->di_name, VAR_11, VAR_11 == 1 ? "" : "s");
 }




 VAR_8 = ((dt_idsig_t *)VAR_6->di_data)->dis_args;
 VAR_9 = ((dt_idsig_t *)VAR_7->di_data)->dis_args;

 for (VAR_12 = 1; VAR_8 != ((void*)0); VAR_12++, VAR_8 = VAR_8->dn_list,
     VAR_9 = VAR_9->dn_list) {
  FUNC_0(VAR_9 != ((void*)0));

  if (FUNC_1(VAR_8, VAR_9))
   continue;

  FUNC_3(VAR_3, "printa( ): @%s[ ] key #%d is "
      "incompatible with @%s:\n%9s key #%d: %s\n"
      "%9s key #%d: %s\n",
      VAR_7->di_name, VAR_12, VAR_6->di_name, VAR_6->di_name, VAR_12,
      FUNC_2(VAR_8, VAR_13, sizeof (VAR_13)), VAR_7->di_name,
      VAR_12, FUNC_2(VAR_9, VAR_14, sizeof (VAR_14)));
 }
}
