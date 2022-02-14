
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct netisr_proto {scalar_t__ np_dispatch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(struct netisr_proto *VAR_2)
{




 if (VAR_2->np_dispatch != VAR_0)
  return (VAR_2->np_dispatch);
 return (VAR_1);
}
