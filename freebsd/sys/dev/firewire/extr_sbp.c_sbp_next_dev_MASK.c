
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbp_target {int num_lun; struct sbp_dev** luns; } ;
struct sbp_dev {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static struct sbp_dev *
FUNC_0(struct sbp_target *VAR_1, int VAR_2)
{
 struct sbp_dev **VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_2, VAR_3 = &VAR_1->luns[VAR_2]; VAR_4 < VAR_1->num_lun;
     VAR_4++, VAR_3++)
  if (*VAR_3 != ((void*)0) && (*VAR_3)->status == VAR_0)
   return (*VAR_3);
 return (((void*)0));
}
