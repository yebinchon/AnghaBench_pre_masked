
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int gs_initialized; int gs_pending; int gs_scheds; int gs_mtx; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (int *,char*,int *,int ) ;

__attribute__((used)) static inline void
FUNC_4(void)
{

 if (!VAR_1.gs_initialized) {
  FUNC_0(0, "Initializing global data.");
  FUNC_3(&VAR_1.gs_mtx, "gsched", ((void*)0), VAR_0);
  FUNC_1(&VAR_1.gs_scheds);
  FUNC_2(&VAR_1.gs_pending);
  VAR_1.gs_initialized = 1;
 }
}
