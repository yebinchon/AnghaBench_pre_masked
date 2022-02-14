
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_5__ {int flags; scalar_t__ liv_per_full; int liv_rate; int handle; int livs; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int *,int,void (*) (int ,int ,void*,int),int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(node_p VAR_3, hook_p VAR_4, void *VAR_5, int VAR_6)
{
 sc_p VAR_7 = FUNC_0(VAR_3);

 if (VAR_7->flags & VAR_1) {
  FUNC_2(VAR_7);
  FUNC_1(&VAR_7->handle, VAR_3, ((void*)0), VAR_0 * VAR_2,
      FUNC_4, ((void*)0), 0);
 } else {
  if (VAR_7->livs++ >= VAR_7->liv_per_full) {
   FUNC_3(VAR_7, 1);

  } else {
   FUNC_3(VAR_7, 0);
  }
  FUNC_1(&VAR_7->handle, VAR_3, ((void*)0), VAR_7->liv_rate * VAR_2,
      FUNC_4, ((void*)0), 0);
 }
}
