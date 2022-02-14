
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int * name; } ;
struct node {int fullpath; } ;
struct check {int data; } ;


 int FUNC_0 (struct check*,char*,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0, struct node *VAR_1,
          struct node *VAR_2, struct property *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_3->name, VAR_0->data);

 if (VAR_4 < FUNC_1(VAR_3->name))
  FUNC_0(VAR_0, "Bad character '%c' in property name \"%s\", node %s",
       VAR_3->name[VAR_4], VAR_3->name, VAR_2->fullpath);
}
