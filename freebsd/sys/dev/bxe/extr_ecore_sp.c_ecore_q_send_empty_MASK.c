
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_state_params {struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {int * cids; } ;
struct bxe_softc {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct bxe_softc *VAR_3,
         struct ecore_queue_state_params *VAR_4)
{
 struct ecore_queue_sp_obj *VAR_5 = VAR_4->q_obj;

 return FUNC_0(VAR_3, VAR_2,
        VAR_5->cids[VAR_0], 0,
        VAR_1);
}
