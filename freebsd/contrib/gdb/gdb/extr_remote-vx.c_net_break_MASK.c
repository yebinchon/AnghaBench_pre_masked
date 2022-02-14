
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int ptrace_in ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_3__ {int addr; int pid; } ;
typedef TYPE_1__ Rptrace ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3 (int VAR_6, u_long VAR_7)
{
  enum clnt_stat VAR_8;
  int VAR_9;
  Rptrace VAR_10;


  FUNC_1 ((char *) &VAR_10, '\0', sizeof (VAR_10));
  VAR_9 = 0;

  VAR_10.addr = VAR_6;
  VAR_10.pid = FUNC_0 (VAR_3);

  VAR_8 = FUNC_2 (VAR_7, VAR_5, &VAR_10, VAR_4,
     &VAR_9);

  if (VAR_8 != VAR_1)
    return VAR_2;

  if (VAR_9 == -1)
    return VAR_0;
  return VAR_9;
}
