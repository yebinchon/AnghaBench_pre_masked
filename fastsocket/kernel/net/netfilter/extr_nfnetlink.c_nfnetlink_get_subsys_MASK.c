
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
typedef int u_int16_t ;
struct nfnetlink_subsystem {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 struct nfnetlink_subsystem const** VAR_1 ;

__attribute__((used)) static inline const struct nfnetlink_subsystem *FUNC_1(u_int16_t VAR_2)
{
 u_int8_t VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 >= VAR_0)
  return ((void*)0);

 return VAR_1[VAR_3];
}
