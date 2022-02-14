
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_10__ {int subs; } ;
struct TYPE_9__ {scalar_t__ index; char** subtypes; int subs; void* func; } ;
struct TYPE_8__ {char* subtype; scalar_t__ syntax; } ;
struct TYPE_7__ {char* subtype; scalar_t__ syntax; void* func; } ;
struct TYPE_11__ {TYPE_4__ tree; TYPE_3__ entry; TYPE_2__ column; TYPE_1__ leaf; } ;
struct node {scalar_t__ flags; TYPE_5__ u; int type; void* name; scalar_t__ id; int lno; } ;
typedef enum tok { ____Placeholder_tok } tok ;
typedef scalar_t__ asn_subid_t ;
struct TYPE_12__ {int lno; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct node*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 TYPE_6__* VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int*,int *,void*,char**) ;
 int FUNC_4 (char*,...) ;
 void* FUNC_5 () ;
 scalar_t__ VAR_16 ;
 struct node* FUNC_6 (int) ;

__attribute__((used)) static struct node *
FUNC_7(enum tok VAR_17)
{
 struct node *VAR_18;
 struct node *VAR_19;
 u_int VAR_20;

 VAR_18 = FUNC_6(sizeof(struct node));
 VAR_18->lno = VAR_14->lno;
 VAR_18->flags = 0;

 if (VAR_17 != '(')
  FUNC_4("'(' expected at begin of node");
 if (FUNC_2() != VAR_11)
  FUNC_4("node id expected after opening '('");
 if (VAR_16 > VAR_0)
  FUNC_4("subid too large '%lu'", VAR_16);
 VAR_18->id = (asn_subid_t)VAR_16;
 if (FUNC_2() != VAR_12)
  FUNC_4("node name expected after '(' ID");
 VAR_18->name = FUNC_5();

 if ((VAR_17 = FUNC_2()) == VAR_13 || VAR_17 == VAR_9 ||
     VAR_17 == VAR_10 || VAR_17 == VAR_8) {

  char *VAR_21;
  u_int VAR_22 = FUNC_3(&VAR_17, ((void*)0), VAR_18->name, &VAR_21);

  if (VAR_17 == VAR_12) {

   VAR_18->type = VAR_3;
   VAR_18->u.leaf.func = FUNC_5();
   VAR_18->u.leaf.syntax = VAR_22;
   VAR_18->u.leaf.subtype = VAR_21;
   VAR_17 = FUNC_2();
  } else {

   VAR_18->type = VAR_1;
   VAR_18->u.column.syntax = VAR_22;
   VAR_18->u.column.subtype = VAR_21;
  }

  while (VAR_17 != ')') {
   if (VAR_17 != VAR_7)
    FUNC_4("access keyword or ')' expected");
   VAR_18->flags |= (u_int)VAR_16;
   VAR_17 = FUNC_2();
  }

 } else if (VAR_17 == ':') {

  VAR_18->type = VAR_2;
  FUNC_0(&VAR_18->u.entry.subs);

  VAR_20 = 0;
  VAR_18->u.entry.index = 0;
  VAR_17 = FUNC_2();
  while (VAR_17 == VAR_13 || VAR_17 == VAR_9 ||
      VAR_17 == VAR_10 || VAR_17 == VAR_8) {
   char *VAR_23;
   u_int VAR_24 = FUNC_3(&VAR_17, ((void*)0), VAR_18->name,
       &VAR_23);
   if (VAR_20 == VAR_5)
    FUNC_4("too many table indexes");
   VAR_18->u.entry.subtypes[VAR_20++] = VAR_23;
   VAR_18->u.entry.index |=
       VAR_24 << (VAR_6 * VAR_20);
  }
  VAR_18->u.entry.index |= VAR_20;
  if (VAR_20 == 0)
   FUNC_4("need at least one index");
  if (VAR_17 != VAR_12)
   FUNC_4("function name expected");

  VAR_18->u.entry.func = FUNC_5();

  VAR_17 = FUNC_2();

  while (VAR_17 != ')') {
   VAR_19 = FUNC_7(VAR_17);
   FUNC_1(&VAR_18->u.entry.subs, VAR_19, VAR_15);
   VAR_17 = FUNC_2();
  }

 } else {

  VAR_18->type = VAR_4;
  FUNC_0(&VAR_18->u.tree.subs);

  while (VAR_17 != ')') {
   VAR_19 = FUNC_7(VAR_17);
   FUNC_1(&VAR_18->u.tree.subs, VAR_19, VAR_15);
   VAR_17 = FUNC_2();
  }
 }
 return (VAR_18);
}
