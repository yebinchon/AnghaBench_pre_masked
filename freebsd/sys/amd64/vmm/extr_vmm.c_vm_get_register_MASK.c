
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm {int maxcpus; int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int *) ;
 int VAR_1 ;

int
FUNC_1(struct vm *VAR_2, int VAR_3, int VAR_4, uint64_t *VAR_5)
{

 if (VAR_3 < 0 || VAR_3 >= VAR_2->maxcpus)
  return (VAR_0);

 if (VAR_4 >= VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_2->cookie, VAR_3, VAR_4, VAR_5));
}
