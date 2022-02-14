
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mach_port_status {int mps_msgcount; } ;
typedef int mach_port_t ;
typedef int mach_port_msgcount_t ;
typedef scalar_t__ error_t ;


 scalar_t__ FUNC_0 (int ,int ,struct mach_port_status*) ;
 int FUNC_1 () ;

__attribute__((used)) static mach_port_msgcount_t
FUNC_2 (mach_port_t VAR_0)
{
  struct mach_port_status VAR_1;
  error_t VAR_2 =
  FUNC_0 (FUNC_1 (), VAR_0, &VAR_1);

  if (VAR_2)
    return 0;
  else
    return VAR_1.mps_msgcount;
}
