
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct dt_info {struct node* dt; } ;
struct check {int inprogress; scalar_t__ status; int num_prereqs; scalar_t__ error; int name; struct check** prereq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct check*,char*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct check*,struct dt_info*,char*,int ) ;
 int FUNC_3 (struct check*,struct dt_info*,struct node*) ;

__attribute__((used)) static bool FUNC_4(struct check *VAR_3, struct dt_info *VAR_4)
{
 struct node *VAR_5 = VAR_4->dt;
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_1(!VAR_3->inprogress);

 if (VAR_3->status != VAR_2)
  goto out;

 VAR_3->inprogress = 1;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_prereqs; VAR_7++) {
  struct check *VAR_8 = VAR_3->prereq[VAR_7];
  VAR_6 = VAR_6 || FUNC_4(VAR_8, VAR_4);
  if (VAR_8->status != VAR_0) {
   VAR_3->status = VAR_1;
   FUNC_2(VAR_3, VAR_4, "Failed prerequisite '%s'",
      VAR_3->prereq[VAR_7]->name);
  }
 }

 if (VAR_3->status != VAR_2)
  goto out;

 FUNC_3(VAR_3, VAR_4, VAR_5);

 if (VAR_3->status == VAR_2)
  VAR_3->status = VAR_0;

 FUNC_0(VAR_3, "\tCompleted, status %d", VAR_3->status);

out:
 VAR_3->inprogress = 0;
 if ((VAR_3->status != VAR_0) && (VAR_3->error))
  VAR_6 = 1;
 return VAR_6;
}
