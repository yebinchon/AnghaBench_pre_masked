
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* to_stopped_data_address ) () ;} ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (void)
{
  CORE_ADDR VAR_2;

  VAR_2 = VAR_0.to_stopped_data_address ();

  FUNC_0 (VAR_1,
        "target_stopped_data_address () = 0x%lx\n",
        (unsigned long) VAR_2);
  return VAR_2;
}
