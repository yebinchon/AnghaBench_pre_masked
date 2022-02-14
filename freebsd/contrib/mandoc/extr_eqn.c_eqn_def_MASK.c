
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eqn_node {scalar_t__ toksz; int start; TYPE_1__* node; struct eqn_def* defs; scalar_t__ defsz; } ;
struct eqn_def {scalar_t__ keysz; scalar_t__ valsz; int * val; int * key; } ;
struct TYPE_2__ {int pos; int line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct eqn_def* FUNC_0 (struct eqn_node*) ;
 scalar_t__ FUNC_1 (struct eqn_node*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;
 struct eqn_def* FUNC_4 (struct eqn_def*,scalar_t__,int) ;
 void* FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct eqn_node *VAR_4)
{
 struct eqn_def *VAR_5;
 int VAR_6;

 if (FUNC_1(VAR_4, VAR_2) == VAR_0) {
  FUNC_3(VAR_1,
      VAR_4->node->line, VAR_4->node->pos, "define");
  return;
 }





 if ((VAR_5 = FUNC_0(VAR_4)) == ((void*)0)) {

  for (VAR_6 = 0; VAR_6 < (int)VAR_4->defsz; VAR_6++)
   if (0 == VAR_4->defs[VAR_6].keysz)
    break;

  if (VAR_6 == (int)VAR_4->defsz) {
   VAR_4->defsz++;
   VAR_4->defs = FUNC_4(VAR_4->defs,
       VAR_4->defsz, sizeof(struct eqn_def));
   VAR_4->defs[VAR_6].key = VAR_4->defs[VAR_6].val = ((void*)0);
  }

  VAR_5 = VAR_4->defs + VAR_6;
  FUNC_2(VAR_5->key);
  VAR_5->key = FUNC_5(VAR_4->start, VAR_4->toksz);
  VAR_5->keysz = VAR_4->toksz;
 }

 if (FUNC_1(VAR_4, VAR_3) == VAR_0) {
  FUNC_3(VAR_1,
      VAR_4->node->line, VAR_4->node->pos, "define %s", VAR_5->key);
  FUNC_2(VAR_5->key);
  FUNC_2(VAR_5->val);
  VAR_5->key = VAR_5->val = ((void*)0);
  VAR_5->keysz = VAR_5->valsz = 0;
  return;
 }
 FUNC_2(VAR_5->val);
 VAR_5->val = FUNC_5(VAR_4->start, VAR_4->toksz);
 VAR_5->valsz = VAR_4->toksz;
}
