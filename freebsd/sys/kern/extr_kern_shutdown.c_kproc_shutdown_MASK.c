
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {char* p_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(void *VAR_4, int VAR_5)
{
 struct proc *VAR_6;
 int VAR_7;

 if (VAR_3)
  return;

 VAR_6 = (struct proc *)VAR_4;
 FUNC_1("Waiting (max %d seconds) for system process `%s' to stop... ",
     VAR_2, VAR_6->p_comm);
 VAR_7 = FUNC_0(VAR_6, VAR_2 * VAR_1);

 if (VAR_7 == VAR_0)
  FUNC_1("timed out\n");
 else
  FUNC_1("done\n");
}
