
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int name; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(const void* VAR_0, const void* VAR_1)
{
 struct view* VAR_2 = (struct view*)VAR_0;
 struct view* VAR_3 = (struct view*)VAR_1;

 return FUNC_0(VAR_2->name, VAR_3->name);
}
