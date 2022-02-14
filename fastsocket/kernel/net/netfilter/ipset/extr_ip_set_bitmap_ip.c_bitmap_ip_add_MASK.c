
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ip_set {struct bitmap_ip* data; } ;
struct bitmap_ip {int members; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct ip_set *VAR_1, void *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct bitmap_ip *VAR_5 = VAR_1->data;
 u16 VAR_6 = *(u16 *)VAR_2;

 if (FUNC_0(VAR_6, VAR_5->members))
  return -VAR_0;

 return 0;
}
