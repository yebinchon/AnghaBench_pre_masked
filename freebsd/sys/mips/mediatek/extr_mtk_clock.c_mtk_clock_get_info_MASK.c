
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct fdt_clock_info {scalar_t__ flags; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int VAR_4, struct fdt_clock_info *VAR_5)
{
 uint32_t VAR_6;

 if (VAR_4 < 0 || VAR_4 > 31 || VAR_5 == ((void*)0))
  return (VAR_0);

 if (FUNC_0(VAR_2) & VAR_6)
  VAR_5->flags = VAR_1;
 else
  VAR_5->flags = 0;

 return (0);
}
