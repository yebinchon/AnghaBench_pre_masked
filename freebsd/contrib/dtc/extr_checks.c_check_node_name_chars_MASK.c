
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int fullpath; int * name; } ;
struct dt_info {int dummy; } ;
struct check {int data; } ;


 int FUNC_0 (struct check*,struct dt_info*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct check *VAR_0, struct dt_info *VAR_1,
      struct node *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2->name, VAR_0->data);

 if (VAR_3 < FUNC_1(VAR_2->name))
  FUNC_0(VAR_0, VAR_1, "Bad character '%c' in node %s",
       VAR_2->name[VAR_3], VAR_2->fullpath);
}
