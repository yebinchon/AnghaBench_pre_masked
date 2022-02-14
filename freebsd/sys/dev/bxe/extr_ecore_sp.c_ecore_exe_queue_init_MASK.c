
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_qable_obj {int dummy; } ecore_qable_obj ;
struct ecore_exe_queue_obj {int exe_chunk_len; int get; int execute; int optimize; int remove; int validate; union ecore_qable_obj* owner; int lock; int pending_comp; int exe_queue; } ;
struct bxe_softc {int dummy; } ;
typedef int exe_q_validate ;
typedef int exe_q_remove ;
typedef int exe_q_optimize ;
typedef int exe_q_get ;
typedef int exe_q_execute ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ecore_exe_queue_obj*,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;
 int FUNC_3 (int *,struct bxe_softc*) ;

__attribute__((used)) static inline void FUNC_4(struct bxe_softc *VAR_0,
     struct ecore_exe_queue_obj *VAR_1,
     int VAR_2,
     union ecore_qable_obj *VAR_3,
     exe_q_validate VAR_4,
     exe_q_remove VAR_5,
     exe_q_optimize VAR_6,
     exe_q_execute VAR_7,
     exe_q_get VAR_8)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 FUNC_0(&VAR_1->exe_queue);
 FUNC_0(&VAR_1->pending_comp);

 FUNC_3(&VAR_1->lock, VAR_0);

 VAR_1->exe_chunk_len = VAR_2;
 VAR_1->owner = VAR_3;


 VAR_1->validate = VAR_4;
 VAR_1->remove = VAR_5;
 VAR_1->optimize = VAR_6;
 VAR_1->execute = VAR_7;
 VAR_1->get = VAR_8;

 FUNC_2(VAR_0, "Setup the execution queue with the chunk length of %d\n",
    VAR_2);
}
