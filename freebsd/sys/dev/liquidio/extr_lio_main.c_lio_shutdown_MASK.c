
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ifp; } ;
struct octeon_device {TYPE_1__ props; } ;
struct lio {int dummy; } ;
typedef int device_t ;


 struct octeon_device* FUNC_0 (int ) ;
 struct lio* FUNC_1 (int ) ;
 int FUNC_2 (struct lio*,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct octeon_device *VAR_1 = FUNC_0(VAR_0);
 struct lio *VAR_2 = FUNC_1(VAR_1->props.ifp);

 FUNC_2(VAR_2, 0);

 return (0);
}
