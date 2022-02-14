
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int dummy; } ;
struct lio_config {int dummy; } ;


 scalar_t__ FUNC_0 (struct octeon_device*,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*) ;
 int VAR_0 ;

struct lio_config *
FUNC_2(struct octeon_device *VAR_1)
{
 struct lio_config *VAR_2 = ((void*)0);





 if (FUNC_1(VAR_1)) {
  VAR_2 = (struct lio_config *)(
            FUNC_0(VAR_1, VAR_0));
 }

 return (VAR_2);
}
