
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {scalar_t__ cmd; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct session*) ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

int
FUNC_2(struct session *VAR_5)
{
 if (VAR_5->cmd == VAR_1 || VAR_4 < 4 || VAR_3[0] != '2')
  goto out;

 if ((VAR_5->cmd == VAR_2 && FUNC_1("227 ", VAR_3, 4) == 0) ||
     (VAR_5->cmd == VAR_0 && FUNC_1("229 ", VAR_3, 4) == 0))
  return (FUNC_0(VAR_5));

 out:
 VAR_5->cmd = VAR_1;
 VAR_5->port = 0;

 return (1);
}
