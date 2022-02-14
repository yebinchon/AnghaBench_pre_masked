
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ng_mesg {int dummy; } ;
typedef TYPE_2__* sc_p ;
struct TYPE_4__ {int * hook; } ;
struct TYPE_5__ {TYPE_1__ inet; int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ng_mesg*,int ,int ,int ,int ) ;
 int FUNC_1 (int,int ,struct ng_mesg*,int *,int ) ;

__attribute__((used)) static void
FUNC_2(sc_p VAR_2, uint32_t VAR_3)
{
 struct ng_mesg *VAR_4;
 int VAR_5 = 0;

 if (VAR_2->inet.hook == ((void*)0))
  return;

 FUNC_0(VAR_4, VAR_1, VAR_3, 0, VAR_0);
 if (VAR_4 != ((void*)0))
  FUNC_1(VAR_5, VAR_2->node, VAR_4, VAR_2->inet.hook, 0);
}
