
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 struct node* FUNC_0 (struct node*,char*) ;
 int FUNC_1 (char*,char*) ;
 struct node* FUNC_2 (struct node*,char*) ;

__attribute__((used)) static struct node *FUNC_3(struct node *VAR_0, char *VAR_1)
{
 struct node *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (!VAR_2)
  FUNC_1("Could not build root node /%s\n", VAR_1);

 return VAR_2;
}
