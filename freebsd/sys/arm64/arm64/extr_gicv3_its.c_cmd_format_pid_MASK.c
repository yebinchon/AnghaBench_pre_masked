
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct its_cmd {int * cmd_dword; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct its_cmd *VAR_2, uint32_t VAR_3)
{

 VAR_2->cmd_dword[1] &= FUNC_0(~VAR_0);
 VAR_2->cmd_dword[1] |= FUNC_0((uint64_t)VAR_3 << VAR_1);
}
