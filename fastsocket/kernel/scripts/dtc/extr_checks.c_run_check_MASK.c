
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct check {int inprogress; scalar_t__ status; int num_prereqs; scalar_t__ level; int (* tree_fn ) (struct check*,struct node*) ;scalar_t__ prop_fn; scalar_t__ node_fn; int name; struct check** prereq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct check*,char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct check*,char*,int ) ;
 int FUNC_3 (struct check*,struct node*,struct node*) ;
 int FUNC_4 (struct check*,struct node*) ;

__attribute__((used)) static int FUNC_5(struct check *VAR_4, struct node *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;

 FUNC_1(!VAR_4->inprogress);

 if (VAR_4->status != VAR_3)
  goto out;

 VAR_4->inprogress = 1;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_prereqs; VAR_7++) {
  struct check *VAR_8 = VAR_4->prereq[VAR_7];
  VAR_6 |= FUNC_5(VAR_8, VAR_5);
  if (VAR_8->status != VAR_1) {
   VAR_4->status = VAR_2;
   FUNC_2(VAR_4, "Failed prerequisite '%s'",
      VAR_4->prereq[VAR_7]->name);
  }
 }

 if (VAR_4->status != VAR_3)
  goto out;

 if (VAR_4->node_fn || VAR_4->prop_fn)
  FUNC_3(VAR_4, VAR_5, VAR_5);

 if (VAR_4->tree_fn)
  VAR_4->tree_fn(VAR_4, VAR_5);
 if (VAR_4->status == VAR_3)
  VAR_4->status = VAR_1;

 FUNC_0(VAR_4, "\tCompleted, status %d", VAR_4->status);

out:
 VAR_4->inprogress = 0;
 if ((VAR_4->status != VAR_1) && (VAR_4->level == VAR_0))
  VAR_6 = 1;
 return VAR_6;
}
