
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct ip_set {struct bitmap_ip* data; } ;
struct bitmap_ip {unsigned long* members; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct ip_set *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bitmap_ip *VAR_6 = VAR_2->data;
 unsigned long *VAR_7 = VAR_6->members;
 u16 VAR_8 = *(u16 *)VAR_3;

 if (FUNC_1(VAR_7[VAR_8]) && !(VAR_5 & VAR_1))
  return -VAR_0;

 VAR_7[VAR_8] = FUNC_0(VAR_4);

 return 0;
}
