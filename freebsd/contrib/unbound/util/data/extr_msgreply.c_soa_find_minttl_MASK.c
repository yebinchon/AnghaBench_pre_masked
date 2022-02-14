
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int time_t ;
struct rr_parse {scalar_t__ ttl_data; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static time_t
FUNC_2(struct rr_parse* VAR_0)
{
 uint16_t VAR_1 = FUNC_0(VAR_0->ttl_data+4);
 if(VAR_1 < 20)
  return 0;


 return (time_t)FUNC_1(VAR_0->ttl_data+6+VAR_1-4);
}
