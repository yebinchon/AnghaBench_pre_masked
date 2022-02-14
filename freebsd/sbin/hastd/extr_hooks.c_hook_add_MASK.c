
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hookproc {scalar_t__ hp_magic; scalar_t__ hp_pid; } ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct hookproc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct hookproc *VAR_5, pid_t VAR_6)
{

 FUNC_0(VAR_5->hp_magic == VAR_0);
 FUNC_0(VAR_5->hp_pid == 0);

 VAR_5->hp_pid = VAR_6;
 FUNC_2(&VAR_3);
 VAR_5->hp_magic = VAR_1;
 FUNC_1(&VAR_2, VAR_5, VAR_4);
 FUNC_3(&VAR_3);
}
