
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_queue_update_params {int update_flags; } ;
struct TYPE_2__ {struct ecore_queue_update_params update; } ;
struct ecore_queue_state_params {TYPE_1__ params; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct ecore_queue_update_params*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_queue_state_params*) ;

__attribute__((used)) static inline int FUNC_3(struct bxe_softc *VAR_2,
     struct ecore_queue_state_params *VAR_3)
{
 struct ecore_queue_update_params *VAR_4 = &VAR_3->params.update;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));

 FUNC_1(VAR_0, &VAR_4->update_flags);
 FUNC_1(VAR_1, &VAR_4->update_flags);

 return FUNC_2(VAR_2, VAR_3);
}
