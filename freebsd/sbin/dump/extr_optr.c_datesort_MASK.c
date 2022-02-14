
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dumpdates {int dd_ddate; int dd_name; } ;


 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 struct dumpdates *VAR_2 = *(struct dumpdates **)VAR_0;
 struct dumpdates *VAR_3 = *(struct dumpdates **)VAR_1;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->dd_name, VAR_3->dd_name, sizeof(VAR_2->dd_name));
 if (VAR_4 == 0)
  return (VAR_3->dd_ddate - VAR_2->dd_ddate);
 return (VAR_4);
}
