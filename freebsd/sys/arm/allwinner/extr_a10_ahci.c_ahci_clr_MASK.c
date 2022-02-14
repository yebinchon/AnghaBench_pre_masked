
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource {int dummy; } ;
typedef int bus_size_t ;


 int FUNC_0 (struct resource*,int ) ;
 int FUNC_1 (struct resource*,int ,int ) ;

__attribute__((used)) static void inline
FUNC_2(struct resource *VAR_0, bus_size_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = FUNC_0(VAR_0, VAR_1);

 VAR_3 &= ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_3);
}
