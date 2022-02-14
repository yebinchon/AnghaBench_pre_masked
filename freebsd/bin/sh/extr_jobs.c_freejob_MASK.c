
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {scalar_t__ cmd; } ;
struct job {int nprocs; scalar_t__ ps; scalar_t__ used; struct procstat ps0; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct job* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct job*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct job *VAR_4)
{
 struct procstat *VAR_5;
 int VAR_6;

 VAR_0;
 if (VAR_2 == VAR_4)
  VAR_2 = ((void*)0);
 for (VAR_6 = VAR_4->nprocs, VAR_5 = VAR_4->ps ; --VAR_6 >= 0 ; VAR_5++) {
  if (VAR_5->cmd != VAR_3)
   FUNC_0(VAR_5->cmd);
 }
 if (VAR_4->ps != &VAR_4->ps0)
  FUNC_0(VAR_4->ps);
 VAR_4->used = 0;



 VAR_1;
}
