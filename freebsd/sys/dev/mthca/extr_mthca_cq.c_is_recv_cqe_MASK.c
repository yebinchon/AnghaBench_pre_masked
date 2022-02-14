
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_cqe {int opcode; int is_send; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mthca_cqe *VAR_1)
{
 if ((VAR_1->opcode & VAR_0) ==
     VAR_0)
  return !(VAR_1->opcode & 0x01);
 else
  return !(VAR_1->is_send & 0x80);
}
