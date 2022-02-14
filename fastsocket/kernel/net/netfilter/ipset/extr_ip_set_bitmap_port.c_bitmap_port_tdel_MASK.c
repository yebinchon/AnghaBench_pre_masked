
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct ip_set {struct bitmap_port* data; } ;
struct bitmap_port {unsigned long* members; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static int
FUNC_1(struct ip_set *VAR_2, void *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct bitmap_port *VAR_6 = VAR_2->data;
 unsigned long *VAR_7 = VAR_6->members;
 u16 VAR_8 = *(u16 *)VAR_3;
 int VAR_9 = -VAR_1;

 if (FUNC_0(VAR_7[VAR_8]))
  VAR_9 = 0;

 VAR_7[VAR_8] = VAR_0;
 return VAR_9;
}
