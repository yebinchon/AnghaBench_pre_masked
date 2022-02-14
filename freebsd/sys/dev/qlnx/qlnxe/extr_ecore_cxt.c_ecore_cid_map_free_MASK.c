
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_hwfn {int p_dev; struct ecore_cxt_mngr* p_cxt_mngr; } ;
struct ecore_cxt_mngr {TYPE_2__** acquired_vf; TYPE_1__* acquired; } ;
struct TYPE_4__ {scalar_t__ start_cid; scalar_t__ max_count; void* cid_map; } ;
struct TYPE_3__ {scalar_t__ start_cid; scalar_t__ max_count; void* cid_map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,void*) ;
 void* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_3)
{
 struct ecore_cxt_mngr *VAR_4 = VAR_3->p_cxt_mngr;
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_0(VAR_3->p_dev, VAR_4->acquired[VAR_5].cid_map);
  VAR_4->acquired[VAR_5].cid_map = VAR_2;
  VAR_4->acquired[VAR_5].max_count = 0;
  VAR_4->acquired[VAR_5].start_cid = 0;

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   FUNC_0(VAR_3->p_dev,
      VAR_4->acquired_vf[VAR_5][VAR_6].cid_map);
   VAR_4->acquired_vf[VAR_5][VAR_6].cid_map = VAR_2;
   VAR_4->acquired_vf[VAR_5][VAR_6].max_count = 0;
   VAR_4->acquired_vf[VAR_5][VAR_6].start_cid = 0;
  }
 }
}
