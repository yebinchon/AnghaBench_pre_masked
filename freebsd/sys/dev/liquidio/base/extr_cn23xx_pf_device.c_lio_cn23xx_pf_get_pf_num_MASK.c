
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int pf_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct octeon_device*,int ) ;

__attribute__((used)) static void
FUNC_1(struct octeon_device *VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_3->pf_num = ((VAR_4 >> VAR_1) &
         VAR_2);
}
