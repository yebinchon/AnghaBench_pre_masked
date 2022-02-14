
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int bootfd; int * next; } ;
typedef TYPE_1__ RMPCONN ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int ,char*,int ) ;

RMPCONN *
FUNC_4(RMPCONN *VAR_2)
{
 RMPCONN *VAR_3;

 if (VAR_1 == ((void*)0)) {
  if ((VAR_3 = (RMPCONN *) FUNC_1(sizeof(RMPCONN))) == ((void*)0)) {
   FUNC_3(VAR_0, "NewConn: out of memory (%s)",
          FUNC_0(VAR_2));
   return(((void*)0));
  }
 } else {
  VAR_3 = VAR_1;
  VAR_1 = ((void*)0);
 }





 FUNC_2((char *)VAR_3, (char *)VAR_2, sizeof(RMPCONN));
 VAR_3->bootfd = -1;
 VAR_3->next = ((void*)0);

 return(VAR_3);
}
