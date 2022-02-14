
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {char* cmd; } ;
struct job {int nprocs; struct procstat* ps; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct job *VAR_0)
{
 struct procstat *VAR_1;
 int VAR_2;

 for (VAR_1 = VAR_0->ps, VAR_2 = VAR_0->nprocs ; --VAR_2 >= 0 ; VAR_1++) {
  FUNC_1(VAR_1->cmd);
  if (VAR_2 > 0)
   FUNC_1(" | ");
 }
 FUNC_0('\n');
}
