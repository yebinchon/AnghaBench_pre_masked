
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct check {scalar_t__ level; } ;
struct boot_info {struct node* dt; } ;


 int FUNC_0 (struct check**) ;
 scalar_t__ VAR_0 ;
 struct check** VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct check*,struct node*) ;
 int VAR_3 ;

void FUNC_4(int VAR_4, struct boot_info *VAR_5)
{
 struct node *VAR_6 = VAR_5->dt;
 int VAR_7;
 int VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  struct check *VAR_9 = VAR_1[VAR_7];

  if (VAR_9->level != VAR_0)
   VAR_8 = VAR_8 || FUNC_3(VAR_9, VAR_6);
 }

 if (VAR_8) {
  if (!VAR_4) {
   FUNC_2(VAR_3, "ERROR: Input tree has errors, aborting "
    "(use -f to force output)\n");
   FUNC_1(2);
  } else if (VAR_2 < 3) {
   FUNC_2(VAR_3, "Warning: Input tree has errors, "
    "output forced\n");
  }
 }
}
