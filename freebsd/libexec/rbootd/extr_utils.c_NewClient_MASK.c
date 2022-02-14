
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_4__ {int * addr; } ;
typedef TYPE_1__ CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;

CLIENT *
FUNC_5(u_int8_t *VAR_2)
{
 CLIENT *VAR_3;

 if ((VAR_3 = (CLIENT *) FUNC_1(sizeof(CLIENT))) == ((void*)0)) {
  FUNC_4(VAR_0, "NewClient: out of memory (%s)",
         FUNC_0(VAR_2));
  return(((void*)0));
 }

 FUNC_3(VAR_3, 0, sizeof(CLIENT));
 FUNC_2(&VAR_3->addr[0], VAR_2, VAR_1);
 return(VAR_3);
}
