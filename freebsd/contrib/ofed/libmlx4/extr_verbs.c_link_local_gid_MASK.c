
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ibv_gid {scalar_t__ raw; } ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const union ibv_gid *VAR_0)
{
 uint32_t *VAR_1 = (uint32_t *)VAR_0->raw;
 uint32_t VAR_2 = VAR_1[0];
 uint32_t VAR_3 = VAR_1[1];

 if (VAR_2 == FUNC_0(0xfe800000) && VAR_3 == 0)
  return 1;

 return 0;
}
