
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int nambarh; int nambart; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sc_info*) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_info *VAR_3 = (struct sc_info *)VAR_1;

 VAR_2 &= 0xff;
 FUNC_1(VAR_3);

 return (FUNC_0(VAR_3->nambart, VAR_3->nambarh, VAR_2));
}
