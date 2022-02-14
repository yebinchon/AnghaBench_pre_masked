
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_4__ {scalar_t__ status; } ;
typedef TYPE_1__ RDB_EVENT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int ,int ,int*,int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3 (RDB_EVENT *VAR_6)
{
  int VAR_7;
  enum clnt_stat VAR_8;

  FUNC_1 ((char *) VAR_6, '\0', sizeof (RDB_EVENT));

  VAR_7 = FUNC_0 (VAR_3);
  VAR_8 = FUNC_2 (VAR_0, VAR_5, &VAR_7, VAR_4,
     VAR_6);


  if (VAR_8 == VAR_1)
    return ((VAR_6->status) ? 1 : 0);
  else if (VAR_8 == VAR_2)
    return (1);
  else
    return (-1);
}
