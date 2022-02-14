
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct dt_info {int dummy; } ;


 int VAR_0 ;
 struct dt_info* FUNC_0 (int ,int *,struct node*,int ) ;
 int FUNC_1 (struct node*) ;
 struct node* FUNC_2 (struct node*,char*) ;
 struct node* FUNC_3 (char const*) ;

struct dt_info *FUNC_4(const char *VAR_1)
{
 struct node *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 VAR_2 = FUNC_2(VAR_2, "");

 return FUNC_0(VAR_0, ((void*)0), VAR_2, FUNC_1(VAR_2));
}
