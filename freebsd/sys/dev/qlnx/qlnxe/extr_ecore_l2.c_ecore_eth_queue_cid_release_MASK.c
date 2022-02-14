
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_cid {int vf_legacy; scalar_t__ vfid; int cid; } ;
struct ecore_hwfn {int p_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ecore_queue_cid*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,scalar_t__) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_queue_cid*) ;

void FUNC_4(struct ecore_hwfn *VAR_2,
     struct ecore_queue_cid *VAR_3)
{
 bool VAR_4 = !!(VAR_3->vf_legacy &
         VAR_0);




 if (FUNC_0(VAR_2->p_dev) && !VAR_4)
  FUNC_2(VAR_2, VAR_3->cid, VAR_3->vfid);


 if (VAR_3->vfid == VAR_1)
  FUNC_3(VAR_2, VAR_3);

 FUNC_1(VAR_2->p_dev, VAR_3);
}
