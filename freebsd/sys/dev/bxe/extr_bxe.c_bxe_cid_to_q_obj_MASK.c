
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ecore_queue_sp_obj {int dummy; } ;
struct bxe_softc {TYPE_1__* sp_objs; } ;
struct TYPE_2__ {struct ecore_queue_sp_obj q_obj; } ;


 int FUNC_0 (struct bxe_softc*,int ,char*,int ) ;
 size_t FUNC_1 (int ,struct bxe_softc*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ecore_queue_sp_obj *
FUNC_2(struct bxe_softc *VAR_1,
                 uint32_t VAR_2)
{
    FUNC_0(VAR_1, VAR_0, "retrieving fp from cid %d\n", VAR_2);
    return (&VAR_1->sp_objs[FUNC_1(VAR_2, VAR_1)].q_obj);
}
