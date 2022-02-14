
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int seq; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct kern_ipc_perm *VAR_1, int VAR_2)
{
 if (VAR_2 / VAR_0 != VAR_1->seq)
  return 1;
 return 0;
}
