
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct inf {int dummy; } ;
typedef int ptid_t ;


 int FUNC_0 (int ) ;
 struct inf* VAR_0 ;
 struct proc* FUNC_1 (struct inf*,int) ;
 char* FUNC_2 (struct proc*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_4 (ptid_t VAR_1)
{
  struct inf *VAR_2 = VAR_0;
  int VAR_3 = FUNC_0 (VAR_1);
  struct proc *VAR_4 = FUNC_1 (VAR_2, VAR_3);

  if (VAR_4)
    return FUNC_2 (VAR_4);
  else
    {
      static char VAR_5[80];
      FUNC_3 (VAR_5, "bogus thread id %d", VAR_3);
      return VAR_5;
    }
}
