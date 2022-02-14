
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct session {scalar_t__ cmd; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct session*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct session*) ;
 int FUNC_2 (struct session*) ;
 char* VAR_4 ;
 int VAR_5 ;

int
FUNC_3(struct session *VAR_6)
{

 VAR_6->cmd = VAR_1;
 VAR_6->port = 0;


 if (VAR_5 < 4)
  return (1);

 if (VAR_4[0] == 'P' || VAR_4[0] == 'p' ||
     VAR_4[0] == 'E' || VAR_4[0] == 'e') {
  if (!FUNC_2(VAR_6))
   return (0);







  if (VAR_6->cmd == VAR_2 || VAR_6->cmd == VAR_0)
   return (FUNC_0(VAR_6));
 }

 if (VAR_3 && (VAR_4[0] == 'U' || VAR_4[0] == 'u'))
  return (FUNC_1(VAR_6));

 return (1);
}
