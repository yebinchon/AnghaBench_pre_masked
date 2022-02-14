
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct its_cmd {int * cmd_dword; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static __inline void
FUNC_1(struct its_cmd *VAR_1, uint16_t VAR_2)
{

 VAR_1->cmd_dword[1] &= FUNC_0(~VAR_0);
 VAR_1->cmd_dword[1] |= FUNC_0((VAR_2 & VAR_0));
}
