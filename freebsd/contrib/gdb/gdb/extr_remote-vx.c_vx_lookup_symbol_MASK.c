
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolAddr ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_3__ {int status; int addr; } ;
typedef TYPE_1__ SYMBOL_ADDR ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int ,int ,char**,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3 (char *VAR_5,
    CORE_ADDR *VAR_6)
{
  enum clnt_stat VAR_7;
  SYMBOL_ADDR VAR_8;

  *VAR_6 = 0;
  FUNC_1 ((char *) &VAR_8, '\0', sizeof (VAR_8));

  VAR_7 = FUNC_2 (VAR_1, VAR_4, &VAR_5,
     VAR_3, &VAR_8);
  if (VAR_7 != VAR_0)
    {
      FUNC_0 (&VAR_2, "Lost contact with VxWorks target");
      return -1;
    }

  *VAR_6 = VAR_8.addr;
  return VAR_8.status;
}
