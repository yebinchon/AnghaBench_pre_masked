
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookproc {scalar_t__ hp_magic; scalar_t__ hp_pid; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct hookproc* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hookproc*) ;
 int FUNC_4 (struct hookproc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(void)
{
 struct hookproc *VAR_4;

 FUNC_0(VAR_3);

 FUNC_6(&VAR_2);
 while ((VAR_4 = FUNC_1(&VAR_1)) != ((void*)0)) {
  FUNC_0(VAR_4->hp_magic == VAR_0);
  FUNC_0(VAR_4->hp_pid > 0);

  FUNC_4(VAR_4);
  FUNC_3(VAR_4);
 }
 FUNC_7(&VAR_2);

 FUNC_5(&VAR_2);
 FUNC_2(&VAR_1);
 VAR_3 = 0;
}
