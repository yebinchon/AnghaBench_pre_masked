
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct ip_set {struct bitmap_port* data; } ;
struct bitmap_port {unsigned long* members; } ;


 int FUNC_0 (unsigned long const) ;

__attribute__((used)) static int
FUNC_1(struct ip_set *VAR_0, void *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const struct bitmap_port *VAR_4 = VAR_0->data;
 const unsigned long *VAR_5 = VAR_4->members;
 u16 VAR_6 = *(u16 *)VAR_1;

 return FUNC_0(VAR_5[VAR_6]);
}
