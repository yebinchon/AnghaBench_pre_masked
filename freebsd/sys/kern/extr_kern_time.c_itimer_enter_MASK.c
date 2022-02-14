
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itimer {int it_usecount; int it_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct itimer *VAR_1)
{

 FUNC_0(&VAR_1->it_mtx, VAR_0);
 VAR_1->it_usecount++;
}
