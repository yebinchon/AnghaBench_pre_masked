
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int dummy; } ;
struct dt_info {struct node* dt; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,struct dt_info*,char*) ;
 struct node* FUNC_1 (struct node*,char*) ;
 struct property* FUNC_2 (struct node*,char*) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0,
             struct dt_info *VAR_1,
             struct node *VAR_2)
{
 struct node *VAR_3 = VAR_1->dt;
 struct node *VAR_4;
 struct property *VAR_5;

 if (VAR_2 != VAR_3)
  return;


 VAR_4 = FUNC_1(VAR_3, "/chosen");
 if (!VAR_4)
  return;

 VAR_5 = FUNC_2(VAR_4, "interrupt-controller");
 if (VAR_5)
  FUNC_0(VAR_0, VAR_1, "/chosen has obsolete \"interrupt-controller\" "
       "property");
}
