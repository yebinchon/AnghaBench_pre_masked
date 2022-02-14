
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct node {int dummy; } ;
struct check {int dummy; } ;


 int FUNC_0 (struct check*,char*) ;
 struct node* FUNC_1 (struct node*,char*) ;
 struct property* FUNC_2 (struct node*,char*) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0,
             struct node *VAR_1)
{
 struct node *VAR_2;
 struct property *VAR_3;

 VAR_2 = FUNC_1(VAR_1, "/chosen");
 if (!VAR_2)
  return;

 VAR_3 = FUNC_2(VAR_2, "interrupt-controller");
 if (VAR_3)
  FUNC_0(VAR_0, "/chosen has obsolete \"interrupt-controller\" "
       "property");
}
