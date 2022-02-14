
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct via_info*,int ,int) ;
 scalar_t__ FUNC_2 (struct via_info*) ;
 scalar_t__ FUNC_3 (struct via_info*) ;
 int FUNC_4 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_5(kobj_t VAR_3, void *VAR_4, int VAR_5)
{
 struct via_info *VAR_6 = VAR_4;

 if (FUNC_2(VAR_6))
  return (-1);

 FUNC_4(VAR_6, VAR_1, VAR_0 |
     VAR_2 | FUNC_0(VAR_5), 4);

 if (FUNC_2(VAR_6))
  return (-1);

 if (FUNC_3(VAR_6))
  return (-1);

 return (FUNC_1(VAR_6, VAR_1, 2));
}
