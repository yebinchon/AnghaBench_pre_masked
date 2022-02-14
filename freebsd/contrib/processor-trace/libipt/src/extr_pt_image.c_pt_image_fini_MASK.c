
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_image {int name; int sections; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pt_image*,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct pt_image *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0->sections);
 FUNC_0(VAR_0->name);

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
