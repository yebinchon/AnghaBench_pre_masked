
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookproc {scalar_t__ hp_magic; scalar_t__ hp_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hookproc*) ;

__attribute__((used)) static void
FUNC_2(struct hookproc *VAR_1)
{

 FUNC_0(VAR_1->hp_magic == VAR_0);
 FUNC_0(VAR_1->hp_pid > 0);

 VAR_1->hp_magic = 0;
 FUNC_1(VAR_1);
}
