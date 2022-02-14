
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vcpu_set_singleshot_timer {scalar_t__ flags; int timeout_abs_ns; } ;


 int FUNC_0 (int ,int,struct vcpu_set_singleshot_timer*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1, uint64_t VAR_2)
{
 struct vcpu_set_singleshot_timer VAR_3;

 VAR_3.timeout_abs_ns = VAR_2;

 VAR_3.flags = 0;
 return (FUNC_0(VAR_0, VAR_1, &VAR_3));
}
