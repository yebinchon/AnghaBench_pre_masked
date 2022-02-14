
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_mesg {int dummy; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_3__ {int ftarget; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ng_mesg*,int ,int ,int ,int ) ;
 int FUNC_1 (int,int ,struct ng_mesg*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(priv_p VAR_3)
{
 struct ng_mesg *VAR_4;
 int VAR_5;

 FUNC_0(VAR_4, VAR_2, VAR_1, 0, VAR_0);
 if (VAR_4 == ((void*)0))
  return;
 FUNC_1(VAR_5, VAR_3->node, VAR_4, VAR_3->ftarget, 0);
}
