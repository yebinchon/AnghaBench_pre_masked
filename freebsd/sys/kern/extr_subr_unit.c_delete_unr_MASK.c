
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unrhdr {int ppfree; int alloc; } ;
struct unr {int dummy; } ;


 int FUNC_0 (int *,struct unr*,int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_1(struct unrhdr *VAR_1, void *VAR_2)
{
 struct unr *VAR_3;

 VAR_1->alloc--;
 VAR_3 = VAR_2;
 FUNC_0(&VAR_1->ppfree, VAR_3, VAR_0);
}
