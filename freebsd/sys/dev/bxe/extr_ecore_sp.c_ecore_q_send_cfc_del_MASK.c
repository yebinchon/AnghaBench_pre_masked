
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {size_t cid_index; } ;
struct TYPE_4__ {TYPE_1__ cfc_del; } ;
struct ecore_queue_state_params {TYPE_2__ params; struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {size_t max_cos; int * cids; int cl_id; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (char*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ,int ) ;

__attribute__((used)) static inline int FUNC_2(struct bxe_softc *VAR_3,
           struct ecore_queue_state_params *VAR_4)
{
 struct ecore_queue_sp_obj *VAR_5 = VAR_4->q_obj;
 uint8_t VAR_6 = VAR_4->params.cfc_del.cid_index;

 if (VAR_6 >= VAR_5->max_cos) {
  FUNC_0("queue[%d]: cid_index (%d) is out of range\n",
     VAR_5->cl_id, VAR_6);
  return VAR_0;
 }

 return FUNC_1(VAR_3, VAR_2,
        VAR_5->cids[VAR_6], 0,
        VAR_1);
}
