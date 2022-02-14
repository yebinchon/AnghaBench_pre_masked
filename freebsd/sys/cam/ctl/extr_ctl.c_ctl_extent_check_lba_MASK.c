
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ctl_action ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ctl_action
FUNC_0(uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    bool VAR_6)
{
 uint64_t VAR_7, VAR_8;

 VAR_7 = VAR_2 + VAR_3 - (VAR_6 ? 0 : 1);
 VAR_8 = VAR_4 + VAR_5 - 1;

 if ((VAR_7 < VAR_4) || (VAR_8 < VAR_2))
  return (VAR_1);
 else
  return (VAR_0);
}
