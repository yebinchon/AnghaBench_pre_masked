
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct octeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (struct octeon_device*,int ) ;

int
FUNC_2(struct octeon_device *VAR_2)
{
 uint64_t VAR_3 = 0;
 uint64_t VAR_4;


 if (FUNC_0(VAR_2)) {
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  VAR_3 =
      (VAR_4 & VAR_1);
 }

 return (VAR_3 ? 0 : 1);
}
