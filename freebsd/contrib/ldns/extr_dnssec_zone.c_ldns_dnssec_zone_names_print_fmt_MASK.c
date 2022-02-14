
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ldns_rbtree_t ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_1__ ldns_rbnode_t ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_2__ ldns_output_format ;
typedef int ldns_dnssec_name ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,TYPE_2__ const*,int *,int) ;
 TYPE_1__* FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

void
FUNC_4(FILE *VAR_2, const ldns_output_format *VAR_3,
  const ldns_rbtree_t *VAR_4,
  bool VAR_5)
{
 ldns_rbnode_t *VAR_6;
 ldns_dnssec_name *VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 while (VAR_6 != VAR_1) {
  VAR_7 = (ldns_dnssec_name *) VAR_6->data;
  FUNC_1(VAR_2, VAR_3, VAR_7, VAR_5);
  if ((VAR_3->flags & VAR_0))
   FUNC_0(VAR_2, ";\n");
  VAR_6 = FUNC_3(VAR_6);
 }
}
