
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_v3_devinfo {int gic_domain; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gic_v3_devinfo* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int *VAR_3)
{
 struct gic_v3_devinfo *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4->gic_domain < 0)
  return (VAR_0);

 *VAR_3 = VAR_4->gic_domain;
 return (0);
}
