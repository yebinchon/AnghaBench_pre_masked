
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sd; int ref; } ;
typedef TYPE_1__ conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ,int*,int) ;

conn_t *
FUNC_3(int VAR_4)
{
 conn_t *VAR_5;
 int VAR_6 = 1;


 if ((VAR_5 = FUNC_0(1, sizeof(*VAR_5))) == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_4, VAR_1, VAR_0);
 FUNC_2(VAR_4, VAR_2, VAR_3, &VAR_6, sizeof VAR_6);
 VAR_5->sd = VAR_4;
 ++VAR_5->ref;
 return (VAR_5);
}
