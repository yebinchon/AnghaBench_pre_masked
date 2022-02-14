
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int balance; struct TYPE_3__* rlink; struct TYPE_3__* llink; } ;
typedef TYPE_1__ posix_tnode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline unsigned int
FUNC_2(const posix_tnode *VAR_0)
{
 unsigned int VAR_1, VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return 0;
 VAR_1 = FUNC_2(VAR_0->llink);
 VAR_2 = FUNC_2(VAR_0->rlink);
 VAR_3 = (int)VAR_1 - (int)VAR_2;
 FUNC_0(VAR_3 >= -1);
 FUNC_0(VAR_3 <= 1);
 FUNC_1(VAR_3, VAR_0->balance);
 return (VAR_1 > VAR_2 ? VAR_1 : VAR_2) + 1;
}
