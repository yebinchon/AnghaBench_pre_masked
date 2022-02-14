
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
struct boot_info {int dummy; } ;


 struct boot_info* FUNC_0 (int *,struct node*,int ) ;
 struct node* FUNC_1 (struct node*,char*,int *) ;
 struct node* FUNC_2 (char const*) ;

struct boot_info *FUNC_3(const char *VAR_0)
{
 struct node *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 VAR_1 = FUNC_1(VAR_1, "", ((void*)0));

 return FUNC_0(((void*)0), VAR_1, 0);
}
