
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target {int num_lun; struct sbp_dev** luns; int sbp; } ;
struct sbp_dev {scalar_t__ status; int freeze; int path; struct sbp_target* target; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sbp_dev*,int ) ;
 int FUNC_3 (struct sbp_dev*,int ,int *) ;
 int FUNC_4 (struct sbp_dev*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void
FUNC_6(struct sbp_dev *VAR_5, int VAR_6)
{
 int VAR_7;
 struct sbp_target *VAR_8 = VAR_5->target;
 struct sbp_dev *VAR_9;

 FUNC_0(VAR_8->sbp);
 for (VAR_7 = 0; VAR_7 < VAR_8->num_lun; VAR_7++) {
  VAR_9 = VAR_8->luns[VAR_7];
  if (VAR_9 == ((void*)0))
   continue;
  if (VAR_9->status == VAR_2)
   continue;
  if (VAR_9->status == VAR_4)
   continue;
  FUNC_5(VAR_9->path, 1);
  VAR_9->freeze++;
  FUNC_2(VAR_9, VAR_0);
  if (VAR_6 == 2)
   VAR_9->status = VAR_3;
 }
 switch (VAR_6) {
 case 1:
  FUNC_1("target reset\n");
  FUNC_3(VAR_5, VAR_1, ((void*)0));
  break;
 case 2:
  FUNC_1("reset start\n");
  FUNC_4(VAR_5);
  break;
 }

}
