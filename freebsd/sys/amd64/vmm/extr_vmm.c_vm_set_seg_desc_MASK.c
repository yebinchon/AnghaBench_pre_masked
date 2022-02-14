
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int maxcpus; int cookie; } ;
struct seg_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,struct seg_desc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int
FUNC_3(struct vm *VAR_1, int VAR_2, int VAR_3,
  struct seg_desc *VAR_4)
{
 if (VAR_2 < 0 || VAR_2 >= VAR_1->maxcpus)
  return (VAR_0);

 if (!FUNC_2(VAR_3) && !FUNC_1(VAR_3))
  return (VAR_0);

 return (FUNC_0(VAR_1->cookie, VAR_2, VAR_3, VAR_4));
}
