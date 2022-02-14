
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rmplen; int rmp; } ;
typedef TYPE_1__ RMPCONN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ) ;

int
FUNC_3(RMPCONN *VAR_2)
{
 if (FUNC_2(VAR_0, (char *)&VAR_2->rmp, VAR_2->rmplen) < 0) {
  FUNC_1(VAR_1, "write: %s: %m", FUNC_0(VAR_2));
  return(0);
 }

 return(1);
}
