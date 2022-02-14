
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_image {int name; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (struct pt_image*,int ,int) ;

void FUNC_2(struct pt_image *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->name = FUNC_0(VAR_1);
}
