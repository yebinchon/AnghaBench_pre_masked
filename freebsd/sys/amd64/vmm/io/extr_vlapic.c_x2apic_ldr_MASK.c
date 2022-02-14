
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int dummy; } ;


 int FUNC_0 (struct vlapic*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vlapic *VAR_0)
{
 int VAR_1;
 uint32_t VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = 1 << (VAR_1 & 0xf);
 VAR_2 |= (VAR_1 & 0xffff0) << 12;
 return (VAR_2);
}
