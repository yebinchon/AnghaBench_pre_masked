
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_info {int nambarh; int nambart; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct sc_info*) ;

__attribute__((used)) static int
FUNC_2(kobj_t VAR_0, void *VAR_1, int VAR_2, uint32_t VAR_3)
{
 struct sc_info *VAR_4 = (struct sc_info *)VAR_1;

 VAR_2 &= 0xff;
 FUNC_1(VAR_4);
 FUNC_0(VAR_4->nambart, VAR_4->nambarh, VAR_2, VAR_3);

 return (0);
}
